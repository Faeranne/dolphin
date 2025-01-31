// Copyright 2023 Dolphin Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#ifdef USE_RETRO_ACHIEVEMENTS
#include <QWidget>

class AchievementsWindow;
class QGroupBox;
class QVBoxLayout;
class QLabel;
class QLineEdit;
class QPushButton;
class ToolTipCheckBox;

class AchievementSettingsWidget final : public QWidget
{
  Q_OBJECT
public:
  explicit AchievementSettingsWidget(QWidget* parent, AchievementsWindow* parent_window);

private:
  void OnControllerInterfaceConfigure();

  void CreateLayout();
  void ConnectWidgets();

  void LoadSettings();
  void SaveSettings();

  void ToggleRAIntegration();
  void Login();
  void Logout();
  void ToggleAchievements();
  void ToggleLeaderboards();
  void ToggleRichPresence();
  void ToggleHardcore();
  void ToggleProgress();
  void ToggleBadges();
  void ToggleUnofficial();
  void ToggleEncore();

  AchievementsWindow* parent_window;

  QGroupBox* m_common_box;
  QVBoxLayout* m_common_layout;
  ToolTipCheckBox* m_common_integration_enabled_input;
  QLabel* m_common_login_failed;
  QLabel* m_common_username_label;
  QLineEdit* m_common_username_input;
  QLabel* m_common_password_label;
  QLineEdit* m_common_password_input;
  QPushButton* m_common_login_button;
  QPushButton* m_common_logout_button;
  ToolTipCheckBox* m_common_achievements_enabled_input;
  ToolTipCheckBox* m_common_leaderboards_enabled_input;
  ToolTipCheckBox* m_common_rich_presence_enabled_input;
  ToolTipCheckBox* m_common_progress_enabled_input;
  ToolTipCheckBox* m_common_badges_enabled_input;
  ToolTipCheckBox* m_common_unofficial_enabled_input;
  ToolTipCheckBox* m_common_encore_enabled_input;
};

#endif  // USE_RETRO_ACHIEVEMENTS

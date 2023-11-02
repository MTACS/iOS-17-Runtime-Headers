
@interface CSLockScreenTestPluginSettings : PTSettings {
    long long  _backgroundStyle;
    bool  _disableOnUnlock;
    bool  _enableLostModePlugin;
    bool  _enablePlugin;
    bool  _hideStatusBar;
    bool  _hideSubtitle;
    bool  _hideTimeAndDate;
    long long  _notificationBehavior;
    long long  _presentationStyle;
    bool  _restrictCamera;
    bool  _restrictControlCenter;
    bool  _restrictLogout;
    bool  _restrictMediaControls;
    bool  _restrictSiri;
    bool  _restrictTodayCenter;
    bool  _restrictTouchID;
    bool  _restrictUnlock;
    NSString * _subtitleValue;
}

@property long long backgroundStyle;
@property bool disableOnUnlock;
@property bool enableLostModePlugin;
@property bool enablePlugin;
@property bool hideStatusBar;
@property bool hideSubtitle;
@property bool hideTimeAndDate;
@property long long notificationBehavior;
@property long long presentationStyle;
@property bool restrictCamera;
@property bool restrictControlCenter;
@property bool restrictLogout;
@property bool restrictMediaControls;
@property bool restrictSiri;
@property bool restrictTodayCenter;
@property bool restrictTouchID;
@property bool restrictUnlock;
@property (retain) NSString *subtitleValue;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (long long)backgroundStyle;
- (bool)disableOnUnlock;
- (bool)enableLostModePlugin;
- (bool)enablePlugin;
- (bool)hideStatusBar;
- (bool)hideSubtitle;
- (bool)hideTimeAndDate;
- (long long)notificationBehavior;
- (long long)presentationStyle;
- (bool)restrictCamera;
- (bool)restrictControlCenter;
- (bool)restrictLogout;
- (bool)restrictMediaControls;
- (bool)restrictSiri;
- (bool)restrictTodayCenter;
- (bool)restrictTouchID;
- (bool)restrictUnlock;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setDefaultValues;
- (void)setDisableOnUnlock:(bool)arg1;
- (void)setEnableLostModePlugin:(bool)arg1;
- (void)setEnablePlugin:(bool)arg1;
- (void)setHideStatusBar:(bool)arg1;
- (void)setHideSubtitle:(bool)arg1;
- (void)setHideTimeAndDate:(bool)arg1;
- (void)setNotificationBehavior:(long long)arg1;
- (void)setPresentationStyle:(long long)arg1;
- (void)setRestrictCamera:(bool)arg1;
- (void)setRestrictControlCenter:(bool)arg1;
- (void)setRestrictLogout:(bool)arg1;
- (void)setRestrictMediaControls:(bool)arg1;
- (void)setRestrictSiri:(bool)arg1;
- (void)setRestrictTodayCenter:(bool)arg1;
- (void)setRestrictTouchID:(bool)arg1;
- (void)setRestrictUnlock:(bool)arg1;
- (void)setSubtitleValue:(id)arg1;
- (id)subtitleValue;

@end

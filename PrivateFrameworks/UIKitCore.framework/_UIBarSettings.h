
@interface _UIBarSettings : PTSettings {
    long long  _backgroundMode;
    bool  _colorByBarType;
    bool  _retainShadow;
    _UITabBarSettings * _tabBarSettings;
}

@property (nonatomic) long long backgroundMode;
@property (nonatomic) bool colorByBarType;
@property (nonatomic) bool retainShadow;
@property (nonatomic, retain) _UITabBarSettings *tabBarSettings;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (long long)backgroundMode;
- (bool)colorByBarType;
- (bool)retainShadow;
- (void)setBackgroundMode:(long long)arg1;
- (void)setColorByBarType:(bool)arg1;
- (void)setDefaultValues;
- (void)setRetainShadow:(bool)arg1;
- (void)setTabBarSettings:(id)arg1;
- (id)tabBarSettings;

@end

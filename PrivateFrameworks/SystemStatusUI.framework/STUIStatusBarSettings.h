
@interface STUIStatusBarSettings : PTSettings {
    bool  _alwaysAutomaticStyle;
    long long  _forcedMode;
    STUIItemSettings * _itemSettings;
    STUIVisualProviderSettings * _visualProviderSettings;
}

@property (nonatomic) bool alwaysAutomaticStyle;
@property (nonatomic) long long forcedMode;
@property (nonatomic, retain) STUIItemSettings *itemSettings;
@property (nonatomic, retain) STUIVisualProviderSettings *visualProviderSettings;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (bool)alwaysAutomaticStyle;
- (long long)forcedMode;
- (id)itemSettings;
- (void)setAlwaysAutomaticStyle:(bool)arg1;
- (void)setDefaultValues;
- (void)setForcedMode:(long long)arg1;
- (void)setItemSettings:(id)arg1;
- (void)setVisualProviderSettings:(id)arg1;
- (id)visualProviderSettings;

@end

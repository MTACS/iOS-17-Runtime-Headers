
@interface _UIFocusSettings : PTSettings {
    _UIFocusDeferralSettings * _deferralSettings;
    _UIFocusHaloSettings * _haloSettings;
}

@property (nonatomic, retain) _UIFocusDeferralSettings *deferralSettings;
@property (nonatomic, retain) _UIFocusHaloSettings *haloSettings;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (id)deferralSettings;
- (id)haloSettings;
- (void)setDefaultValues;
- (void)setDeferralSettings:(id)arg1;
- (void)setHaloSettings:(id)arg1;

@end

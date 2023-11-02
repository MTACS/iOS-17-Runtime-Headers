
@interface SBPIPShadowSettings : PTSettings {
    SBDropShadowSettings * _bodyShadowSettings;
    SBDropShadowSettings * _tabShadowSettings;
}

@property (nonatomic, retain) SBDropShadowSettings *bodyShadowSettings;
@property (nonatomic, retain) SBDropShadowSettings *tabShadowSettings;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (id)bodyShadowSettings;
- (void)setBodyShadowSettings:(id)arg1;
- (void)setTabShadowSettings:(id)arg1;
- (id)tabShadowSettings;

@end

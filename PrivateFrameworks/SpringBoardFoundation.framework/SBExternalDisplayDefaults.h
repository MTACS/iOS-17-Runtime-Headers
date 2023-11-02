
@interface SBExternalDisplayDefaults : SBAbstractSpringBoardDefaultDomain <SBDisplayArrangementPreferenceProvider>

@property (nonatomic) bool allowWirelessDisplaysForExtendedDisplayMode;
@property (nonatomic) unsigned int arrangementEdge;
@property (nonatomic) double arrangementOffset;
@property (nonatomic) bool chamois_97748869;
@property (nonatomic) double contentsScale;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *displayModeSettingsMap;
@property (nonatomic) unsigned long long externalDisplayEducationReasons;
@property (readonly) unsigned long long hash;
@property (getter=isMirroringEnabled, nonatomic) bool mirroringEnabled;
@property (readonly) Class superclass;

- (void)_bindAndRegisterDefaults;
- (id)_constructDisplaySettingsMap;
- (void)_saveDisplaySettingsMapToStore:(id)arg1;
- (id)description;
- (id)displayModeSettingsForDisplay:(id)arg1;
- (bool)displaySupportsExtendedDisplayMode:(id)arg1;
- (id)observeDisplayModeSettingsOnQueue:(id)arg1 withBlock:(id /* block */)arg2;
- (void)resetPrototypeSettingAdjustableDefaults;
- (void)setDisplayModeSettings:(id)arg1 forDisplaysMatchingPredicates:(id)arg2;

@end

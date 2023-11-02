
@interface CARAppearanceManager : NSObject {
    NSMutableDictionary * _appearanceModeDictionary;
    NSMutableDictionary * _appearanceModeSettingDictionary;
    NSMutableDictionary * _currentEffectiveMapStyle;
    NSMutableDictionary * _currentEffectiveUIStyle;
    <CARAppearanceManagerDelegate> * _delegate;
    bool  _locationBasedNightMode;
    bool  _locationNightModeDisabled;
    NSMutableDictionary * _mapAppearanceModeDictionary;
    NSMutableDictionary * _mapAppearanceModeSettingDictionary;
    NSMutableDictionary * _nightModeDictionary;
    NSArray * _screens;
}

@property (nonatomic, retain) NSMutableDictionary *appearanceModeDictionary;
@property (nonatomic, retain) NSMutableDictionary *appearanceModeSettingDictionary;
@property (nonatomic, retain) NSMutableDictionary *currentEffectiveMapStyle;
@property (nonatomic, retain) NSMutableDictionary *currentEffectiveUIStyle;
@property (nonatomic) <CARAppearanceManagerDelegate> *delegate;
@property (nonatomic) bool locationBasedNightMode;
@property (nonatomic) bool locationNightModeDisabled;
@property (nonatomic, retain) NSMutableDictionary *mapAppearanceModeDictionary;
@property (nonatomic, retain) NSMutableDictionary *mapAppearanceModeSettingDictionary;
@property (nonatomic, retain) NSMutableDictionary *nightModeDictionary;
@property (nonatomic, retain) NSArray *screens;

+ (long long)_carUserInterfaceStyleForAppearanceMode:(unsigned long long)arg1;
+ (id)_descriptionForAppearanceSetting:(long long)arg1;

- (void).cxx_destruct;
- (id)_mainScreenInfo;
- (void)_resolveMapsStylesAndNotify:(bool)arg1;
- (void)_resolveUIStylesAndNotify:(bool)arg1;
- (id)_screenInfoForScreenUUID:(id)arg1;
- (void)_setInitialDisplayNightModeForScreen:(id)arg1;
- (void)_setInitialMapAppearanceNumberForScreen:(id)arg1;
- (void)_setInitialUIAppearanceNumberForScreen:(id)arg1;
- (id)appearanceModeDictionary;
- (id)appearanceModeSettingDictionary;
- (id)currentEffectiveMapStyle;
- (id)currentEffectiveUIStyle;
- (id)delegate;
- (bool)effectiveGlobalNightMode;
- (long long)effectiveStyleForMapAppearanceForScreenUUID:(id)arg1;
- (long long)effectiveStyleForUIAppearanceForScreenUUID:(id)arg1;
- (void)handleLocationBasedNightModeUpdate:(bool)arg1;
- (void)handleMapAppearanceUpdateWithParameters:(id)arg1;
- (void)handleNightModeUpdateWithParameters:(id)arg1;
- (void)handleUIAppearanceUpdateWithParameters:(id)arg1;
- (id)initWithScreens:(id)arg1 initialSystemNightMode:(bool)arg2 initialLocationBasedNightMode:(bool)arg3 delegate:(id)arg4;
- (bool)locationBasedNightMode;
- (bool)locationNightModeDisabled;
- (id)mapAppearanceModeDictionary;
- (id)mapAppearanceModeSettingDictionary;
- (id)nightModeDictionary;
- (id)screens;
- (void)setAppearanceModeDictionary:(id)arg1;
- (void)setAppearanceModeSettingDictionary:(id)arg1;
- (void)setCurrentEffectiveMapStyle:(id)arg1;
- (void)setCurrentEffectiveUIStyle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableLocationNightMode;
- (void)setLocationBasedNightMode:(bool)arg1;
- (void)setLocationNightModeDisabled:(bool)arg1;
- (void)setMapAppearanceModeDictionary:(id)arg1;
- (void)setMapAppearanceModeSettingDictionary:(id)arg1;
- (void)setNightModeDictionary:(id)arg1;
- (void)setScreens:(id)arg1;

@end

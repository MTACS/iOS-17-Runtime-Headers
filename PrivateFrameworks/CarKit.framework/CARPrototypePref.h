
@interface CARPrototypePref : NSObject {
    id  _defaultValue;
    NSString * _domain;
    NSString * _key;
    NSString * _title;
    id /* block */  _valueChangedBlock;
}

@property (nonatomic) bool cachedState;
@property (nonatomic, copy) id cachedValue;
@property (nonatomic, readonly) id cachedValueOrDefault;
@property (nonatomic, copy) id defaultValue;
@property (nonatomic, copy) NSString *domain;
@property (nonatomic) bool internalSettingsState;
@property (nonatomic, copy) id internalSettingsValue;
@property (nonatomic, copy) NSString *key;
@property (nonatomic) bool state;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) id value;
@property (nonatomic, copy) id /* block */ valueChangedBlock;
@property (nonatomic, readonly) id valueOrDefault;

+ (id)_confirmedSafe;
+ (id)_qaModeLockout;
+ (id)allowUnlimitedConnectionEvents;
+ (id)audioSharingEnabled;
+ (bool)confirmedSafe;
+ (id)contentSize;
+ (id)disableLocationNightMode;
+ (id)fakeNeatlineDashboardSupport;
+ (id)flipDashboardLayout;
+ (id)force2xCluster;
+ (id)interfaceStyle;
+ (id)latestInterfaceStyle;
+ (id)nowPlayingAlbumArt;
+ (id)prefWithDomain:(id)arg1 key:(id)arg2 title:(id)arg3 defaultValue:(id)arg4 valueChangedBlock:(id /* block */)arg5;
+ (id)prototypePrefCache;
+ (id)prototypePrefs;
+ (bool)qaModeLockout;
+ (void)setConfirmedSafe:(bool)arg1;
+ (void)setPrototypePrefCache:(id)arg1;
+ (void)setQaModeLockout:(bool)arg1;
+ (id)shellCAFDisabled;
+ (id)showCarPlayTemplateUIHostInCluster;
+ (id)showDisclaimerLabel;
+ (id)showInternalApps;
+ (id)showInternalSettings;
+ (id)showPrototypeApps;
+ (id)showSerialNumber;
+ (bool)showTrustedLockout;
+ (id)smartWidgetDebugGestures;
+ (id)smartWidgetDebugShowScore;
+ (id)smartWidgetRelaxHomeInRangeCheck;
+ (id)statusBarEdgeOverride;
+ (id)statusBarHorizontalThreshold;
+ (id)useNightModeTester;
+ (id)useSceneInterfaceStyle;

- (void).cxx_destruct;
- (bool)cachedState;
- (id)cachedValue;
- (id)cachedValueOrDefault;
- (id)defaultValue;
- (id)description;
- (id)domain;
- (bool)internalSettingsState;
- (id)internalSettingsValue;
- (id)key;
- (void)setCachedState:(bool)arg1;
- (void)setCachedValue:(id)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setInternalSettingsState:(bool)arg1;
- (void)setInternalSettingsValue:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setState:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setValueChangedBlock:(id /* block */)arg1;
- (bool)state;
- (id)title;
- (id)value;
- (id /* block */)valueChangedBlock;
- (id)valueOrDefault;

@end

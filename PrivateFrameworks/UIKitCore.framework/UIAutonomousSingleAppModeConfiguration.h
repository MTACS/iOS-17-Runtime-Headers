
@interface UIAutonomousSingleAppModeConfiguration : NSObject <NSCopying> {
    NSDictionary * _managedConfigurationSettings;
    NSMutableDictionary * _propertiesAsDictionary;
    unsigned long long  _style;
}

@property (nonatomic) bool allowsAccessibilityShortcut;
@property (nonatomic) bool allowsAutoLock;
@property (nonatomic) bool allowsLockButton;
@property (nonatomic) bool automaticallyRelaunchesAfterAppCrash;
@property (nonatomic, retain) NSDictionary *managedConfigurationSettings;
@property (nonatomic, readonly) NSDictionary *propertiesAsDictionary;
@property (nonatomic) unsigned long long style;

+ (id)defaultConfiguration;
+ (id)defaultConfigurationForStyle:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)__gaxTrampoline_defaultBoolValueForFeatureKey:(id)arg1;
- (bool)_boolValueForFeatureKey:(id)arg1;
- (void)_setBoolValue:(bool)arg1 forFeatureKey:(id)arg2;
- (bool)allowsAccessibilityShortcut;
- (bool)allowsAutoLock;
- (bool)allowsLockButton;
- (bool)automaticallyRelaunchesAfterAppCrash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)managedConfigurationSettings;
- (id)propertiesAsDictionary;
- (void)setAllowsAccessibilityShortcut:(bool)arg1;
- (void)setAllowsAutoLock:(bool)arg1;
- (void)setAllowsLockButton:(bool)arg1;
- (void)setAutomaticallyRelaunchesAfterAppCrash:(bool)arg1;
- (void)setManagedConfigurationSettings:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (unsigned long long)style;

@end

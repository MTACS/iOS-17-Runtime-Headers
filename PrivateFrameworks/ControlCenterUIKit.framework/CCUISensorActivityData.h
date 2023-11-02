
@interface CCUISensorActivityData : NSObject <NSCopying> {
    NSString * _attributionGroup;
    NSString * _bundleIdentifier;
    NSString * _displayName;
    NSString * _executableDisplayName;
    bool  _isSystemService;
    bool  _launchToSettings;
    UIColor * _sensorIndicatorColor;
    unsigned long long  _sensorType;
    bool  _usedRecently;
    NSString * _website;
}

@property (nonatomic, copy) NSString *attributionGroup;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *executableDisplayName;
@property (nonatomic) bool isSystemService;
@property (nonatomic) bool launchToSettings;
@property (nonatomic, retain) UIColor *sensorIndicatorColor;
@property (nonatomic) unsigned long long sensorType;
@property (nonatomic) bool usedRecently;
@property (nonatomic, copy) NSString *website;

+ (id)_genericLocationSystemServiceActivity;

- (void).cxx_destruct;
- (id)attributionGroup;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)displayName;
- (id)executableDisplayName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isSystemService;
- (bool)launchToSettings;
- (id)sensorIndicatorColor;
- (unsigned long long)sensorType;
- (void)setAttributionGroup:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setExecutableDisplayName:(id)arg1;
- (void)setIsSystemService:(bool)arg1;
- (void)setLaunchToSettings:(bool)arg1;
- (void)setSensorIndicatorColor:(id)arg1;
- (void)setSensorType:(unsigned long long)arg1;
- (void)setUsedRecently:(bool)arg1;
- (void)setWebsite:(id)arg1;
- (bool)usedRecently;
- (id)website;

@end

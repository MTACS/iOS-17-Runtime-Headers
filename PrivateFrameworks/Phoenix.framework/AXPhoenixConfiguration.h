
@interface AXPhoenixConfiguration : NSObject {
    unsigned long long  _assetVersion;
    AXPhoenixClassifierConfiguration * _classifierConfiguration;
    NSString * _classifierConfigurationKey;
    NSString * _majorVersion;
    NSString * _majorVersionKey;
    NSString * _minorVersion;
    NSString * _minorVersionKey;
    AXPhoenixMitigatorConfiguration * _mitigatorConfiguration;
    NSString * _mitigatorConfigurationKey;
}

@property (nonatomic) unsigned long long assetVersion;
@property (nonatomic, retain) AXPhoenixClassifierConfiguration *classifierConfiguration;
@property (nonatomic, retain) NSString *classifierConfigurationKey;
@property (nonatomic, retain) NSString *majorVersion;
@property (nonatomic, retain) NSString *majorVersionKey;
@property (nonatomic, retain) NSString *minorVersion;
@property (nonatomic, retain) NSString *minorVersionKey;
@property (nonatomic, retain) AXPhoenixMitigatorConfiguration *mitigatorConfiguration;
@property (nonatomic, retain) NSString *mitigatorConfigurationKey;

- (void).cxx_destruct;
- (void)_initializeKeys;
- (void)_setDefaultConfiguration;
- (id)_updateConfigWithContentsOfDictionary:(id)arg1;
- (unsigned long long)assetVersion;
- (id)classifierConfiguration;
- (id)classifierConfigurationKey;
- (id)init;
- (id)initWithContentsOfFileAtPath:(id)arg1;
- (id)majorVersion;
- (id)majorVersionKey;
- (id)minorVersion;
- (id)minorVersionKey;
- (id)mitigatorConfiguration;
- (id)mitigatorConfigurationKey;
- (void)setAssetVersion:(unsigned long long)arg1;
- (void)setClassifierConfiguration:(id)arg1;
- (void)setClassifierConfigurationKey:(id)arg1;
- (void)setConfigurationAssetVersion:(unsigned long long)arg1;
- (void)setMajorVersion:(id)arg1;
- (void)setMajorVersionKey:(id)arg1;
- (void)setMinorVersion:(id)arg1;
- (void)setMinorVersionKey:(id)arg1;
- (void)setMitigatorConfiguration:(id)arg1;
- (void)setMitigatorConfigurationKey:(id)arg1;
- (id)toStringifiedJSON;

@end

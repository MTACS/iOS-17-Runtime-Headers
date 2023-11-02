
@interface GEOResourceManifestConfiguration : NSObject <NSSecureCoding> {
    NSString * _applicationIdentifier;
    NSString * _applicationVersion;
    NSString * _countryCode;
    NSString * _dataDirectory;
    int  _defaultScale;
    NSString * _environment;
    NSString * _hardwareIdentifier;
    NSString * _os;
    NSString * _osBuild;
    NSString * _osVersion;
    bool  _requiresLegacyFormat;
    unsigned int  _tileGroupIdentifier;
    NSArray * _tileSetOverrides;
    NSString * _urlTemplate;
}

@property (nonatomic, copy) NSString *applicationIdentifier;
@property (nonatomic, copy) NSString *applicationVersion;
@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic, readonly) int defaultScale;
@property (nonatomic, readonly) NSString *directorySuffix;
@property (nonatomic, copy) NSString *environment;
@property (nonatomic, copy) NSString *hardwareIdentifier;
@property (nonatomic, copy) NSString *os;
@property (nonatomic, copy) NSString *osBuild;
@property (nonatomic, copy) NSString *osVersion;
@property (nonatomic, readonly) bool requiresLegacyFormat;
@property (nonatomic) unsigned int tileGroupIdentifier;
@property (nonatomic, copy) NSArray *tileSetOverrides;
@property (nonatomic, copy) NSString *urlTemplate;

+ (id)configurationWithPairedDevice:(id)arg1;
+ (id)defaultConfiguration;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_directorySuffixParameters;
- (id)applicationIdentifier;
- (id)applicationVersion;
- (id)countryCode;
- (id)dataDirectoryFor:(unsigned long long)arg1;
- (int)defaultScale;
- (id)directorySuffix;
- (void)encodeWithCoder:(id)arg1;
- (id)environment;
- (id)hardwareIdentifier;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isDefaultConfiguration;
- (bool)isEqual:(id)arg1;
- (id)manifestDictionaryRepresentation;
- (id)os;
- (id)osBuild;
- (id)osVersion;
- (bool)requiresLegacyFormat;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setApplicationVersion:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setDataDirectory:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setHardwareIdentifier:(id)arg1;
- (void)setOs:(id)arg1;
- (void)setOsBuild:(id)arg1;
- (void)setOsVersion:(id)arg1;
- (void)setTileGroupIdentifier:(unsigned int)arg1;
- (void)setTileSetOverrides:(id)arg1;
- (void)setUrlTemplate:(id)arg1;
- (unsigned int)tileGroupIdentifier;
- (id)tileSetOverrides;
- (id)urlTemplate;

@end

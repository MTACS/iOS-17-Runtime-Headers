
@interface SUControllerDocumentation : NSObject <NSSecureCoding> {
    NSString * _currentLanguage;
    NSString * _humanReadableUpdateName;
    NSData * _licenseAgreement;
    NSURL * _localBundleURL;
    NSData * _releaseNotes;
    NSData * _releaseNotesSummary;
    NSString * _serverAssetAlgorithm;
    long long  _serverAssetChunkSize;
    NSData * _serverAssetMeasurement;
    NSURL * _serverAssetURL;
}

@property (nonatomic, retain) NSString *currentLanguage;
@property (nonatomic, retain) NSString *humanReadableUpdateName;
@property (nonatomic, retain) NSData *licenseAgreement;
@property (nonatomic, retain) NSURL *localBundleURL;
@property (nonatomic, retain) NSData *releaseNotes;
@property (nonatomic, retain) NSData *releaseNotesSummary;
@property (nonatomic, retain) NSString *serverAssetAlgorithm;
@property (nonatomic) long long serverAssetChunkSize;
@property (nonatomic, retain) NSData *serverAssetMeasurement;
@property (nonatomic, retain) NSURL *serverAssetURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_loadBundleResources;
- (id)_resourceFromBundle:(struct __CFBundle { }*)arg1 forKey:(id)arg2;
- (id)currentLanguage;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)humanReadableUpdateName;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentationBundleURL:(id)arg1 serverAssetURL:(id)arg2 serverAssetMeasurement:(id)arg3 serverAssetAlgorithm:(id)arg4 serverAssetChunkSize:(long long)arg5;
- (bool)isEqual:(id)arg1;
- (id)licenseAgreement;
- (id)localBundleURL;
- (id)releaseNotes;
- (id)releaseNotesSummary;
- (id)serverAssetAlgorithm;
- (long long)serverAssetChunkSize;
- (id)serverAssetMeasurement;
- (id)serverAssetURL;
- (void)setCurrentLanguage:(id)arg1;
- (void)setHumanReadableUpdateName:(id)arg1;
- (void)setLicenseAgreement:(id)arg1;
- (void)setLocalBundleURL:(id)arg1;
- (void)setReleaseNotes:(id)arg1;
- (void)setReleaseNotesSummary:(id)arg1;
- (void)setServerAssetAlgorithm:(id)arg1;
- (void)setServerAssetChunkSize:(long long)arg1;
- (void)setServerAssetMeasurement:(id)arg1;
- (void)setServerAssetURL:(id)arg1;

@end


@interface PRSPosterArchiveManifest : NSObject {
    NSDictionary * _dictionaryRepresentation;
}

@property (nonatomic, readonly) long long archiveVersion;
@property (nonatomic, readonly) NSString *buildVersion;
@property (nonatomic, readonly) NSUUID *configurationUUID;
@property (nonatomic, readonly) long long dataStoreVersion;
@property (nonatomic, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSString *extensionIdentifier;
@property (nonatomic, readonly) unsigned long long latestConfigurationSupplement;
@property (nonatomic, readonly) unsigned long long latestConfigurationVersion;
@property (nonatomic, readonly) NSString *role;

+ (bool)isManifestDictionaryValid:(id)arg1;
+ (long long)manifestVersion;
+ (id)unsupportedVersions;

- (void).cxx_destruct;
- (long long)archiveVersion;
- (id)buildVersion;
- (id)configurationUUID;
- (id)dataRepresentationWithError:(out id*)arg1;
- (long long)dataStoreVersion;
- (id)dictionaryRepresentation;
- (id)extensionIdentifier;
- (id)initWithConfigurationAttributes:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (unsigned long long)latestConfigurationSupplement;
- (unsigned long long)latestConfigurationVersion;
- (id)role;
- (void)setDictionaryRepresentation:(id)arg1;

@end


@interface NilAsset : NSObject <NLAsset>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void)appendPathWithServiceAssetFolder:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)getAssetLocale;
- (id)getAssetMetadata;
- (id)getAssetPath;
- (id)getAssetSetName;
- (long long)getAssetType;
- (id)getAssetVersion;
- (id)initWithCoder:(id)arg1;
- (id)toDictionary;

@end

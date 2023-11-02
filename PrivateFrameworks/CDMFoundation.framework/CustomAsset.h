
@interface CustomAsset : NSObject <NLAsset> {
    NSDictionary * _assetMetadata;
    NSString * _path;
    NSString * _version;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
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
- (id)initWithPath:(id)arg1;
- (id)toDictionary;

@end

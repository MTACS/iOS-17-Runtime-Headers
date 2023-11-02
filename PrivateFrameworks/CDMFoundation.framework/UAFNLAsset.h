
@interface UAFNLAsset : NSObject <NLAsset> {
    NSString * _assetLocale;
    NSDictionary * _assetMetadata;
    NSString * _assetSetName;
    NSString * _assetVersion;
    NSString * _factorName;
    NSString * _path;
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
- (id)getFactorName;
- (id)initForFactor:(id)arg1 withPath:(id)arg2 withAssetSetName:(id)arg3 withUAFMetadata:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (void)processUAFMetadata:(id)arg1;
- (id)toDictionary;

@end

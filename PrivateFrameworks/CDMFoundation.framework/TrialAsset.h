
@interface TrialAsset : NSObject <NLAsset> {
    NSDictionary * _assetMetadata;
    NSString * _factorName;
    NSString * _namespaceName;
    NSString * _path;
    NSDictionary * _trialMetadata;
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
- (id)getNamespaceName;
- (id)initForFactor:(id)arg1 inNamespace:(id)arg2 withPath:(id)arg3 withTrialMetadata:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (void)processAssetLocaleInTrialMetadata;
- (id)toDictionary;

@end

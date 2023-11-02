
@interface PGAssetCollectionFeatureSpecification : NSObject <NSSecureCoding> {
    CLSFeederPrefetchOptions * _assetFeederPrefetchOptions;
    NSArray * _featureDefinitions;
    NSString * _featureLabel;
    NSSet * _featureNodes;
    unsigned long long  _featureType;
    bool  _shouldCreateFeatureNodeIfNeeded;
    bool  _shouldRunAtMomentIngest;
}

@property (nonatomic, readonly) CLSFeederPrefetchOptions *assetFeederPrefetchOptions;
@property (nonatomic, readonly) NSArray *featureDefinitions;
@property (nonatomic, readonly) NSString *featureLabel;
@property (nonatomic, retain) NSSet *featureNodes;
@property (nonatomic, readonly) unsigned long long featureType;
@property (nonatomic, readonly) bool shouldCreateFeatureNodeIfNeeded;
@property (nonatomic, readonly) bool shouldRunAtMomentIngest;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_assetUUIDsFromAssets:(id)arg1;
- (id)addFeatureNodeIfNeededWithGraphBuilder:(id)arg1;
- (id)assetFeederPrefetchOptions;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateFeatureNodesWithInstance:(id)arg1 assets:(id)arg2 curationContext:(id)arg3 usingBlock:(id /* block */)arg4;
- (id)featureDefinitions;
- (id)featureLabel;
- (id)featureNodes;
- (id)featureNodesForMomentNodeCollection:(id)arg1;
- (unsigned long long)featureType;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeatureType:(unsigned long long)arg1 featureLabel:(id)arg2 featureDefinitions:(id)arg3 shouldRunAtMomentIngest:(bool)arg4 shouldCreateFeatureNodeIfNeeded:(bool)arg5;
- (id)instanceWithMomentNode:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setFeatureNodes:(id)arg1;
- (bool)shouldCreateFeatureNodeIfNeeded;
- (bool)shouldRunAtMomentIngest;

@end

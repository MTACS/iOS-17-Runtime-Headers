
@interface MLModelAsset : NSObject {
    NSDictionary * _archiveData;
    MLModelConfiguration * _cachedLoadConfiguration;
    NSURL * _compiledURL;
    MLModel * _lazyModel;
    MLModelConfiguration * _loadConfiguration;
    bool  _ranLoad;
}

@property (nonatomic, retain) NSDictionary *archiveData;
@property (nonatomic, retain) MLModelConfiguration *cachedLoadConfiguration;
@property (nonatomic, readonly) <MLClassifier> *classifier;
@property (readonly) NSURL *compiledURL;
@property (nonatomic, retain) MLModel *lazyModel;
@property (nonatomic, retain) MLModelConfiguration *loadConfiguration;
@property (nonatomic, readonly) MLModel *model;
@property (nonatomic) bool ranLoad;
@property (nonatomic, readonly) <MLRegressor> *regressor;

+ (id)fetchNetworkURLFromCompiledModelAtURL:(id)arg1 error:(id*)arg2;
+ (bool)isANESupported;
+ (id)modelAssetWithSpecification:(void*)arg1 compilerOptions:(id)arg2 error:(id*)arg3;
+ (id)modelAssetWithSpecification:(void*)arg1 error:(id*)arg2;
+ (id)modelAssetWithSpecificationData:(id)arg1 error:(id*)arg2;
+ (id)modelAssetWithSpecificationURL:(id)arg1 compilerOptions:(id)arg2 error:(id*)arg3;
+ (id)modelAssetWithSpecificationURL:(id)arg1 error:(id*)arg2;
+ (id)modelAssetWithURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3;
+ (id)modelAssetWithURL:(id)arg1 error:(id*)arg2;
+ (bool)needsANECompilationForModelAtURL:(id)arg1 result:(bool*)arg2 error:(id*)arg3;
+ (bool)purgeANEBinaryForModelAtURL:(id)arg1 error:(id*)arg2;
+ (bool)purgeANEIRForModelAtURL:(id)arg1 error:(id*)arg2;
+ (id)resolveExternalReferencesInSpecificationData:(id)arg1 specificationURL:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)archiveData;
- (id)cachedLoadConfiguration;
- (id)classifier;
- (id)classifierWithError:(id*)arg1;
- (id)compiledURL;
- (id)description;
- (id)initWithArchiveData:(id)arg1;
- (id)initWithURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (id)lazyModel;
- (bool)load:(id*)arg1;
- (id)loadConfiguration;
- (id)model;
- (id)modelWithConfiguration:(id)arg1 error:(id*)arg2;
- (id)modelWithError:(id*)arg1;
- (bool)ranLoad;
- (id)regressor;
- (id)regressorWithError:(id*)arg1;
- (void)setArchiveData:(id)arg1;
- (void)setCachedLoadConfiguration:(id)arg1;
- (void)setLazyModel:(id)arg1;
- (void)setLoadConfiguration:(id)arg1;
- (void)setRanLoad:(bool)arg1;

@end

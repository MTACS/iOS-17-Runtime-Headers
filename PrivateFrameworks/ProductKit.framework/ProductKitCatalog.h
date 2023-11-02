
@interface ProductKitCatalog : NSObject {
    ProductKitCatalogInternal * _underlyingObject;
}

@property (nonatomic, readonly) ProductKitCatalogInternal *underlyingObject;

+ (bool)isProductKitURL:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)underlyingObject;
- (void)updateCatalogWithCompletionHandler:(id /* block */)arg1;
- (void)watchBandFilesForFeatureWithURL:(id)arg1 featureString:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)watchBandFilesForFeatureWithURL:(id)arg1 featureString:(id)arg2 variant:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)watchBandImageForFeatureWithURL:(id)arg1 featureString:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)watchBandImageForFeatureWithURL:(id)arg1 featureString:(id)arg2 variant:(id)arg3 completionHandler:(id /* block */)arg4;

@end

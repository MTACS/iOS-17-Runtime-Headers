
@interface ProductKitCatalogInternal : NSObject {
    void assetManager;
    void catalog;
}

+ (bool)isProductKitURL:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (void)updateCatalogWithCompletionHandler:(id /* block */)arg1;
- (void)watchBandFilesForFeatureWithURL:(id)arg1 featureString:(id)arg2 variant:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)watchBandImageForFeatureWithURL:(id)arg1 featureString:(id)arg2 variant:(id)arg3 completionHandler:(id /* block */)arg4;

@end

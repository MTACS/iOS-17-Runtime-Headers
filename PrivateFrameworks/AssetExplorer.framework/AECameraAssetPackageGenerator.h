
@interface AECameraAssetPackageGenerator : NSObject {
    NSObject<OS_dispatch_queue> * __generationQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_generationQueue;

- (void).cxx_destruct;
- (id)_generationQueue;
- (void)_populatePackage:(id)arg1 fromReviewAsset:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)generatePackageFromReviewAsset:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)init;

@end

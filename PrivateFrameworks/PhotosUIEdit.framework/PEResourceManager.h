
@interface PEResourceManager : NSObject <PEResourceLoaderDelegate> {
    NSObject<OS_dispatch_queue> * _loaderCallbackQueue;
    NSObject<OS_dispatch_queue> * _loadingQueue;
    NSObject<OS_dispatch_queue> * _resourceQueue;
    NSMutableSet * _resourceSet;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *loaderCallbackQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *loadingQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *resourceQueue;
@property (nonatomic, readonly) NSMutableSet *resourceSet;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_removeFromSet:(id)arg1;
- (void)_resourceLoader:(id)arg1 loadedResult:(id)arg2 error:(id)arg3;
- (id)callbackQueue;
- (void)cancelAllRequests;
- (id)compositionControllerWithoutSource:(id)arg1;
- (id)compositionControllerWithoutSource:(id)arg1 originalComposition:(bool)arg2 editorBundleID:(id*)arg3;
- (id)init;
- (void)loadResourceForAsset:(id)arg1 requireLocalResources:(bool)arg2 forceRunAsUnadjustedAsset:(bool)arg3 progressHandler:(id /* block */)arg4 resultHandler:(id /* block */)arg5;
- (id)loaderCallbackQueue;
- (id)loadingQueue;
- (id)originalCompositionControllerWithoutSource:(id)arg1 reconstructIfMissing:(bool)arg2;
- (void)resourceLoader:(id)arg1 request:(id)arg2 didCompleteWithResult:(id)arg3;
- (void)resourceLoader:(id)arg1 request:(id)arg2 downloadProgress:(double)arg3;
- (void)resourceLoader:(id)arg1 request:(id)arg2 mediaLoadDidFailWithError:(id)arg3;
- (id)resourceQueue;
- (id)resourceSet;

@end

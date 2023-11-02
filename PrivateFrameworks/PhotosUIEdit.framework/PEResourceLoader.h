
@interface PEResourceLoader : NSObject {
    unsigned long long  __contentEditingRequestID;
    NSMutableArray * __enqueuedRequests;
    NSString * _adjustmentIdentifierAndVersion;
    <PEAsset> * _asset;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    PEResourceLoadRequest * _currentRequest;
    bool  _forceRunAsUnadjustedAsset;
    NSObject<OS_dispatch_queue> * _loadingQueue;
    NSObject<OS_dispatch_queue> * _processingQueue;
    long long  _resourcesAvailability;
    bool  _simulateEditEntryError;
    bool  _skipDisplaySizeImage;
}

@property (setter=_setContentEditingRequestID:, nonatomic) unsigned long long _contentEditingRequestID;
@property (setter=_setEnqueuedRequests:, nonatomic, retain) NSMutableArray *_enqueuedRequests;
@property (nonatomic, retain) NSString *adjustmentIdentifierAndVersion;
@property (nonatomic, readonly) <PEAsset> *asset;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, retain) PEResourceLoadRequest *currentRequest;
@property (nonatomic) bool forceRunAsUnadjustedAsset;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *loadingQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *processingQueue;
@property (setter=_setResourcesAvailability:, nonatomic) long long resourcesAvailability;
@property (nonatomic) bool simulateEditEntryError;
@property (nonatomic) bool skipDisplaySizeImage;

+ (void)_processResult:(id)arg1 forRequest:(id)arg2 resultHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (bool)_adjustmentDataIsSupported:(id)arg1;
- (unsigned long long)_contentEditingRequestID;
- (void)_dequeueRequestIfNeeded;
- (void)_downloadSignpostEvent:(const char *)arg1;
- (id)_enqueuedRequests;
- (void)_handleSuccess:(bool)arg1 withResult:(id)arg2 forRequest:(id)arg3 error:(id)arg4;
- (void)_initiateRequest:(id)arg1;
- (void)_processContentEditingInputRequestCompletion:(id)arg1 info:(id)arg2 forRequest:(id)arg3;
- (void)_processLoadedContentEditingInput:(id)arg1 info:(id)arg2 forRequest:(id)arg3;
- (void)_requestContentEditingInputForRequest:(id)arg1 networkAccessAllowed:(bool)arg2;
- (void)_setContentEditingRequestID:(unsigned long long)arg1;
- (void)_setEnqueuedRequests:(id)arg1;
- (void)_setResourcesAvailability:(long long)arg1;
- (id)adjustmentIdentifierAndVersion;
- (id)asset;
- (id)callbackQueue;
- (bool)cancelAllRequests;
- (id)currentRequest;
- (void)enqueueRequest:(id)arg1;
- (bool)forceRunAsUnadjustedAsset;
- (id)initWithAsset:(id)arg1 loadingQueue:(id)arg2;
- (id)loadingQueue;
- (id)processingQueue;
- (long long)resourcesAvailability;
- (void)setAdjustmentIdentifierAndVersion:(id)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setCurrentRequest:(id)arg1;
- (void)setForceRunAsUnadjustedAsset:(bool)arg1;
- (void)setSimulateEditEntryError:(bool)arg1;
- (void)setSkipDisplaySizeImage:(bool)arg1;
- (bool)simulateEditEntryError;
- (bool)skipDisplaySizeImage;
- (long long)workImageVersionForContentEditingInput:(id)arg1;

@end

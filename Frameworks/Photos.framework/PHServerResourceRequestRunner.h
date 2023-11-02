
@interface PHServerResourceRequestRunner : NSObject {
    <PLResourceDataStore> * _dataStore;
    PLProgressFollower * _dataStoreFollower;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSProgress * _progress;
    long long  _state;
    NSString * _taskIdentifier;
}

@property (nonatomic, readonly) NSString *taskIdentifier;

- (void).cxx_destruct;
- (id)_applyCorrectionsToAssetObjectIDURL:(id)arg1 resourceIdentity:(id)arg2 errorCodes:(id)arg3 library:(id)arg4 reply:(id /* block */)arg5;
- (id)_assetAndRelatedObjectsFromAssetObjectIDURL:(id)arg1 inManagedObjectContext:(id)arg2 error:(id*)arg3;
- (id)_avAssetProxyForOutOfBandHintsAboutAssetForResource:(id)arg1;
- (void)_cancelWithReply:(id /* block */)arg1;
- (void)_handleProgress:(id)arg1;
- (void)_replyToVideoRequestWithURL:(id)arg1 mediaItemMakerData:(id)arg2 mutableInfo:(id)arg3 internalInfo:(id)arg4 error:(id)arg5 pathForAdjustmentFileIfNeeded:(id)arg6 reply:(id /* block */)arg7;
- (bool)_resourceQualifiesForCacheMetricsCollection:(id)arg1 isLivePhoto:(bool)arg2;
- (void)_safeReply:(id /* block */)arg1;
- (id)_urlByAttachingOutOfBandHintsToVideoURL:(id)arg1 assetProxy:(id)arg2 signpostId:(unsigned long long)arg3 hintsBase64String:(id*)arg4;
- (id)applyAssetScopeCorrectionsWithRequest:(id)arg1 errorCodes:(id)arg2 library:(id)arg3 reply:(id /* block */)arg4;
- (id)applyResourceScopeCorrectionsWithRequest:(id)arg1 errorCodes:(id)arg2 library:(id)arg3 reply:(id /* block */)arg4;
- (id)chooseVideoWithRequest:(id)arg1 library:(id)arg2 clientBundleID:(id)arg3 reply:(id /* block */)arg4;
- (void)dealloc;
- (id)initWithTaskIdentifier:(id)arg1;
- (id)makeResourceAvailableWithRequest:(id)arg1 library:(id)arg2 clientBundleID:(id)arg3 reply:(id /* block */)arg4;
- (void)makeResourceUnavailableWithRequest:(id)arg1 library:(id)arg2;
- (id)mutableStreamingHintsForAVAssetProxy:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (id)taskIdentifier;
- (id)videoResourceChoiceForAsset:(id)arg1 context:(id)arg2 loadingMode:(long long*)arg3 request:(id)arg4 shouldReturnAdjustmentInfo:(bool*)arg5 error:(id*)arg6;

@end


@interface PUPhotoKitMediaProviderLivePhotoDownloadSimulation : PUPhotoKitMediaProviderDownloadSimulation {
    NSDictionary * __resultInfo;
    PHLivePhoto * __resultLivePhoto;
    id /* block */  _externalProgressHandler;
    id /* block */  _externalResultHandler;
    id /* block */  _internalProgressHandler;
    id /* block */  _internalResultHandler;
}

@property (setter=_setResultInfo:, nonatomic, copy) NSDictionary *_resultInfo;
@property (setter=_setResultLivePhoto:, nonatomic, retain) PHLivePhoto *_resultLivePhoto;
@property (nonatomic, copy) id /* block */ externalProgressHandler;
@property (nonatomic, copy) id /* block */ externalResultHandler;
@property (nonatomic, readonly, copy) id /* block */ internalProgressHandler;
@property (nonatomic, readonly, copy) id /* block */ internalResultHandler;

- (void).cxx_destruct;
- (void)_handleResultLivePhoto:(id)arg1 info:(id)arg2;
- (id)_resultInfo;
- (id)_resultLivePhoto;
- (void)_setResultInfo:(id)arg1;
- (void)_setResultLivePhoto:(id)arg1;
- (void)endSimulationWithError:(id)arg1;
- (id /* block */)externalProgressHandler;
- (id /* block */)externalResultHandler;
- (id)init;
- (id /* block */)internalProgressHandler;
- (id /* block */)internalResultHandler;
- (void)setExternalProgressHandler:(id /* block */)arg1;
- (void)setExternalResultHandler:(id /* block */)arg1;
- (void)updateSimulationWithProgress:(double)arg1;

@end

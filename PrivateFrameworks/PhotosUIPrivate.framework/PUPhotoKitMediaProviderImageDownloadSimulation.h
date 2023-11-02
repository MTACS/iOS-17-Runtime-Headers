
@interface PUPhotoKitMediaProviderImageDownloadSimulation : PUPhotoKitMediaProviderDownloadSimulation {
    UIImage * __resultImage;
    NSDictionary * __resultInfo;
    id /* block */  _externalProgressHandler;
    id /* block */  _externalResultHandler;
    id /* block */  _internalProgressHandler;
    id /* block */  _internalResultHandler;
}

@property (setter=_setResultImage:, nonatomic, retain) UIImage *_resultImage;
@property (setter=_setResultInfo:, nonatomic, copy) NSDictionary *_resultInfo;
@property (nonatomic, copy) id /* block */ externalProgressHandler;
@property (nonatomic, copy) id /* block */ externalResultHandler;
@property (nonatomic, readonly, copy) id /* block */ internalProgressHandler;
@property (nonatomic, readonly, copy) id /* block */ internalResultHandler;

- (void).cxx_destruct;
- (void)_handleResultImage:(id)arg1 info:(id)arg2;
- (id)_resultImage;
- (id)_resultInfo;
- (void)_setResultImage:(id)arg1;
- (void)_setResultInfo:(id)arg1;
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

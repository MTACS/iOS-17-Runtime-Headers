
@interface PUPhotoKitMediaProviderAVAssetDownloadSimulation : PUPhotoKitMediaProviderDownloadSimulation {
    AVAsset * __resultAVAsset;
    AVAudioMix * __resultAudioMix;
    NSDictionary * __resultInfo;
    id /* block */  _externalProgressHandler;
    id /* block */  _externalResultHandler;
    id /* block */  _internalProgressHandler;
    id /* block */  _internalResultHandler;
}

@property (setter=_setResultAVAsset:, nonatomic, retain) AVAsset *_resultAVAsset;
@property (setter=_setResultAudioMix:, nonatomic, retain) AVAudioMix *_resultAudioMix;
@property (setter=_setResultInfo:, nonatomic, copy) NSDictionary *_resultInfo;
@property (nonatomic, copy) id /* block */ externalProgressHandler;
@property (nonatomic, copy) id /* block */ externalResultHandler;
@property (nonatomic, readonly, copy) id /* block */ internalProgressHandler;
@property (nonatomic, readonly, copy) id /* block */ internalResultHandler;

- (void).cxx_destruct;
- (void)_handleResultAVAsset:(id)arg1 audioMix:(id)arg2 info:(id)arg3;
- (id)_resultAVAsset;
- (id)_resultAudioMix;
- (id)_resultInfo;
- (void)_setResultAVAsset:(id)arg1;
- (void)_setResultAudioMix:(id)arg1;
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

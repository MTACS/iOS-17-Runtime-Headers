
@interface PXPhotoKitLivePhotoVideoContentProvider : PXPhotoKitVideoContentProvider <PXSettingsKeyObserver> {
    long long  _assetPlaybackStyle;
    PXPhotoKitLivePhotoVideoContentProviderSpec * _spec;
    PXVideoStabilizeOperation * _stabilizeOperation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXPhotoKitLivePhotoVideoContentProviderSpec *spec;
@property (readonly) Class superclass;

+ (id)postProcessingOperationQueue;

- (void).cxx_destruct;
- (void)_handleStabilizeOperationFinishedWithProcessingCompletionHandler:(id /* block */)arg1;
- (void)cancelLoading;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 deliveryStrategies:(id)arg3 audioSession:(id)arg4 requestURLOnly:(bool)arg5;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 deliveryStrategies:(id)arg3 audioSession:(id)arg4 spec:(id)arg5;
- (bool)needsPostprocessing;
- (void)postprocessPlayerItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;

@end

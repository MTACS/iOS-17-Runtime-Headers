
@interface PUAssetSharedViewModel : PUViewModel {
    <PUDisplayAsset> * _asset;
    unsigned short  _deferredProcessingNeeded;
    long long  _flippingFullSizeRenderState;
    PXOperationStatus * _loadingStatus;
    bool  _needsDeferredProcessing;
    NSProgress * _saveProgress;
    long long  _saveState;
}

@property (nonatomic, retain) <PUDisplayAsset> *asset;
@property (nonatomic, readonly) PUAssetSharedViewModelChange *currentChange;
@property (nonatomic) unsigned short deferredProcessingNeeded;
@property (nonatomic) long long flippingFullSizeRenderState;
@property (nonatomic, retain) PXOperationStatus *loadingStatus;
@property (nonatomic) bool needsDeferredProcessing;
@property (nonatomic, retain) NSProgress *saveProgress;
@property (nonatomic) long long saveState;

- (void).cxx_destruct;
- (id)asset;
- (id)currentChange;
- (unsigned short)deferredProcessingNeeded;
- (long long)flippingFullSizeRenderState;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (id)loadingStatus;
- (bool)needsDeferredProcessing;
- (id)newViewModelChange;
- (void)registerChangeObserver:(id)arg1;
- (id)saveProgress;
- (long long)saveState;
- (void)setAsset:(id)arg1;
- (void)setDeferredProcessingNeeded:(unsigned short)arg1;
- (void)setFlippingFullSizeRenderState:(long long)arg1;
- (void)setLoadingStatus:(id)arg1;
- (void)setNeedsDeferredProcessing:(bool)arg1;
- (void)setSaveProgress:(id)arg1;
- (void)setSaveState:(long long)arg1;
- (void)unregisterChangeObserver:(id)arg1;

@end

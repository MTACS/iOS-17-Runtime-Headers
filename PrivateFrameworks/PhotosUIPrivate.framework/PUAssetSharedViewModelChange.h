
@interface PUAssetSharedViewModelChange : PUViewModelChange {
    bool  _deferredProcessingNeededChanged;
    bool  _flippingFullSizeRenderStateChanged;
    bool  _loadingStatusChanged;
    bool  _needsDeferredProcessingChanged;
    bool  _saveProgressChanged;
    bool  _saveStateChanged;
}

@property (nonatomic) bool deferredProcessingNeededChanged;
@property (nonatomic) bool flippingFullSizeRenderStateChanged;
@property (nonatomic) bool loadingStatusChanged;
@property (nonatomic) bool needsDeferredProcessingChanged;
@property (nonatomic) bool saveProgressChanged;
@property (nonatomic) bool saveStateChanged;

- (bool)deferredProcessingNeededChanged;
- (bool)flippingFullSizeRenderStateChanged;
- (bool)hasChanges;
- (bool)loadingStatusChanged;
- (bool)needsDeferredProcessingChanged;
- (bool)saveProgressChanged;
- (bool)saveStateChanged;
- (void)setDeferredProcessingNeededChanged:(bool)arg1;
- (void)setFlippingFullSizeRenderStateChanged:(bool)arg1;
- (void)setLoadingStatusChanged:(bool)arg1;
- (void)setNeedsDeferredProcessingChanged:(bool)arg1;
- (void)setSaveProgressChanged:(bool)arg1;
- (void)setSaveStateChanged:(bool)arg1;

@end

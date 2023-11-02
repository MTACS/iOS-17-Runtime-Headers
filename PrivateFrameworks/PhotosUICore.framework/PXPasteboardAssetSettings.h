
@interface PXPasteboardAssetSettings : PXSettings {
    bool  _alwaysUseDataProviderForObjectReference;
    bool  _fileURLEnabled;
    bool  _imageDataEnabled;
    bool  _synchronousFullSizePreviewEnabled;
}

@property (nonatomic) bool alwaysUseDataProviderForObjectReference;
@property (nonatomic) bool fileURLEnabled;
@property (nonatomic) bool imageDataEnabled;
@property (nonatomic) bool synchronousFullSizePreviewEnabled;

+ (id)sharedInstance;

- (bool)alwaysUseDataProviderForObjectReference;
- (bool)fileURLEnabled;
- (bool)imageDataEnabled;
- (id)parentSettings;
- (void)setAlwaysUseDataProviderForObjectReference:(bool)arg1;
- (void)setDefaultValues;
- (void)setFileURLEnabled:(bool)arg1;
- (void)setImageDataEnabled:(bool)arg1;
- (void)setSynchronousFullSizePreviewEnabled:(bool)arg1;
- (bool)synchronousFullSizePreviewEnabled;

@end


@interface PLUIEditImageViewController : PLUIImageViewController {
    id  _delegate;
    int  _mode;
    int  _saveOptions;
}

@property (nonatomic) id delegate;
@property (nonatomic) int mode;

- (unsigned long long)_contentAutoresizingMask;
- (unsigned long long)_tileAutoresizingMask;
- (void)cropOverlay:(id)arg1 didFinishSaving:(id)arg2;
- (int)cropOverlayMode;
- (void)cropOverlayWasCancelled:(id)arg1;
- (void)cropOverlayWasOKed:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (unsigned short)imageFormat;
- (id)imageTile;
- (id)initWithPhoto:(id)arg1;
- (int)mode;
- (id)photo;
- (int)saveOptions;
- (void)setDelegate:(id)arg1;
- (void)setImageSavingOptions:(int)arg1;
- (void)setMode:(int)arg1;

@end

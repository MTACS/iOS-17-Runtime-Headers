
@interface PXWallpaperSuggestionView : UIImageView <PXChangeObserver> {
    <PXDisplayAsset> * _asset;
    unsigned long long  _classificationMode;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentsRect;
    long long  _currentImageIdentifier;
    PXImageRequester * _imageRequester;
    UIImage * _landscapeOverlay;
    PXUIMediaProvider * _mediaProvider;
    bool  _needsRoundedCorner;
    UIImageView * _overlayView;
    UIImage * _portraitOverlay;
    bool  _showClockOverlay;
    bool  _usePosterClassificationBasedCropping;
}

@property (nonatomic, retain) <PXDisplayAsset> *asset;
@property (nonatomic) unsigned long long classificationMode;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentsRect;
@property long long currentImageIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXImageRequester *imageRequester;
@property (nonatomic, retain) UIImage *landscapeOverlay;
@property (nonatomic, retain) PXUIMediaProvider *mediaProvider;
@property (nonatomic) bool needsRoundedCorner;
@property (nonatomic, retain) UIImageView *overlayView;
@property (nonatomic, retain) UIImage *portraitOverlay;
@property (nonatomic) bool showClockOverlay;
@property (readonly) Class superclass;
@property (nonatomic) bool usePosterClassificationBasedCropping;

+ (void)requestSharedOverlayImageWithCompletionBlock:(id /* block */)arg1;
+ (id)sharedWorkQueue;

- (void).cxx_destruct;
- (bool)_isPortrait;
- (void)_resetImageRequester;
- (id)asset;
- (unsigned long long)classificationMode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsRect;
- (long long)currentImageIdentifier;
- (id)imageRequester;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)landscapeOverlay;
- (void)layoutSubviews;
- (id)mediaProvider;
- (bool)needsRoundedCorner;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)overlayView;
- (id)portraitOverlay;
- (void)setAsset:(id)arg1;
- (void)setClassificationMode:(unsigned long long)arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCurrentImageIdentifier:(long long)arg1;
- (void)setImageRequester:(id)arg1;
- (void)setLandscapeOverlay:(id)arg1;
- (void)setMediaProvider:(id)arg1;
- (void)setNeedsRoundedCorner:(bool)arg1;
- (void)setOverlayView:(id)arg1;
- (void)setPortraitOverlay:(id)arg1;
- (void)setShowClockOverlay:(bool)arg1;
- (void)setUsePosterClassificationBasedCropping:(bool)arg1;
- (bool)showClockOverlay;
- (bool)usePosterClassificationBasedCropping;

@end

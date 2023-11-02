
@interface PPKPhotosMediaView : UIView {
    _PhotosMediaViewAnalysisController * _analysisController;
    PXDisplayAssetView * _assetView;
    bool  _isImageAnalysisEnabled;
}

@property (nonatomic, readonly) _PhotosMediaViewAnalysisController *analysisController;
@property (nonatomic, readonly) PXDisplayAssetView *assetView;
@property (nonatomic, readonly) <PPKPhotosMediaViewImageAnalysisInteractionContext> *imageAnalysisContext;
@property (nonatomic) bool isImageAnalysisEnabled;

- (void).cxx_destruct;
- (void)_ensureImageAnalysisControllerIfNecessary;
- (id)analysisController;
- (id)assetView;
- (void)didMoveToWindow;
- (id)imageAnalysisContext;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithImage:(struct CGImage { }*)arg1 orientation:(long long)arg2;
- (id)initWithImageData:(id)arg1;
- (id)initWithImageURL:(id)arg1;
- (bool)isImageAnalysisEnabled;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;
- (void)setImage:(struct CGImage { }*)arg1 orientation:(long long)arg2;
- (void)setIsImageAnalysisEnabled:(bool)arg1;
- (void)setURL:(id)arg1;

@end

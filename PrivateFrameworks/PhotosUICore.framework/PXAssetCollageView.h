
@interface PXAssetCollageView : UIView {
    bool  _allowAnimatedImagePlayback;
    bool  _allowLoopPlayback;
    bool  _allowVideoPlayback;
    NSMutableDictionary * _assetViews;
    NSMutableDictionary * _assets;
    UIColor * _cornerBackgroundColor;
    double  _cornerRadius;
    NSMutableIndexSet * _hiddenItemIndexes;
    PXLayoutPerformerOutput * _layoutOutput;
    PXUIMediaProvider * _mediaProvider;
    PXRoundedCornerOverlayView * _roundedCornerOverlayView;
    double  _spacing;
}

@property (nonatomic) bool allowAnimatedImagePlayback;
@property (nonatomic) bool allowLoopPlayback;
@property (nonatomic) bool allowVideoPlayback;
@property (nonatomic, readonly) NSMutableDictionary *assetViews;
@property (nonatomic, readonly) NSMutableDictionary *assets;
@property (nonatomic, retain) UIColor *cornerBackgroundColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic, readonly) NSMutableIndexSet *hiddenItemIndexes;
@property (nonatomic, readonly) PXLayoutPerformerOutput *layoutOutput;
@property (nonatomic, readonly) PXUIMediaProvider *mediaProvider;
@property (nonatomic, readonly) long long numberOfItems;
@property (nonatomic, readonly) bool portraitBias;
@property (nonatomic, readonly) PXRoundedCornerOverlayView *roundedCornerOverlayView;
@property (nonatomic) double spacing;

+ (long long)maximumNumberOfItems;

- (void).cxx_destruct;
- (id)_checkoutAndConfigureAssetViewForAsset:(id)arg1 withIndex:(long long)arg2;
- (id)_displayAssetViewWithIndex:(long long)arg1;
- (id)_displayAssetViews;
- (double)_firstAssetAspectRatio;
- (void)_removeAllAssetViews;
- (void)_removeAssetView:(id)arg1;
- (void)_updateAssetViewsAnimatedContentEnabled;
- (void)_updateHiddenViews;
- (void)_updateRoundedCornerOverlayView;
- (bool)allowAnimatedImagePlayback;
- (bool)allowLoopPlayback;
- (bool)allowVideoPlayback;
- (id)assetViews;
- (id)assets;
- (id)cornerBackgroundColor;
- (double)cornerRadius;
- (id)displayAssetViewAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)displayAssetViewWithAsset:(id)arg1;
- (id)hiddenItemIndexes;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 mediaProvider:(id)arg2;
- (id)layoutOutput;
- (void)layoutSubviews;
- (id)mediaProvider;
- (long long)numberOfItems;
- (bool)portraitBias;
- (void)resetViewState;
- (id)roundedCornerOverlayView;
- (void)setAllowAnimatedImagePlayback:(bool)arg1;
- (void)setAllowLoopPlayback:(bool)arg1;
- (void)setAllowVideoPlayback:(bool)arg1;
- (void)setAsset:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)setCornerBackgroundColor:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setHidden:(bool)arg1 forItemAtIndex:(long long)arg2;
- (void)setSpacing:(double)arg1;
- (double)spacing;

@end

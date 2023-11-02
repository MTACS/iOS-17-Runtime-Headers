
@interface PBFPosterGalleryPreviewView : UIView {
    unsigned long long  _index;
    long long  _layoutOrientation;
    UIView * _loadingIndicatorContainerView;
    PBFPosterGalleryPreviewComplicationContentView * _posterPreviewComplicationContentView;
    PBFPosterGalleryPreviewContentView * _posterPreviewContentView;
    double  _posterPreviewScale;
    UIView * _posterPreviewView;
    NSString * _previewType;
    PBFPosterGalleryShadowContainerView * _shadowContainerView;
    PBFShadowView * _shadowView;
    bool  _showsLoadingIndicator;
}

@property (nonatomic, readonly) PBFPosterGalleryPreviewComplicationContentView *complicationContentView;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) unsigned long long index;
@property (nonatomic, readonly) long long layoutOrientation;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } posterPreviewFrame;
@property (nonatomic, readonly) double posterPreviewScale;
@property (nonatomic, readonly) UIView *posterPreviewView;
@property (nonatomic, readonly) NSString *previewType;
@property (nonatomic) bool showsLoadingIndicator;

- (void).cxx_destruct;
- (id)complicationContentView;
- (id)contentView;
- (void)didMoveToWindow;
- (unsigned long long)index;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (long long)layoutOrientation;
- (void)layoutSubviews;
- (id)makeComplicationsPortalView;
- (id)pbf_displayContext;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })posterPreviewFrame;
- (double)posterPreviewScale;
- (id)posterPreviewView;
- (void)prepareForFullScreenTransitionWithContentView:(id)arg1;
- (void)prepareForReuse;
- (id)previewType;
- (void)setShowsLoadingIndicator:(bool)arg1;
- (bool)showsLoadingIndicator;
- (void)sizeToFit;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)updatePreviewType:(id)arg1 scale:(double)arg2 posterPreviewView:(id)arg3 layoutOrientation:(long long)arg4 index:(unsigned long long)arg5;

@end

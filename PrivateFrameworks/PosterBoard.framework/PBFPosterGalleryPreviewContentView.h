
@interface PBFPosterGalleryPreviewContentView : UIView {
    UIImageView * _backHiddenImageView;
    UIView * _contentContainerView;
    UIView * _contentView;
    UIImageView * _frontHiddenImageView;
    UIView * _fullScreenTransitionView;
    unsigned long long  _index;
    long long  _layoutOrientation;
    _UIPortalView * _portalView;
    UIView * _posterPreviewView;
    NSString * _previewType;
}

@property (nonatomic, retain) UIView *contentContainerView;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) UIView *posterPreviewView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } previewImageFrame;

- (void).cxx_destruct;
- (void)_createHiddenViewsIfNeeded;
- (void)_updateHiddenImages;
- (id)contentContainerView;
- (id)contentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)posterPreviewView;
- (void)prepareForFullScreenTransitionWithContentView:(id)arg1;
- (void)prepareForReuse;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previewImageFrame;
- (void)setContentContainerView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setPosterPreviewView:(id)arg1;
- (void)updatePreviewType:(id)arg1 scale:(double)arg2 posterPreviewView:(id)arg3 layoutOrientation:(long long)arg4 index:(unsigned long long)arg5;

@end

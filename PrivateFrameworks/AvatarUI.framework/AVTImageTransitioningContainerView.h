
@interface AVTImageTransitioningContainerView : UIView {
    struct CGSize { 
        double width; 
        double height; 
    }  _aspectRatio;
    UIView * _borderMaskView;
    AVTUIAnimatingImageView * _imageViewsContainer;
    long long  _layoutMode;
    UIView * _liveView;
    UIImage * _staticImage;
}

@property (nonatomic) struct CGSize { double x1; double x2; } aspectRatio;
@property (nonatomic, readonly) UIView *borderMaskView;
@property (nonatomic, readonly) AVTUIAnimatingImageView *imageViewsContainer;
@property (nonatomic, readonly) long long layoutMode;
@property (nonatomic, retain) UIView *liveView;
@property (nonatomic, retain) UIImage *staticImage;
@property (nonatomic, readonly) UIView *staticView;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })borderMaskRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageViewRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 liveViewRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 imageSize:(struct CGSize { double x1; double x2; })arg3 scale:(double)arg4;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })liveViewRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 aspectRatio:(struct CGSize { double x1; double x2; })arg2 layoutMode:(long long)arg3 scale:(double)arg4;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })aspectRatio;
- (id)borderMaskView;
- (id)imageViewsContainer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 layoutMode:(long long)arg2;
- (long long)layoutMode;
- (void)layoutSubviews;
- (id)liveView;
- (void)setAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setLiveView:(id)arg1;
- (void)setStaticImage:(id)arg1;
- (void)setStaticImage:(id)arg1 animated:(bool)arg2;
- (void)setStaticViewVisible:(bool)arg1;
- (id)staticImage;
- (id)staticView;
- (void)transitionLiveViewToFront;
- (void)transitionStaticViewToFront;

@end

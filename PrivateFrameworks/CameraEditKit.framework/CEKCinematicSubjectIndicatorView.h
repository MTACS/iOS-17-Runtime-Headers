
@interface CEKCinematicSubjectIndicatorView : UIView <CAAnimationDelegate> {
    int  __activeAnimationToActiveRoundedRectCount;
    UIImageView * __bottomCrosshairView;
    UIImageView * __bottomLeftCornerView;
    UIImageView * __bottomRightCornerView;
    UIView * __containerView;
    bool  __crosshairsVisible;
    UIImageView * __leftCrosshairView;
    UIImageView * __rightCrosshairView;
    UIImageView * __topCrosshairView;
    UIImageView * __topLeftCornerView;
    UIImageView * __topRightCornerView;
    long long  _shape;
}

@property (nonatomic) int _activeAnimationToActiveRoundedRectCount;
@property (nonatomic, readonly) UIImageView *_bottomCrosshairView;
@property (nonatomic, readonly) UIImageView *_bottomLeftCornerView;
@property (nonatomic, readonly) UIImageView *_bottomRightCornerView;
@property (nonatomic, readonly) UIView *_containerView;
@property (nonatomic) bool _crosshairsVisible;
@property (nonatomic, readonly) UIImageView *_leftCrosshairView;
@property (nonatomic, readonly) UIImageView *_rightCrosshairView;
@property (nonatomic, readonly) UIImageView *_topCrosshairView;
@property (nonatomic, readonly) UIImageView *_topLeftCornerView;
@property (nonatomic, readonly) UIImageView *_topRightCornerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long shape;
@property (readonly) Class superclass;

+ (id)_cornerImageWithResizableCapInsetsNamed:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })minimumSuggestedBounds;

- (void).cxx_destruct;
- (int)_activeAnimationToActiveRoundedRectCount;
- (id)_bottomCrosshairView;
- (id)_bottomLeftCornerView;
- (id)_bottomRightCornerView;
- (id)_containerView;
- (bool)_crosshairsVisible;
- (id)_leftCrosshairView;
- (void)_performAnimationToActiveCorners;
- (void)_performAnimationToActiveRoundedRect;
- (id)_rightCrosshairView;
- (id)_topCrosshairView;
- (id)_topLeftCornerView;
- (id)_topRightCornerView;
- (void)_updateCornerImageViewsForThickness:(long long)arg1 duration:(double)arg2 delay:(double)arg3;
- (void)_updateCornerViews;
- (void)_updateCrossHairViewsWithHeight:(double)arg1;
- (void)_updateVisibility;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setShape:(long long)arg1;
- (void)setShape:(long long)arg1 animated:(bool)arg2;
- (void)setShape:(long long)arg1 shouldUseCrosshairForAnimation:(bool)arg2 animated:(bool)arg3;
- (void)set_activeAnimationToActiveRoundedRectCount:(int)arg1;
- (void)set_crosshairsVisible:(bool)arg1;
- (long long)shape;

@end

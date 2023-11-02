
@interface CEKSubjectIndicatorView : UIView {
    UIImageView * __bottomLeftCornerView;
    UIImageView * __bottomRightCornerView;
    UIView * __containerView;
    UIImageView * __fullSizeIndicatorView;
    UIImageView * __topLeftCornerView;
    UIImageView * __topRightCornerView;
    bool  _inactive;
    long long  _shape;
}

@property (nonatomic, readonly) UIImageView *_bottomLeftCornerView;
@property (nonatomic, readonly) UIImageView *_bottomRightCornerView;
@property (nonatomic, readonly) UIView *_containerView;
@property (nonatomic, readonly) UIImageView *_fullSizeIndicatorView;
@property (nonatomic, readonly) UIImageView *_topLeftCornerView;
@property (nonatomic, readonly) UIImageView *_topRightCornerView;
@property (getter=isInactive, nonatomic) bool inactive;
@property (getter=isPulsing, nonatomic) bool pulsing;
@property (nonatomic) long long shape;

+ (struct CGSize { double x1; double x2; })_fixedSubjectIndicatorSizeForReferenceBounds:(struct CGSize { double x1; double x2; })arg1 withScale:(double)arg2;
+ (struct CGSize { double x1; double x2; })fixedSizeWithScale:(double)arg1;

- (void).cxx_destruct;
- (id)_bottomLeftCornerView;
- (id)_bottomRightCornerView;
- (id)_containerView;
- (id)_fullSizeIndicatorView;
- (id)_topLeftCornerView;
- (id)_topRightCornerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isInactive;
- (bool)isPulsing;
- (void)layoutSubviews;
- (void)setHidden:(bool)arg1 animated:(bool)arg2;
- (void)setInactive:(bool)arg1;
- (void)setPulsing:(bool)arg1;
- (void)setShape:(long long)arg1;
- (void)setShape:(long long)arg1 animated:(bool)arg2;
- (long long)shape;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)startScalingWithExpansionWidth:(double)arg1 duration:(double)arg2 repeatCount:(unsigned long long)arg3;
- (void)startScalingWithExpansionWidth:(double)arg1 duration:(double)arg2 repeatCount:(unsigned long long)arg3 timingFunction:(id)arg4;
- (void)stopScalingWithDuration:(double)arg1;

@end

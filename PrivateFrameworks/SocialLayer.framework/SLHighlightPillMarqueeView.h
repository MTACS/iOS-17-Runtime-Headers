
@interface SLHighlightPillMarqueeView : UIView {
    bool  _endingPositionConstraintsShouldBeActive;
    bool  _marqueeAnimationIsActive;
    double  _marqueeClippingWidth;
    bool  _marqueeEnabled;
    CALayer * _maskLayer;
    NSLayoutConstraint * _ourHeightConstraint;
    NSLayoutConstraint * _ourWidthConstraint;
    UIView * _pillView;
    long long  _replicatedContentAlignment;
    SLReplicatorView * _replicatorView;
    NSLayoutConstraint * _replicatorViewEndingPositionXConstraint;
    NSLayoutConstraint * _replicatorViewStartingPositionXConstraint;
    NSLayoutConstraint * _replicatorViewYConstraint;
}

@property (nonatomic) bool endingPositionConstraintsShouldBeActive;
@property (nonatomic) bool marqueeAnimationIsActive;
@property (nonatomic) double marqueeClippingWidth;
@property (nonatomic) bool marqueeEnabled;
@property (nonatomic, retain) CALayer *maskLayer;
@property (nonatomic, retain) NSLayoutConstraint *ourHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *ourWidthConstraint;
@property (nonatomic, retain) UIView *pillView;
@property (nonatomic) long long replicatedContentAlignment;
@property (nonatomic, retain) SLReplicatorView *replicatorView;
@property (nonatomic, retain) NSLayoutConstraint *replicatorViewEndingPositionXConstraint;
@property (nonatomic, retain) NSLayoutConstraint *replicatorViewStartingPositionXConstraint;
@property (nonatomic, retain) NSLayoutConstraint *replicatorViewYConstraint;

- (void).cxx_destruct;
- (void)_activateMarqueeAnimationIfNecessary;
- (void)_deactivateMarqueeAnimationIfNecessary;
- (bool)endingPositionConstraintsShouldBeActive;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 pillView:(id)arg2;
- (void)layoutSubviews;
- (bool)marqueeAnimationIsActive;
- (double)marqueeClippingWidth;
- (bool)marqueeEnabled;
- (id)maskLayer;
- (id)ourHeightConstraint;
- (id)ourWidthConstraint;
- (id)pillView;
- (long long)replicatedContentAlignment;
- (id)replicatorView;
- (id)replicatorViewEndingPositionXConstraint;
- (id)replicatorViewStartingPositionXConstraint;
- (id)replicatorViewYConstraint;
- (void)setEndingPositionConstraintsShouldBeActive:(bool)arg1;
- (void)setMarqueeAnimationIsActive:(bool)arg1;
- (void)setMarqueeClippingWidth:(double)arg1;
- (void)setMarqueeEnabled:(bool)arg1;
- (void)setMaskLayer:(id)arg1;
- (void)setOurHeightConstraint:(id)arg1;
- (void)setOurWidthConstraint:(id)arg1;
- (void)setPillView:(id)arg1;
- (void)setReplicatedContentAlignment:(long long)arg1;
- (void)setReplicatorView:(id)arg1;
- (void)setReplicatorViewEndingPositionXConstraint:(id)arg1;
- (void)setReplicatorViewStartingPositionXConstraint:(id)arg1;
- (void)setReplicatorViewYConstraint:(id)arg1;
- (void)updateConstraints;

@end

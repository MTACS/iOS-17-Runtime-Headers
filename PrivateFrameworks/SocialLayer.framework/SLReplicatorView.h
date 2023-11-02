
@interface SLReplicatorView : UIView {
    NSLayoutConstraint * _heightConstraint;
    long long  _instanceCount;
    double  _replicationPaddingX;
    UIView * _targetView;
    NSLayoutConstraint * _targetViewLeadingConstraint;
    NSLayoutConstraint * _targetViewTopConstraint;
    NSLayoutConstraint * _widthConstraint;
}

@property (nonatomic, retain) NSLayoutConstraint *heightConstraint;
@property (nonatomic) long long instanceCount;
@property (nonatomic) double replicationPaddingX;
@property (nonatomic, retain) UIView *targetView;
@property (nonatomic, retain) NSLayoutConstraint *targetViewLeadingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *targetViewTopConstraint;
@property (nonatomic, retain) NSLayoutConstraint *widthConstraint;

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_updateReplicatorLayer;
- (id)heightConstraint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 targetView:(id)arg2;
- (long long)instanceCount;
- (double)replicationPaddingX;
- (void)setHeightConstraint:(id)arg1;
- (void)setInstanceCount:(long long)arg1;
- (void)setReplicationPaddingX:(double)arg1;
- (void)setTargetView:(id)arg1;
- (void)setTargetViewLeadingConstraint:(id)arg1;
- (void)setTargetViewTopConstraint:(id)arg1;
- (void)setWidthConstraint:(id)arg1;
- (id)targetView;
- (id)targetViewLeadingConstraint;
- (id)targetViewTopConstraint;
- (void)updateConstraints;
- (void)updateInstanceCount:(unsigned long long)arg1 replicationPaddingX:(double)arg2;
- (id)widthConstraint;

@end

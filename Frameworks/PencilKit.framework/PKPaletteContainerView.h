
@interface PKPaletteContainerView : UIView <PKPaletteEdgeLocating, PKPaletteViewSizeScaling> {
    PKAccessoryView * _accessoryView;
    NSLayoutConstraint * _accessoryViewBottomConstraint;
    NSLayoutConstraint * _accessoryViewHeightConstraint;
    NSLayoutConstraint * _accessoryViewLeftConstraint;
    NSLayoutConstraint * _accessoryViewRightConstraint;
    NSLayoutConstraint * _accessoryViewTopConstraint;
    NSLayoutConstraint * _accessoryViewWidthConstraint;
    UIView * _contentView;
    NSLayoutConstraint * _contentViewBottomConstraint;
    NSLayoutConstraint * _contentViewLeftConstraint;
    NSLayoutConstraint * _contentViewRightConstraint;
    NSLayoutConstraint * _contentViewTopConstraint;
    unsigned long long  _edgeLocation;
    double  _scalingFactor;
}

@property (nonatomic, retain) PKAccessoryView *accessoryView;
@property (nonatomic, retain) NSLayoutConstraint *accessoryViewBottomConstraint;
@property (nonatomic, retain) NSLayoutConstraint *accessoryViewHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *accessoryViewLeftConstraint;
@property (nonatomic, retain) NSLayoutConstraint *accessoryViewRightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *accessoryViewTopConstraint;
@property (nonatomic, retain) NSLayoutConstraint *accessoryViewWidthConstraint;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) NSLayoutConstraint *contentViewBottomConstraint;
@property (nonatomic, retain) NSLayoutConstraint *contentViewLeftConstraint;
@property (nonatomic, retain) NSLayoutConstraint *contentViewRightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *contentViewTopConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long edgeLocation;
@property (readonly) unsigned long long hash;
@property (nonatomic) double scalingFactor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_installAccessoryView;
- (void)_installContentView;
- (void)_updateUI;
- (bool)_wantsAcessoryViewHidden:(bool)arg1;
- (id)accessoryView;
- (id)accessoryViewBottomConstraint;
- (id)accessoryViewHeightConstraint;
- (id)accessoryViewLeftConstraint;
- (id)accessoryViewRightConstraint;
- (id)accessoryViewTopConstraint;
- (id)accessoryViewWidthConstraint;
- (id)contentView;
- (id)contentViewBottomConstraint;
- (id)contentViewLeftConstraint;
- (id)contentViewRightConstraint;
- (id)contentViewTopConstraint;
- (unsigned long long)edgeLocation;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)scalingFactor;
- (void)setAccessoryView:(id)arg1;
- (void)setAccessoryViewBottomConstraint:(id)arg1;
- (void)setAccessoryViewHeightConstraint:(id)arg1;
- (void)setAccessoryViewLeftConstraint:(id)arg1;
- (void)setAccessoryViewRightConstraint:(id)arg1;
- (void)setAccessoryViewTopConstraint:(id)arg1;
- (void)setAccessoryViewWidthConstraint:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setContentViewBottomConstraint:(id)arg1;
- (void)setContentViewLeftConstraint:(id)arg1;
- (void)setContentViewRightConstraint:(id)arg1;
- (void)setContentViewTopConstraint:(id)arg1;
- (void)setEdgeLocation:(unsigned long long)arg1;
- (void)setScalingFactor:(double)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;

@end

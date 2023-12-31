
@interface GKSegmentedSelectorView : GKHeaderWithUnderlineView {
    UISegmentedControl * _segmentedControl;
    id  _target;
    NSLayoutConstraint * _widthConstraint;
}

@property (nonatomic, retain) UISegmentedControl *segmentedControl;
@property (nonatomic) id target;
@property (nonatomic, retain) NSLayoutConstraint *widthConstraint;

- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)arg1;
- (bool)drawsUnderline;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)pinningStateChangedTo:(bool)arg1;
- (void)prepareForReuse;
- (id)segmentedControl;
- (void)setSegmentedControl:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)setWidthConstraint:(id)arg1;
- (id)target;
- (id)widthConstraint;

@end

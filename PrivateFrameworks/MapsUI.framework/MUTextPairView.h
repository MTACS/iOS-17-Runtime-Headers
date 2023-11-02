
@interface MUTextPairView : UIView <MUStackable> {
    NSArray * _constraints;
    UILabel * _leftLabel;
    UILabel * _rightLabel;
    bool  _stacked;
    MUTextPairViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isStacked, nonatomic) bool stacked;
@property (readonly) Class superclass;
@property (nonatomic, retain) MUTextPairViewModel *viewModel;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)_setupSubviews;
- (void)_updateAppearance;
- (void)_updateConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isStacked;
- (void)setStacked:(bool)arg1;
- (void)setViewModel:(id)arg1;
- (bool)shouldStackForProposedWidth:(double)arg1;
- (id)viewModel;

@end

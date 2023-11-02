
@interface HUEnergyIndicatorAccessoryView : UIView {
    NSMutableArray * _constraints;
    UIView * _energyIndicatorView;
}

@property (nonatomic, retain) NSMutableArray *constraints;
@property (nonatomic, retain) UIView *energyIndicatorView;

- (void).cxx_destruct;
- (id)constraints;
- (id)energyIndicatorView;
- (id)initWithEnergyIndicator:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)setEnergyIndicatorView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateConstraints;

@end

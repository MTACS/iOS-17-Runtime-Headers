
@interface UIPrintSupplyLevelView : UIView {
    UIView * _lowSupplyImageView;
    PKSupply * _supplyInfo;
}

@property (nonatomic, retain) UIView *lowSupplyImageView;
@property (nonatomic, retain) PKSupply *supplyInfo;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 supplyInfo:(id)arg2;
- (id)lowSupplyImageView;
- (void)setLowSupplyImageView:(id)arg1;
- (void)setSupplyInfo:(id)arg1;
- (id)supplyInfo;
- (bool)supplyLevelShowWarning;

@end

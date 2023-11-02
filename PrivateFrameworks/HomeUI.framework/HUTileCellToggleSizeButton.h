
@interface HUTileCellToggleSizeButton : UIButton {
    void arrowImageView;
    void isExpanding;
    void symbolConfiguration;
}

@property (nonatomic) bool isExpanding;
@property (nonatomic, retain) UIImageSymbolConfiguration *symbolConfiguration;

- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isExpanding;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setHidden:(bool)arg1 animated:(bool)arg2;
- (void)setIsExpanding:(bool)arg1;
- (void)setSymbolConfiguration:(id)arg1;
- (id)symbolConfiguration;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;

@end


@interface _UIMagicHeadCollectionViewCell : UIAirDropGroupActivityCell {
    NSArray * _largeTextMHConstraints;
    UIView * _magicHeadView;
    SFMagicHeadWheelView * _magicHeadWheelView;
    NSArray * _regularMHConstraints;
}

@property (nonatomic, retain) NSArray *largeTextMHConstraints;
@property (nonatomic, retain) UIView *magicHeadView;
@property (nonatomic, retain) SFMagicHeadWheelView *magicHeadWheelView;
@property (nonatomic, retain) NSArray *regularMHConstraints;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)_updateMHForCurrentSizeCategory;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)largeTextMHConstraints;
- (id)magicHeadView;
- (id)magicHeadWheelView;
- (id)regularMHConstraints;
- (void)setLargeTextMHConstraints:(id)arg1;
- (void)setMagicHeadView:(id)arg1;
- (void)setMagicHeadWheelView:(id)arg1;
- (void)setRegularMHConstraints:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateDarkening;

@end


@interface AKShapesPicker : AKModernToolbarPicker {
    NSArray * _shapes;
    long long  _style;
}

@property (nonatomic, copy) NSArray *shapes;
@property long long style;

- (void).cxx_destruct;
- (void)_shapeButtonPressed:(id)arg1;
- (void)_updateCurrentAppearanceIfNeeded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 shapeTags:(id)arg2;
- (void)layoutSubviews;
- (void)setShapes:(id)arg1;
- (void)setStyle:(long long)arg1;
- (id)shapes;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)style;

@end

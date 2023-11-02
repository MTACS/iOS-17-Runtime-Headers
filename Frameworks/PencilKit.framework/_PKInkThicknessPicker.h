
@interface _PKInkThicknessPicker : UIControl {
    NSArray * _cachedSortedWeights;
    NSArray * _thicknessButtons;
    PKToolConfiguration * _toolConfiguration;
    double  _weight;
}

@property (nonatomic, retain) NSArray *thicknessButtons;

+ (struct CGSize { double x1; double x2; })sizeWithButtonCount:(unsigned long long)arg1 buttonSize:(struct CGSize { double x1; double x2; })arg2;

- (void).cxx_destruct;
- (void)buttonTapped:(id)arg1;
- (void)layoutSubviews;
- (void)setThicknessButtons:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)thicknessButtons;

@end

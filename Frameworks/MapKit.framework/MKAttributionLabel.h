
@interface MKAttributionLabel : UIView {
    long long  _displayStyle;
    NSAttributedString * _innerText;
    unsigned long long  _mapType;
    NSAttributedString * _strokeText;
    bool  _useDarkText;
}

@property (nonatomic) long long displayStyle;
@property (nonatomic) unsigned long long mapType;

- (void).cxx_destruct;
- (id)_attributesWithStroke:(bool)arg1;
- (id)_labelTitle;
- (void)_prepareLabel;
- (void)_updateTextColor;
- (long long)displayStyle;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)mapType;
- (void)setDisplayStyle:(long long)arg1;
- (void)setMapType:(unsigned long long)arg1;
- (void)sizeToFit;
- (void)traitEnvironment:(id)arg1 didChangeTraitCollection:(id)arg2;

@end


@interface PKOneTimeCodeDigitFieldView : UIView {
    unsigned long long  _highligtType;
    UILabel * _label;
    bool  _primary;
    NSString * _text;
}

@property (nonatomic) unsigned long long highligtType;
@property (getter=isPrimary, nonatomic) bool primary;
@property (nonatomic, copy) NSString *text;

+ (id)codeEntryFont;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isTemplateLayout:(bool)arg2;
- (void)_updateLayer;
- (unsigned long long)highligtType;
- (id)initWithIndex:(long long)arg1;
- (bool)isPrimary;
- (void)layoutSubviews;
- (void)setHighligtType:(unsigned long long)arg1;
- (void)setPrimary:(bool)arg1;
- (void)setText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)text;
- (void)traitCollectionDidChange:(id)arg1;

@end

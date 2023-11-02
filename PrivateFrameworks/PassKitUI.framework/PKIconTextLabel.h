
@interface PKIconTextLabel : UIView {
    UIImage * _icon;
    unsigned long long  _iconAlignment;
    UIImageView * _iconView;
    NSAttributedString * _text;
    UIColor * _textColor;
    UIFont * _textFont;
    UILabel * _textLabel;
}

@property (nonatomic, retain) UIImage *icon;
@property (nonatomic) unsigned long long iconAlignment;
@property (nonatomic, copy) NSAttributedString *text;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, retain) UIFont *textFont;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isTemplateLayout:(bool)arg2;
- (void)_updateView;
- (bool)hasContent;
- (id)icon;
- (unsigned long long)iconAlignment;
- (id)init;
- (id)initFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithAttributedText:(id)arg1 icon:(id)arg2;
- (id)initWithText:(id)arg1 icon:(id)arg2;
- (void)layoutSubviews;
- (void)setIcon:(id)arg1;
- (void)setIconAlignment:(unsigned long long)arg1;
- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextFont:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)text;
- (id)textColor;
- (id)textFont;

@end


@interface DMCDevicePINPane : DevicePINPane {
    unsigned long long  _style;
    NSString * _titleText;
}

@property (nonatomic, readonly) UIView *descriptionLabel;
@property (nonatomic, readonly) UIView *passcodeField;
@property (nonatomic) unsigned long long style;
@property (nonatomic, copy) NSString *titleText;

- (void).cxx_destruct;
- (id)_textFont;
- (id)descriptionLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)passcodeField;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleText:(id)arg1;
- (unsigned long long)style;
- (id)titleText;

@end

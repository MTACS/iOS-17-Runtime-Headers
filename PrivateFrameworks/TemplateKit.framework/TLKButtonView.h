
@interface TLKButtonView : TLKView {
    TLKStackView * _stackView;
    NSString * _title;
    TLKLabel * _titleLabel;
}

@property (nonatomic, retain) TLKStackView *stackView;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) TLKLabel *titleLabel;

+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })defaultLayoutMargins;

- (void).cxx_destruct;
- (void)observedPropertiesChanged;
- (void)setStackView:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)setupContentView;
- (id)stackView;
- (id)title;
- (id)titleLabel;

@end

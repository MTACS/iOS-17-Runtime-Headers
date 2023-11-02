
@interface REUpNextLargeWithDetailTextCell : REUpNextBaseCell {
    REUpNextImageView * _bodyImage;
    CLKUIColoringLabel * _bodyLabel;
    UILayoutGuide * _contentLayoutGuide;
    CLKUIColoringLabel * _detail1Label;
    CLKUIColoringLabel * _detail2Label;
    CLKUIColoringLabel * _headerLabel;
}

+ (void)initialize;

- (void).cxx_destruct;
- (void)_updateHeaderColor;
- (void)configureWithContent:(id)arg1;
- (void)defaultTextColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end

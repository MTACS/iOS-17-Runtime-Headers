
@interface SiriUITwoButtonFooterView : SiriUIReusableFooterView {
    SiriUIKeyline * _horizontalKeyline;
    SiriUIContentButton * _leftButton;
    SiriUIContentButton * _rightButton;
    SiriUIKeyline * _verticalKeyline;
}

@property (nonatomic, readonly) SiriUIContentButton *leftButton;
@property (nonatomic, readonly) SiriUIContentButton *rightButton;

+ (double)defaultHeight;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)leftButton;
- (void)prepareForReuse;
- (id)rightButton;

@end

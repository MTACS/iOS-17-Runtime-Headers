
@interface PUParallaxDebugInfoRectView : UIView {
    NSString * _identifier;
    UILabel * _textLabel;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) UILabel *textLabel;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setIdentifier:(id)arg1;
- (id)textLabel;

@end

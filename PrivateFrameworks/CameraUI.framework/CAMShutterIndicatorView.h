
@interface CAMShutterIndicatorView : UIView {
    NSAttributedString * __indicatorText;
}

@property (nonatomic, readonly) NSAttributedString *_indicatorText;

- (void).cxx_destruct;
- (void)_commonCAMShutterIndicatorViewInitialization;
- (id)_indicatorText;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;

@end

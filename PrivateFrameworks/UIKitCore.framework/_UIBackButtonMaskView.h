
@interface _UIBackButtonMaskView : UIView {
    UIView * _maskExtensionView;
    UIImageView * _maskImageView;
}

@property (nonatomic, readonly) NSLayoutXAxisAnchor *maskExtensionLeadingAnchor;
@property (nonatomic, readonly) UIImageView *maskImageView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)maskExtensionLeadingAnchor;
- (id)maskImageView;

@end

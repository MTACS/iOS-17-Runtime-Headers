
@interface STHorizontalDivider : UIView {
    UIImageView * _horizontalLine;
    NSLayoutXAxisAnchor * _horizontalLineRightAnchor;
    UILabel * _label;
}

@property (readonly) UIImageView *horizontalLine;
@property (readonly) UIImage *horizontalLineImage;
@property (readonly) NSLayoutXAxisAnchor *horizontalLineRightAnchor;
@property (readonly) UILabel *label;

- (void).cxx_destruct;
- (id)horizontalLine;
- (id)horizontalLineImage;
- (id)horizontalLineRightAnchor;
- (id)initWithTintColor:(id)arg1;
- (id)label;

@end

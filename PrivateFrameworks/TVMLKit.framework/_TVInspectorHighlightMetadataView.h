
@interface _TVInspectorHighlightMetadataView : UIView {
    UILabel * _descriptionLabel;
    UILabel * _frameLabel;
}

@property (nonatomic, readonly) UILabel *descriptionLabel;
@property (nonatomic, readonly) UILabel *frameLabel;

- (void).cxx_destruct;
- (id)descriptionLabel;
- (id)frameLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end

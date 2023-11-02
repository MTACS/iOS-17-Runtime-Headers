
@interface SFSiteCardSourceView : UIVisualEffectView {
    NSLayoutConstraint * _imageBaselineAlignmentConstraint;
    NSLayoutConstraint * _imageCenterAlignmentConstraint;
    UIImageView * _imageView;
    UILabel * _label;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) NSString *text;

- (void).cxx_destruct;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end

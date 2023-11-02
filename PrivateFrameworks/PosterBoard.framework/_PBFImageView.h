
@interface _PBFImageView : UIView {
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    UIImageView * _imageView;
}

@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageSize;

- (void).cxx_destruct;
- (id)image;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (bool)updateImage:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;

@end

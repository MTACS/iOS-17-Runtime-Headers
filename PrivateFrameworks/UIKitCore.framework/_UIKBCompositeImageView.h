
@interface _UIKBCompositeImageView : UIView {
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    NSArray * _imageViews;
}

@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, retain) NSArray *imageViews;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)imageViews;
- (void)layoutSubviews;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setImageViews:(id)arg1;

@end

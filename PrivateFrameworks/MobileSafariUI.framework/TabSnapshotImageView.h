
@interface TabSnapshotImageView : UIImageView {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _cropInsets;
    struct CGPoint { 
        double x; 
        double y; 
    }  _imagePosition;
    bool  _keepImageAligned;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } cropInsets;
@property (nonatomic) struct CGPoint { double x1; double x2; } imagePosition;
@property (nonatomic, readonly) double imageScaleRatio;
@property (nonatomic) bool keepImageAligned;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsRectWithSnapshotSize:(struct CGSize { double x1; double x2; })arg1 imageViewSize:(struct CGSize { double x1; double x2; })arg2 imagePosition:(struct CGPoint { double x1; double x2; })arg3 cropInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg4;
+ (double)imageScaleRatioWithOnScreenImageSize:(struct CGSize { double x1; double x2; })arg1 imageViewSize:(struct CGSize { double x1; double x2; })arg2 cropInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
+ (struct CGSize { double x1; double x2; })imageSizeOnScreen:(id)arg1;

- (void)_setUpImageView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })cropInsets;
- (struct CGPoint { double x1; double x2; })imagePosition;
- (double)imageScaleRatio;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithImage:(id)arg1;
- (bool)keepImageAligned;
- (void)layoutSubviews;
- (void)setCropInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setImage:(id)arg1;
- (void)setImagePosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setKeepImageAligned:(bool)arg1;
- (void)updateImageAlignment;

@end

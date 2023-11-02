
@interface _UIMirrorNinePatchView : UIView {
    UIImageView * _imageViews;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _insets;
    UIImage * _originalImage;
}

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_updateResizableImageAndViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setImage:(id)arg1 withResizableCornerSize:(struct CGSize { double x1; double x2; })arg2;

@end

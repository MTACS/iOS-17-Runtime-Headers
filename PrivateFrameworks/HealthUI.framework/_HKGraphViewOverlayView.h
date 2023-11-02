
@interface _HKGraphViewOverlayView : UIImageView {
    UIGraphicsImageRenderer * _imageRenderer;
}

@property (nonatomic, retain) UIGraphicsImageRenderer *imageRenderer;

- (void).cxx_destruct;
- (void)_updateRendererSize:(struct CGSize { double x1; double x2; })arg1;
- (void)drawContentUsingBlock:(id /* block */)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)imageRenderer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImageRenderer:(id)arg1;

@end

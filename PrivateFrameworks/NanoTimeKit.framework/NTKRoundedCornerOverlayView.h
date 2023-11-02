
@interface NTKRoundedCornerOverlayView : UIView {
    UIImageView * _bottomLeftCorner;
    UIImageView * _bottomRightCorner;
    double  _cornerRadius;
    double  _screenScale;
    UIImageView * _upperLeftCorner;
    UIImageView * _upperRightCorner;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forDevice:(id)arg2 cornerRadius:(double)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forDeviceCornerRadius:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 screenScale:(double)arg2 cornerRadius:(double)arg3;
- (void)layoutSubviews;

@end

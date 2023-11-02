
@interface NTKRoundedCornerMaskView : UIView {
    CALayer * _maskLayer;
}

+ (id)_maskForDevice:(id)arg1;
+ (id)_maskWithSize:(struct CGSize { double x1; double x2; })arg1 screenScale:(double)arg2 cornerRadius:(double)arg3;

- (void).cxx_destruct;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 mask:(id)arg2;
- (id)initWithDevice:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 screenScale:(double)arg2 cornerRadius:(double)arg3;

@end

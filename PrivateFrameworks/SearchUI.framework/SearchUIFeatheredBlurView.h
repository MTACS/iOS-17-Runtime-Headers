
@interface SearchUIFeatheredBlurView : UIView {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frameForGradient;
    UIView * _gradientView;
    MTMaterialView * _materialView;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frameForGradient;
@property (retain) UIView *gradientView;
@property (retain) MTMaterialView *materialView;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForGradient;
- (id)gradientView;
- (id)init;
- (void)layoutSubviews;
- (id)materialView;
- (void)setFrameForGradient:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGradientView:(id)arg1;
- (void)setMaterialView:(id)arg1;

@end


@interface MTShadowView : UIImageView {
    bool  _continuousCorners;
    double  _maskCornerRadius;
    struct CGSize { 
        double width; 
        double height; 
    }  _maskSizeForCurrentImage;
    struct { 
        float opacity; 
        struct CGSize { 
            double width; 
            double height; 
        } offset; 
        double radius; 
    }  _shadowAttributes;
    UIColor * _shadowColor;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _shadowOutsets;
}

@property (nonatomic, readonly) bool continuousCorners;
@property (nonatomic, readonly) double maskCornerRadius;
@property (nonatomic, readonly) struct { float x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; } shadowAttributes;
@property (nonatomic, copy) UIColor *shadowColor;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } shadowOutsets;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_updateShadowOutsetsIfNecessary;
- (void)_updateShadowVisualStyling;
- (void)_validateImage;
- (bool)continuousCorners;
- (void)didMoveToSuperview;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameWithContentWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithShadowAttributes:(struct { float x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; })arg1 maskCornerRadius:(double)arg2;
- (id)initWithShadowAttributes:(struct { float x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; })arg1 maskCornerRadius:(double)arg2 continuousCorners:(bool)arg3;
- (void)layoutSubviews;
- (double)maskCornerRadius;
- (void)setShadowColor:(id)arg1;
- (struct { float x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; })shadowAttributes;
- (id)shadowColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })shadowOutsets;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end

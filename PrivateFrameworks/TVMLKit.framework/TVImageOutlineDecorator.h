
@interface TVImageOutlineDecorator : TVImageScaleDecorator {
    UIColor * _outlineColor;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _outlineWidths;
}

@property (nonatomic, readonly, copy) UIColor *outlineColor;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } outlineWidths;

+ (id)decoratorWithOutlineColor:(id)arg1 outlineWidths:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;

- (void).cxx_destruct;
- (id)decoratorIdentifier;
- (void)drawInContext:(id)arg1 imageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (unsigned long long)hash;
- (id)initWithOutlineColor:(id)arg1 outlineWidths:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (bool)isEqual:(id)arg1;
- (id)outlineColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })outlineWidths;

@end

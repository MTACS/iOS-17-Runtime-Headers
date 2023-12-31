
@interface VUIGradientMaskProperties : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _minLengths;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _minPadding;
}

@property (nonatomic) struct CGSize { double x1; double x2; } minLengths;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } minPadding;

+ (id)defaultGradientMaskProperties;

- (struct CGSize { double x1; double x2; })minLengths;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })minPadding;
- (void)setMinLengths:(struct CGSize { double x1; double x2; })arg1;
- (void)setMinPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end

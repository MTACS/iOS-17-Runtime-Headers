
@interface DOCFixedRadiusRoundedRectShapeProvider : NSObject <UIShapeProvider> {
    double  _cornerRadius;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _insets;
}

@property (readonly) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } insets;
@property (readonly) Class superclass;

- (double)cornerRadius;
- (id)initWithCornerRadius:(double)arg1 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insets;
- (id)resolvedShapeInContext:(id)arg1;

@end

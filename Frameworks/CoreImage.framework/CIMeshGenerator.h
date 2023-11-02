
@interface CIMeshGenerator : CIFilter {
    CIColor * inputColor;
    NSArray * inputMesh;
    NSNumber * inputWidth;
}

@property (nonatomic, retain) CIColor *inputColor;
@property (nonatomic, retain) NSArray *inputMesh;
@property (nonatomic, retain) NSNumber *inputWidth;

+ (id)customAttributes;

- (id)_CIMesh1;
- (id)_CIMesh16;
- (id)_CIMesh2;
- (id)_CIMesh32;
- (id)_CIMesh4;
- (id)_CIMesh8;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })extentOfMeshStart:(int)arg1 count:(int)arg2 halfWidth:(double)arg3;
- (id)inputColor;
- (id)inputMesh;
- (id)inputWidth;
- (id)outputImage;
- (void)setInputColor:(id)arg1;
- (void)setInputMesh:(id)arg1;
- (void)setInputWidth:(id)arg1;

@end

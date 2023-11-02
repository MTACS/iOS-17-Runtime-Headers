
@interface PCMatrix44Double : NSObject <NSCopying, NSSecureCoding> {
    double  _m;
    void * _pcMatrix;
}

@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } SIMDDouble4x4;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } SIMDFloat4x4;

+ (id)matrixWithSIMDDouble4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
+ (id)matrixWithSIMDFloat4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
+ (bool)supportsSecureCoding;

- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })SIMDDouble4x4;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })SIMDFloat4x4;
- (id)array;
- (id)compactDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (double)doubleValueAtRow:(unsigned int)arg1 col:(unsigned int)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)extendedDescription;
- (void)getDoubles:(double)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArray:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDoubles:(double)arg1;
- (id)initWithDoubles:(double)arg1 external:(bool)arg2;
- (id)initWithPCMatrix:(const void*)arg1;
- (id)initWithSIMDDouble4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (id)initWithSIMDFloat4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (bool)invert;
- (bool)invert2D;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPCMatrix44Double:(id)arg1;
- (bool)isIdentity;
- (void)leftFlipAboutY:(double)arg1;
- (void)leftMult:(id)arg1;
- (void)leftRotate:(double)arg1 axis:(int)arg2;
- (void)leftScaleX:(double)arg1 scaleY:(double)arg2 scaleZ:(double)arg3;
- (void)leftShearX:(double)arg1 shearY:(double)arg2;
- (void)leftTranslateX:(double)arg1 translateY:(double)arg2 translateZ:(double)arg3;
- (void)makeIdentity;
- (id)newPlanarTransformTo:(id)arg1;
- (id)newTransformTo:(id)arg1;
- (void*)pcMatrix;
- (void)rightMult:(id)arg1;
- (void)rightRotate:(double)arg1 axis:(int)arg2;
- (void)rightScaleX:(double)arg1 scaleY:(double)arg2 scaleZ:(double)arg3;
- (void)rightShearX:(double)arg1 shearY:(double)arg2;
- (void)rightTranslateX:(double)arg1 translateY:(double)arg2 translateZ:(double)arg3;
- (void)scaleSizeX:(double)arg1 sizeY:(double)arg2 sizeZ:(double)arg3 scaledSizeX:(double*)arg4 scaledSizeY:(double*)arg5 scaledSizeZ:(double*)arg6;
- (void)setDoubleValue:(double)arg1 atRow:(unsigned int)arg2 col:(unsigned int)arg3;
- (void)setDoubles:(double)arg1;
- (void)setSIMDDouble4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setSIMDFloat4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; })transformInfo;
- (void)transpose;

@end

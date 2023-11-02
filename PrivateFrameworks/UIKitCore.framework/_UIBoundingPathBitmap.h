
@interface _UIBoundingPathBitmap : NSObject <NSSecureCoding> {
    struct _UIBoundingPathBitmapData { 
        unsigned long long width; 
        unsigned long long height; 
        struct _UIBoundingPathBitmapDataSkipRegion { 
            unsigned long long y; 
            unsigned long long height; 
        } skipRegion; 
        unsigned long long nodeCount; 
        unsigned long long maximumNodesPerRow; 
        unsigned short *rows; 
    }  _bitmapData;
}

@property (nonatomic, readonly) struct _UIBoundingPathBitmapData { unsigned long long x1; unsigned long long x2; struct _UIBoundingPathBitmapDataSkipRegion { unsigned long long x_3_1_1; unsigned long long x_3_1_2; } x3; unsigned long long x4; unsigned long long x5; unsigned short *x6; } bitmapData;

+ (bool)supportsSecureCoding;

- (id)_imageRepresentation;
- (struct _UIBoundingPathBitmapData { unsigned long long x1; unsigned long long x2; struct _UIBoundingPathBitmapDataSkipRegion { unsigned long long x_3_1_1; unsigned long long x_3_1_2; } x3; unsigned long long x4; unsigned long long x5; unsigned short *x6; })bitmapData;
- (id)boundingPathBitmapWithRect:(struct _UIIntegralRect { struct _UIIntegralPoint { long long x_1_1_1; long long x_1_1_2; } x1; struct _UIIntegralSize { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (id)boundingPathBitmapWithRect:(struct _UIIntegralRect { struct _UIIntegralPoint { long long x_1_1_1; long long x_1_1_2; } x1; struct _UIIntegralSize { long long x_2_1_1; long long x_2_1_2; } x2; })arg1 cornerRadii:(struct _UIIntegralCornerRadii { long long x1; long long x2; long long x3; long long x4; })arg2;
- (void)dealloc;
- (id)debugQuickLookObject;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBitmapData:(struct _UIBoundingPathBitmapData { unsigned long long x1; unsigned long long x2; struct _UIBoundingPathBitmapDataSkipRegion { unsigned long long x_3_1_1; unsigned long long x_3_1_2; } x3; unsigned long long x4; unsigned long long x5; unsigned short *x6; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSize:(struct _UIIntegralSize { long long x1; long long x2; })arg1 containsPoint:(id /* block */)arg2;

@end

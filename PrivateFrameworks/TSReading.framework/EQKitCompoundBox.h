
@interface EQKitCompoundBox : EQKitBox {
    NSArray * mChildBoxes;
    double  mDepth;
    bool  mDimensionsValid;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mErasableBounds;
    bool  mErasableBoundsValid;
    double  mHeight;
    double  mWidth;
}

@property (nonatomic, readonly) NSArray *childBoxes;
@property (nonatomic, readonly) double depth;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) double width;

- (id)childBoxes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)depth;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })erasableBounds;
- (double)height;
- (id)init;
- (id)initWithChildBoxes:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)p_cacheDimensionsForHeight:(double*)arg1 depth:(double*)arg2 width:(double*)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_cacheErasableBounds;
- (double)width;

@end

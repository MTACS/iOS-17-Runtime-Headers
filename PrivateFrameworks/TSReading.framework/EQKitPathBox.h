
@interface EQKitPathBox : EQKitBox {
    struct CGColor { } * mCGColor;
    struct CGPath { } * mCGPath;
    double  mDepth;
    bool  mDimensionsValid;
    int  mDrawingMode;
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
    double  mLineWidth;
    double  mPaddingLeft;
    double  mPaddingRight;
    double  mWidth;
}

@property (nonatomic, readonly) struct CGPath { }*cgPath;
@property (nonatomic, readonly) struct CGColor { }*color;
@property (nonatomic, readonly) double depth;
@property (nonatomic, readonly) int drawingMode;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) double lineWidth;
@property (nonatomic, readonly) double paddingLeft;
@property (nonatomic, readonly) double paddingRight;
@property (nonatomic, readonly) double width;

- (bool)appendOpticalAlignToSpec:(void*)arg1 offset:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGPath { }*)cgPath;
- (struct CGColor { }*)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)depth;
- (id)description;
- (int)drawingMode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })erasableBounds;
- (double)height;
- (id)init;
- (id)initWithCGPath:(struct CGPath { }*)arg1 height:(double)arg2 cgColor:(struct CGColor { }*)arg3;
- (id)initWithCGPath:(struct CGPath { }*)arg1 height:(double)arg2 cgColor:(struct CGColor { }*)arg3 drawingMode:(int)arg4 lineWidth:(double)arg5;
- (id)initWithCGPath:(struct CGPath { }*)arg1 height:(double)arg2 paddingLeft:(double)arg3 paddingRight:(double)arg4 cgColor:(struct CGColor { }*)arg5;
- (id)initWithCGPath:(struct CGPath { }*)arg1 height:(double)arg2 paddingLeft:(double)arg3 paddingRight:(double)arg4 cgColor:(struct CGColor { }*)arg5 drawingMode:(int)arg6 lineWidth:(double)arg7;
- (bool)isEqual:(id)arg1;
- (double)lineWidth;
- (void)p_cacheDimensions;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_cacheErasableBounds;
- (double)paddingLeft;
- (double)paddingRight;
- (void)renderIntoContext:(struct CGContext { }*)arg1 offset:(struct CGPoint { double x1; double x2; })arg2;
- (double)width;

@end

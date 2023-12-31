
@interface EQKitStringBox : EQKitBox {
    NSAttributedString * mAttributedString;
    struct CGColor { } * mCGColor;
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
    double  mHeight;
    struct __CTLine { } * mLine;
    double  mWidth;
}

@property (nonatomic, readonly) NSAttributedString *attributedString;
@property (nonatomic, readonly) struct CGColor { }*color;
@property (nonatomic, readonly) double depth;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) struct __CTLine { }*line;
@property (nonatomic, readonly) double width;

- (bool)appendOpticalAlignToSpec:(void*)arg1 offset:(struct CGPoint { double x1; double x2; })arg2;
- (id)attributedString;
- (struct CGColor { }*)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)depth;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })erasableBounds;
- (double)height;
- (id)init;
- (id)initWithAttributedString:(id)arg1 cgColor:(struct CGColor { }*)arg2;
- (bool)isEqual:(id)arg1;
- (struct __CTLine { }*)line;
- (void)p_cacheDimensions;
- (double)positionOfCharacterAtIndex:(unsigned long long)arg1;
- (void)renderIntoContext:(struct CGContext { }*)arg1 offset:(struct CGPoint { double x1; double x2; })arg2;
- (double)width;

@end

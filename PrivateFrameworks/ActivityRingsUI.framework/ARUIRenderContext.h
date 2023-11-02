
@interface ARUIRenderContext : NSObject {
    float  _drawableDiameter;
    void _drawableSize;
    bool  _opaque;
    bool  _presentsWithTransaction;
    float  _screenScale;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _skewAdjustmentMatrix;
}

@property (nonatomic, readonly) float drawableDiameter;
@property (nonatomic, readonly) void drawableSize;
@property (nonatomic) bool opaque;
@property (nonatomic) bool presentsWithTransaction;
@property (nonatomic, readonly) float screenScale;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } skewAdjustmentMatrix;

- (id)description;
- (float)drawableDiameter;
- (void)drawableSize;
- (unsigned long long)hash;
- (id)initWithDrawableSize;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)isEqual:(id)arg1;
- (bool)opaque;
- (bool)presentsWithTransaction;
- (float)screenScale;
- (void)setOpaque:(bool)arg1;
- (void)setPresentsWithTransaction:(bool)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })skewAdjustmentMatrix;

@end

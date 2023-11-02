
@interface CHDBar3DType : CHDBar2DType {
    int  mGapDepth;
    int  mShapeType;
}

+ (bool)is3DType;
+ (id)stringWithShapeType:(int)arg1;

- (int)gapDepth;
- (id)initWithChart:(id)arg1;
- (void)setGapDepth:(int)arg1;
- (void)setShapeType:(int)arg1;
- (int)shapeType;

@end

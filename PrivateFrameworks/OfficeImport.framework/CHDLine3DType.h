
@interface CHDLine3DType : CHDLineType {
    int  mGapDepth;
}

+ (bool)is3DType;

- (int)gapDepth;
- (id)initWithChart:(id)arg1;
- (void)setGapDepth:(int)arg1;

@end

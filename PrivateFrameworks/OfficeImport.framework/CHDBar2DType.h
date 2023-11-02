
@interface CHDBar2DType : CHDChartTypeWithGrouping {
    bool  mColumn;
    int  mGapWidth;
    int  mOverlap;
}

- (int)defaultLabelPosition;
- (int)gapWidth;
- (id)initWithChart:(id)arg1;
- (bool)isColumn;
- (bool)isHorizontal;
- (int)overlap;
- (void)setColumn:(bool)arg1;
- (void)setGapWidth:(int)arg1;
- (void)setOverlap:(int)arg1;

@end

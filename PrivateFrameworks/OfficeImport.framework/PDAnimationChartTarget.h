
@interface PDAnimationChartTarget : PDAnimationShapeTarget {
    int  mBuildStep;
    int  mCatagoryIndex;
    int  mChartSubElementType;
    bool  mHasBuildStep;
    bool  mHasCatagoryIndex;
    bool  mHasSeriesIndex;
    int  mSeriesIndex;
}

- (int)buildStep;
- (int)catagoryIndex;
- (int)chartSubElementType;
- (bool)hasBuildStep;
- (bool)hasCatagoryIndex;
- (bool)hasSeriesIndex;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (int)seriesIndex;
- (void)setBuildStep:(int)arg1;
- (void)setCatagoryIndex:(int)arg1;
- (void)setChartSubElementType:(int)arg1;
- (void)setSeriesIndex:(int)arg1;

@end

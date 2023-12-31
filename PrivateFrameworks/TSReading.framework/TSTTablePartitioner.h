
@interface TSTTablePartitioner : NSObject <TSDPartitioner> {
    double  mFirstPartitionWidth;
    TSUPointerKeyDictionary * mHintMatricesByCanvas;
    TSDInfoGeometry * mInfoGeometry;
    NSMutableDictionary * mPartitioningPassCache;
    struct CGSize { 
        double width; 
        double height; 
    }  mScaleToFit;
    TSTLayout * mScaledLayout;
    TSTTableInfo * mTableInfo;
}

@property (nonatomic, copy) TSDInfoGeometry *infoGeometry;
@property (nonatomic, readonly) double inlineTableWidth;
@property (nonatomic, readonly) bool scaleIsValid;
@property (nonatomic) struct CGSize { double x1; double x2; } scaleToFit;
@property (nonatomic, readonly) TSTLayout *scaledLayout;
@property (nonatomic, readonly) TSTTableInfo *tableInfo;

- (void)dealloc;
- (bool)didHint:(id)arg1 syncWithNextHint:(id)arg2 horizontally:(bool)arg3 delta:(int)arg4;
- (id)hintCacheKeyForHint:(id)arg1;
- (id)hintCacheKeyForPartitioningPass:(id)arg1 andHintID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (id)hintForLayout:(id)arg1;
- (id)infoGeometry;
- (id)initWithInfo:(id)arg1;
- (double)inlineTableWidth;
- (id)layoutForHint:(id)arg1 parentLayout:(id)arg2;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })measureCellRangeForNextPartitionOfSize:(struct CGSize { double x1; double x2; })arg1 previousHint:(id)arg2 horizontally:(bool)arg3;
- (id)nextHintForSize:(struct CGSize { double x1; double x2; })arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(bool)arg4 outFinished:(out bool*)arg5;
- (id)nextLayoutForSize:(struct CGSize { double x1; double x2; })arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(bool)arg4 outFinished:(out bool*)arg5;
- (bool)p_didFinishPartitioningHint:(id)arg1 horizontally:(bool)arg2;
- (void)p_flushCacheAfterPartitioningFinished:(id)arg1 lastHint:(id)arg2 horizontally:(bool)arg3;
- (id)partitioningPassForFirstPartitionSize:(struct CGSize { double x1; double x2; })arg1;
- (id)partitioningPassForHint:(id)arg1 withPreviousHint:(id)arg2;
- (bool)scaleIsValid;
- (struct CGSize { double x1; double x2; })scaleToFit;
- (id)scaledLayout;
- (void)setInfoGeometry:(id)arg1;
- (void)setScaleToFit:(struct CGSize { double x1; double x2; })arg1;
- (bool)shouldReuseLayout:(id)arg1 forSize:(struct CGSize { double x1; double x2; })arg2 parentLayout:(id)arg3 hint:(id)arg4;
- (id)tableInfo;
- (void)validateScaledLayout;

@end

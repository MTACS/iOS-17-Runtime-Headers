
@interface HKStackedBarSeries : HKBarSeries {
    NSArray * _inactiveFillStylesStorage;
    NSArray * _selectedFillStylesStorage;
    NSLock * _seriesMutableStateLock;
    bool  _shouldRoundBottomCornersStorage;
    NSArray * _unselectedFillStylesStorage;
    NSIndexSet * _unseparatedSegmentIndicesStorage;
}

@property (nonatomic, copy) NSArray *inactiveFillStyles;
@property (nonatomic, copy) NSArray *inactiveFillStylesStorage;
@property (nonatomic, copy) NSArray *selectedFillStyles;
@property (nonatomic, copy) NSArray *selectedFillStylesStorage;
@property (nonatomic, readonly) NSLock *seriesMutableStateLock;
@property (nonatomic) bool shouldRoundBottomCorners;
@property (nonatomic) bool shouldRoundBottomCornersStorage;
@property (nonatomic, copy) NSArray *unselectedFillStyles;
@property (nonatomic, copy) NSArray *unselectedFillStylesStorage;
@property (nonatomic, copy) NSIndexSet *unseparatedSegmentIndices;
@property (nonatomic, copy) NSIndexSet *unseparatedSegmentIndicesStorage;

- (void).cxx_destruct;
- (void)_drawLevels:(id)arg1 withFillStyles:(id)arg2 strokeStyle:(id)arg3 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 context:(struct CGContext { }*)arg5;
- (void)_strokeSeparatorIfNecessaryAboveSegment:(id)arg1 belowSegment:(id)arg2 strokeStyle:(id)arg3 context:(struct CGContext { }*)arg4;
- (id)coordinatesForBlock:(id)arg1 blockPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (void)drawWithBlockCoordinates:(id)arg1 visibleBarCount:(long long)arg2 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 context:(struct CGContext { }*)arg4 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 seriesRenderingDelegate:(id)arg6;
- (id)inactiveFillStyles;
- (id)inactiveFillStylesStorage;
- (id)init;
- (id)selectedFillStyles;
- (id)selectedFillStylesStorage;
- (id)seriesMutableStateLock;
- (void)setInactiveFillStyles:(id)arg1;
- (void)setInactiveFillStylesStorage:(id)arg1;
- (void)setSelectedFillStyles:(id)arg1;
- (void)setSelectedFillStylesStorage:(id)arg1;
- (void)setShouldRoundBottomCorners:(bool)arg1;
- (void)setShouldRoundBottomCornersStorage:(bool)arg1;
- (void)setUnselectedFillStyles:(id)arg1;
- (void)setUnselectedFillStylesStorage:(id)arg1;
- (void)setUnseparatedSegmentIndices:(id)arg1;
- (void)setUnseparatedSegmentIndicesStorage:(id)arg1;
- (bool)shouldRoundBottomCorners;
- (bool)shouldRoundBottomCornersStorage;
- (id)unselectedFillStyles;
- (id)unselectedFillStylesStorage;
- (id)unseparatedSegmentIndices;
- (id)unseparatedSegmentIndicesStorage;

@end

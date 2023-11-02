
@interface HKLevelCategoryTimePeriodSeries : HKHorizontalTimePeriodSeries {
    UIColor * _categoryLevelColorStorage;
    UIFont * _categoryLevelFontStorage;
    bool  _drawSampleSpansStorage;
    UIColor * _innerMarkColorStorage;
    double  _markerRadiusStorage;
    NSLock * _seriesMutableStateLock;
    UIColor * _specialMarkColorStorage;
    NSString * _specialMarkLegendLabelStorage;
}

@property (nonatomic, retain) UIColor *categoryLevelColor;
@property (nonatomic, retain) UIColor *categoryLevelColorStorage;
@property (nonatomic, retain) UIFont *categoryLevelFont;
@property (nonatomic, retain) UIFont *categoryLevelFontStorage;
@property (nonatomic) bool drawSampleSpans;
@property (nonatomic) bool drawSampleSpansStorage;
@property (nonatomic, retain) UIColor *innerMarkColor;
@property (nonatomic, retain) UIColor *innerMarkColorStorage;
@property (nonatomic) double markerRadius;
@property (nonatomic) double markerRadiusStorage;
@property (nonatomic, readonly) NSLock *seriesMutableStateLock;
@property (nonatomic, retain) UIColor *specialMarkColor;
@property (nonatomic, retain) UIColor *specialMarkColorStorage;
@property (nonatomic, retain) NSString *specialMarkLegendLabel;
@property (nonatomic, retain) NSString *specialMarkLegendLabelStorage;

- (void).cxx_destruct;
- (void)_drawCategoryLabels:(struct CGContext { }*)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 seriesRenderingDelegate:(id)arg3;
- (void)_drawMarkerWithContext:(struct CGContext { }*)arg1 style:(long long)arg2 color:(struct CGColor { }*)arg3 innerColor:(struct CGColor { }*)arg4 specialColor:(struct CGColor { }*)arg5 location:(struct CGPoint { double x1; double x2; })arg6 radius:(double)arg7;
- (bool)_interiorCategoryLabels;
- (id)categoryLevelColor;
- (id)categoryLevelColorStorage;
- (id)categoryLevelFont;
- (id)categoryLevelFontStorage;
- (id)coordinatesForBlock:(id)arg1 blockPath:(struct HKGraphSeriesDataBlockPath { long long x1; long long x2; long long x3; })arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (bool)drawSampleSpans;
- (bool)drawSampleSpansStorage;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 renderContext:(struct CGContext { }*)arg5 secondaryRenderContext:(id)arg6 seriesRenderingDelegate:(id)arg7;
- (id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;
- (id)init;
- (id)innerMarkColor;
- (id)innerMarkColorStorage;
- (id)marginsForYAxis:(id)arg1 xAxisRange:(id)arg2 zoomLevel:(long long)arg3 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (double)markerRadius;
- (double)markerRadiusStorage;
- (double)offsetForEnumerationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)seriesMutableStateLock;
- (void)setCategoryLevelColor:(id)arg1;
- (void)setCategoryLevelColorStorage:(id)arg1;
- (void)setCategoryLevelFont:(id)arg1;
- (void)setCategoryLevelFontStorage:(id)arg1;
- (void)setDrawSampleSpans:(bool)arg1;
- (void)setDrawSampleSpansStorage:(bool)arg1;
- (void)setInnerMarkColor:(id)arg1;
- (void)setInnerMarkColorStorage:(id)arg1;
- (void)setMarkerRadius:(double)arg1;
- (void)setMarkerRadiusStorage:(double)arg1;
- (void)setSpecialMarkColor:(id)arg1;
- (void)setSpecialMarkColorStorage:(id)arg1;
- (void)setSpecialMarkLegendLabel:(id)arg1;
- (void)setSpecialMarkLegendLabelStorage:(id)arg1;
- (id)specialMarkColor;
- (id)specialMarkColorStorage;
- (id)specialMarkLegendLabel;
- (id)specialMarkLegendLabelStorage;

@end

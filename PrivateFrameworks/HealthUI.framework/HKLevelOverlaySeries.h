
@interface HKLevelOverlaySeries : HKLineSeries {
    unsigned long long  _options;
}

+ (id)_presentationStyleWithDisplayType:(id)arg1 options:(unsigned long long)arg2;
+ (id)levelOverlaySeriesWithDisplayType:(id)arg1 dataSource:(id)arg2 options:(unsigned long long)arg3;

- (id)_chartDataFromBlockCoordinates:(id)arg1;
- (void)_drawLevelBoundsInContext:(struct CGContext { }*)arg1 coordinates:(id)arg2 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 seriesRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 extendFirstPoint:(bool)arg5 seriesRenderingDelegate:(id)arg6;
- (id)_visibleBlockCoordinatesFromBlockCoordinates:(id)arg1 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 screenRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 strict:(bool)arg4;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 renderContext:(struct CGContext { }*)arg5 secondaryRenderContext:(id)arg6 seriesRenderingDelegate:(id)arg7;
- (id)initWithOptions:(unsigned long long)arg1;
- (long long)overlayType;
- (bool)shouldDisplayLowerBound;
- (bool)shouldDisplayUpperBound;

@end

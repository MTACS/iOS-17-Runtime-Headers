
@protocol TSCHSupportsRendering <NSObject>

@required

- (TSCHChartLayout *)chartLayout;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (bool)forceRenderBlankBackground;
- (TSDLayoutGeometry *)geometry;
- (bool)is2DRepFor3DChartRep;
- (bool)isDrawingIntoPDF;
- (bool)renderElements;
- (bool)renderElementsShadowOnly;
- (bool)renderElementsWithoutShadows;
- (bool)renderGrid;
- (NSIndexSet *)renderGroupIndexSetForSeriesIndex:(unsigned long long)arg1;
- (bool)renderLabels;
- (bool)renderReferenceLines;
- (NSIndexSet *)renderSeriesIndexSet;
- (bool)renderTrendLinesForSeriesIndex:(unsigned long long)arg1;
- (bool)requireSeparateLabelLayer;
- (bool)shadowsEnabled;
- (double)viewScale;

@end

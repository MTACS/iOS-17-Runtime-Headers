
@interface HKGraphViewRenderer : NSObject <HKSeriesRenderingDelegate> {
    HKValueRange * _actualVisibleRange;
    double  _bottomBaselineY;
    bool  _chartMeasuringStartupTime;
    struct CGPoint { 
        double x; 
        double y; 
    }  _contentOffset;
    double  _currentXAxisHeight;
    bool  _disableXAxis;
    bool  _drawingDuringAutoscale;
    bool  _drawingDuringScrolling;
    bool  _drawingToTile;
    HKValueRange * _effectiveVisibleRangeActive;
    HKValueRange * _effectiveVisibleRangeCadence;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _fullChartRect;
    NSArray * _gridlineRanges;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _insetChartRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _insetDataArea;
    UIColor * _outlineColor;
    NSMutableArray * _postOverlayData;
    NSMutableArray * _postSelectionPoints;
    long long  _postUpdates;
    double  _postXAxisHeight;
    UIView<HKGraphRenderer> * _renderingView;
    double  _rightHandInactiveArea;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _scrollingAreaRect;
    UIColor * _selectionLineColor;
    HKGraphViewSelectionStyle * _selectionLineStyle;
    HKGraphViewRendererSeriesConfiguration * _seriesConfiguration;
    UIColor * _tileBackgroundColor;
    long long  _tileColumn;
    double  _topBaselineY;
    long long  _traitResolution;
    HKGraphViewRendererVirtualMarginConfiguration * _virtualMargins;
    HKAxis * _xAxis;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _xAxisCoordinateTransform;
    long long  _xAxisDateZoom;
    double  _zoomScale;
}

@property (nonatomic, readonly) HKValueRange *actualVisibleRange;
@property (nonatomic, readonly) double bottomBaselineY;
@property (nonatomic, readonly) bool chartMeasuringStartupTime;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } contentOffset;
@property (nonatomic, readonly) double currentXAxisHeight;
@property (nonatomic, readonly) bool disableXAxis;
@property (nonatomic, readonly) bool drawingDuringAutoscale;
@property (nonatomic, readonly) bool drawingDuringScrolling;
@property (nonatomic, readonly) bool drawingToTile;
@property (nonatomic, readonly) HKValueRange *effectiveVisibleRangeActive;
@property (nonatomic, readonly) HKValueRange *effectiveVisibleRangeCadence;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } fullChartRect;
@property (nonatomic, readonly) NSArray *gridlineRanges;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } insetChartRect;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } insetDataArea;
@property (nonatomic, readonly) UIColor *outlineColor;
@property (nonatomic, readonly) NSMutableArray *postOverlayData;
@property (nonatomic, readonly) NSMutableArray *postSelectionPoints;
@property (nonatomic, readonly) long long postUpdates;
@property (nonatomic, readonly) double postXAxisHeight;
@property (nonatomic, readonly) UIView<HKGraphRenderer> *renderingView;
@property (nonatomic, readonly) double rightHandInactiveArea;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } scrollingAreaRect;
@property (nonatomic, readonly) UIColor *selectionLineColor;
@property (nonatomic, readonly) HKGraphViewSelectionStyle *selectionLineStyle;
@property (nonatomic, readonly) HKGraphViewRendererSeriesConfiguration *seriesConfiguration;
@property (nonatomic, readonly) UIColor *tileBackgroundColor;
@property (nonatomic, readonly) long long tileColumn;
@property (nonatomic, readonly) double topBaselineY;
@property (nonatomic, readonly) long long traitResolution;
@property (nonatomic, readonly) HKGraphViewRendererVirtualMarginConfiguration *virtualMargins;
@property (nonatomic, readonly) HKAxis *xAxis;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } xAxisCoordinateTransform;
@property (nonatomic, readonly) long long xAxisDateZoom;
@property (nonatomic, readonly) double zoomScale;

- (void).cxx_destruct;
- (void)_clearBackgroundInContext:(struct CGContext { }*)arg1;
- (bool)_lastSeriesInMultiSeriesRow:(id)arg1 series:(id)arg2;
- (void)_renderBaselineWithContext:(struct CGContext { }*)arg1 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_renderDataAreaDividersWithContext:(struct CGContext { }*)arg1;
- (void)_renderSelectionLineWithContext:(struct CGContext { }*)arg1;
- (void)_renderSeriesWithContext:(struct CGContext { }*)arg1 secondaryRenderContext:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_renderVirtualMarginGridLines:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2;
- (void)_renderVirtualMarginInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2 marginStyle:(long long)arg3;
- (void)_renderVirtualMarginsWithContext:(struct CGContext { }*)arg1;
- (void)_renderXAxisGridlinesInContext:(struct CGContext { }*)arg1 withBlendMode:(int)arg2;
- (void)_renderXAxisLabelAndGridsNeedsNewRendererInContext:(struct CGContext { }*)arg1;
- (double)_renderXAxisLabelsInContext:(struct CGContext { }*)arg1;
- (void)_renderYAxisGridlinesInContext:(struct CGContext { }*)arg1 renderingView:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 withBlendMode:(int)arg4 zoomScale:(double)arg5 contentOffset:(struct CGPoint { double x1; double x2; })arg6;
- (id)actualVisibleRange;
- (id)axisAnnotationDelegateForSeries:(id)arg1;
- (double)bottomBaselineY;
- (bool)chartMeasuringStartupTime;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (double)currentXAxisHeight;
- (bool)disableXAxis;
- (bool)drawingDuringAutoscale;
- (bool)drawingDuringScrolling;
- (bool)drawingToTile;
- (id)effectiveVisibleRangeActive;
- (id)effectiveVisibleRangeCadence;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fullChartRect;
- (id)gridlineRanges;
- (id)initWithRendererSeries:(id)arg1 renderingView:(id)arg2 fullChartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 insetChartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 insetDataArea:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 rightHandInactiveArea:(double)arg6 zoomScale:(double)arg7 traitResolution:(long long)arg8 contentOffset:(struct CGPoint { double x1; double x2; })arg9 xAxisDateZoom:(long long)arg10 drawingToTile:(bool)arg11 tileColumn:(long long)arg12 drawingDuringScrolling:(bool)arg13 drawingDuringAutoscale:(bool)arg14 xAxis:(id)arg15 xAxisCoordinateTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg16 virtualMargins:(id)arg17 outlineColor:(id)arg18 tileBackgroundColor:(id)arg19 topBaselineY:(double)arg20 bottomBaselineY:(double)arg21 selectionLineColor:(id)arg22 selectionLineStyle:(id)arg23 disableXAxis:(bool)arg24 currentXAxisHeight:(double)arg25 gridlineRanges:(id)arg26 effectiveVisibleRangeCadence:(id)arg27 effectiveVisibleRangeActive:(id)arg28 actualVisibleRange:(id)arg29 scrollingAreaRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg30 chartMeasuringStartupTime:(bool)arg31;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })insetChartRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })insetDataArea;
- (bool)measuringStartupTime;
- (id)outlineColor;
- (id)postOverlayData;
- (id)postSelectionPoints;
- (long long)postUpdates;
- (double)postXAxisHeight;
- (void)renderContentToContext:(struct CGContext { }*)arg1;
- (id)renderingView;
- (double)rightHandInactiveArea;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })screenRectForSeries:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollingAreaRect;
- (id)selectionLineColor;
- (id)selectionLineStyle;
- (id)seriesConfiguration;
- (struct CGPoint { double x1; double x2; })seriesContentOffset;
- (bool)seriesDrawingAsTopOverlay:(id)arg1;
- (bool)seriesDrawingDuringAutoscale;
- (bool)seriesDrawingDuringScrolling;
- (bool)seriesDrawingDuringTiling;
- (id)tileBackgroundColor;
- (long long)tileColumn;
- (double)topBaselineY;
- (long long)traitResolution;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })virtualMarginInsets;
- (id)virtualMargins;
- (id)xAxis;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })xAxisCoordinateTransform;
- (long long)xAxisDateZoom;
- (double)zoomScale;

@end

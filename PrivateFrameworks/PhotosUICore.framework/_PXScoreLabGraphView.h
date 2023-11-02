
@interface _PXScoreLabGraphView : UIView {
    double  _Ex;
    double  _Ex2;
    double  _Exy;
    double  _Ey;
    double  _Ey2;
    NSArray * _allXValues;
    NSArray * _allYValues;
    NSPredicate * _assetPredicate;
    double  _baseMaxXValue;
    double  _baseMaxYValue;
    double  _baseMinXValue;
    double  _baseMinYValue;
    double  _bottomMargin;
    <_PXScoreLabGraphViewDelegate> * _delegate;
    double  _graphHeight;
    unsigned long long  _graphType;
    double  _graphWidth;
    double  _leftMargin;
    struct CGPoint { 
        double x; 
        double y; 
    }  _locationAtBeginningOfGesture;
    double  _maxXValue;
    double  _maxXValueAtBeginningOfGesture;
    double  _maxYValue;
    double  _maxYValueAtBeginningOfGesture;
    double  _minXValue;
    double  _minXValueAtBeginningOfGesture;
    double  _minYValue;
    double  _minYValueAtBeginningOfGesture;
    unsigned long long  _numberOfIgnoredAssets;
    double  _rightMargin;
    NSObject<OS_dispatch_queue> * _serialQueue;
    double  _topMargin;
    id /* block */  _xScoreValueGetter;
    id /* block */  _yScoreValueGetter;
}

@property (retain) NSPredicate *assetPredicate;
@property <_PXScoreLabGraphViewDelegate> *delegate;
@property unsigned long long graphType;
@property (copy) id /* block */ xScoreValueGetter;
@property (copy) id /* block */ yScoreValueGetter;

- (void).cxx_destruct;
- (id)assetPredicate;
- (void)cancelGesture;
- (id)delegate;
- (void)drawAxisInContext:(struct CGContext { }*)arg1 minXValue:(double)arg2 maxXValue:(double)arg3 minYValue:(double)arg4 maxYValue:(double)arg5;
- (void)drawCorrelationInContext:(struct CGContext { }*)arg1;
- (void)drawDistributionInContext:(struct CGContext { }*)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawTextPanelWithNumberOfAssets:(long long)arg1 numberOfIgnoredAssets:(unsigned long long)arg2 rho:(double)arg3 inContext:(struct CGContext { }*)arg4;
- (void)drawXMean:(double)arg1 andStddev:(double)arg2 inContext:(struct CGContext { }*)arg3;
- (void)drawYMean:(double)arg1 andStddev:(double)arg2 inContext:(struct CGContext { }*)arg3;
- (void)enumerateAssetsUsingBlock:(id /* block */)arg1;
- (unsigned long long)graphType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)loadCorrelationData;
- (void)loadDistributionData;
- (void)panned:(id)arg1;
- (void)pinched:(id)arg1;
- (void)reloadData;
- (void)setAssetPredicate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGraphType:(unsigned long long)arg1;
- (void)setXScoreValueGetter:(id /* block */)arg1;
- (void)setYScoreValueGetter:(id /* block */)arg1;
- (void)startGestureAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateGestureWithLocation:(struct CGPoint { double x1; double x2; })arg1 scale:(double)arg2;
- (id /* block */)xScoreValueGetter;
- (id /* block */)yScoreValueGetter;

@end

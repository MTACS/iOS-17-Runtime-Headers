
@interface HKHeartbeatSequenceChartViewController : HKScalarGraphViewController {
    HKAxis * _commonVerticalAxis;
    NSMutableArray * _graphSeries;
    double  _initialXAxisOffset;
    NSMutableArray * _sequenceDataSources;
    NSDate * _startDate;
}

@property (nonatomic, retain) HKAxis *commonVerticalAxis;
@property (nonatomic, retain) NSMutableArray *graphSeries;
@property (nonatomic) double initialXAxisOffset;
@property (nonatomic, retain) NSMutableArray *sequenceDataSources;
@property (nonatomic, readonly) NSDate *startDate;

- (void).cxx_destruct;
- (void)_adjustGraphViewOptions;
- (id)_heartbeatSequenceSeriesForSource:(id)arg1 axis:(id)arg2 color:(id)arg3 lineWidth:(double)arg4 markerRadius:(double)arg5 dashStyle:(long long)arg6 annotate:(bool)arg7;
- (void)_recomputeAxisRanges;
- (id)_verticalNumericalAxis;
- (void)addSequenceData:(id)arg1;
- (void)addSequenceData:(id)arg1 color:(id)arg2 lineWidth:(double)arg3 markerRadius:(double)arg4 dashStyle:(long long)arg5 annotate:(bool)arg6;
- (id)commonVerticalAxis;
- (id)graphSeries;
- (id)graphView:(id)arg1 graphSeriesForZoom:(long long)arg2 stackOffset:(long long)arg3;
- (void)graphViewSizeChanged:(id)arg1;
- (id)initWithMinimumHeight:(double)arg1;
- (id)initWithMinimumHeight:(double)arg1 startDate:(id)arg2;
- (double)initialXAxisOffset;
- (id)sequenceDataSources;
- (void)setCommonVerticalAxis:(id)arg1;
- (void)setGraphSeries:(id)arg1;
- (void)setInitialXAxisOffset:(double)arg1;
- (void)setSequenceDataSources:(id)arg1;
- (long long)stackCountForGraphView:(id)arg1;
- (id)startDate;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end


@interface HKHistogramChartViewController : HKViewController <HKGraphViewDelegate, HKHistogramChartDataSourceDataFetchObserver, HKLollipopDelegate> {
    HKHistogramAnnotationViewDataSource * _annotationViewDataSource;
    HKHistogramChartDataFormatter * _dataFormatter;
    HKHistogramChartDataSource * _dataSource;
    HKDisplayType * _displayType;
    HKScalarGraphViewController * _graphViewController;
    UILabel * _headerLabel;
    HKHealthStore * _healthStore;
    HKHistogramBarSeries * _histogramSeries;
    HKLollipopController * _lollipopController;
    double  _minimumGraphViewHeight;
}

@property (nonatomic, retain) HKHistogramAnnotationViewDataSource *annotationViewDataSource;
@property (nonatomic, retain) HKHistogramChartDataFormatter *dataFormatter;
@property (nonatomic, retain) HKHistogramChartDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HKDisplayType *displayType;
@property (nonatomic, retain) HKScalarGraphViewController *graphViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILabel *headerLabel;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, retain) HKHistogramBarSeries *histogramSeries;
@property (nonatomic, retain) HKLollipopController *lollipopController;
@property (nonatomic) double minimumGraphViewHeight;
@property (readonly) Class superclass;

+ (id)defaultVerticalAxis;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_barCornerRadiusForCurrentDevice;
- (id)_descriptionDateFormatter;
- (id)_displayDescriptionForDataSource:(id)arg1;
- (void)_pinView:(id)arg1 toParentView:(id)arg2;
- (id)annotationViewDataSource;
- (id)dataFormatter;
- (id)dataSource;
- (void)didCompleteFetchForDataSource:(id)arg1;
- (id)displayType;
- (void)graphView:(id)arg1 didFinishUserScrollingToValueRange:(id)arg2;
- (void)graphView:(id)arg1 didUpdateFromDateZoom:(long long)arg2 toDateZoom:(long long)arg3 newVisibleRange:(id)arg4;
- (void)graphView:(id)arg1 didUpdateLegendViewsWithTopLegendFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)graphView:(id)arg1 didUpdateSelectedPoint:(id)arg2;
- (void)graphView:(id)arg1 didUpdateSeries:(id)arg2 newDataArrived:(bool)arg3 changeContext:(long long)arg4;
- (void)graphView:(id)arg1 didUpdateVisibleValueRange:(id)arg2 changeContext:(long long)arg3;
- (void)graphView:(id)arg1 didUpdateYAxisWidth:(double)arg2 toWidth:(double)arg3;
- (id)graphView:(id)arg1 graphSeriesForZoom:(long long)arg2 stackOffset:(long long)arg3;
- (id)graphViewController;
- (void)graphViewDidBeginSelection:(id)arg1;
- (void)graphViewDidEndSelection:(id)arg1;
- (void)graphViewDidTapYAxis:(id)arg1;
- (void)graphViewExternalSelectionEnd:(id)arg1;
- (bool)graphViewPointSelectionDifferentiatesSeriesGroups:(id)arg1;
- (void)graphViewRenderedView:(id)arg1;
- (void)graphViewSizeChanged:(id)arg1;
- (id)headerLabel;
- (id)healthStore;
- (id)histogramSeries;
- (id)initWithHealthStore:(id)arg1 dataSource:(id)arg2 dataFormatter:(id)arg3 minimumGraphViewHeight:(double)arg4;
- (id)lollipopController;
- (double)minimumGraphViewHeight;
- (id)seriesSelectionLineColorForGraphView:(id)arg1;
- (void)setAnnotationViewDataSource:(id)arg1;
- (void)setDataFormatter:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDisplayType:(id)arg1;
- (void)setGraphViewController:(id)arg1;
- (void)setHeaderLabel:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setHistogramSeries:(id)arg1;
- (void)setLollipopController:(id)arg1;
- (void)setMinimumGraphViewHeight:(double)arg1;
- (long long)stackCountForGraphView:(id)arg1;
- (void)updateAnnotationDataSource:(id)arg1 pointContexts:(id)arg2;
- (void)viewDidLoad;

@end


@interface HKPopulationNormsGraphView : UIView {
    NSMutableArray * _ageBucketBarViews;
    NSNumber * _ageBucketIndex;
    unsigned long long  _classificationIndex;
    NSNumber * _currentViewWidth;
    HKPopulationNormsChartGridView * _gridView;
    UIColor * _highlightedSegmentColor;
    UIView * _latestSampleHighlightView;
    NSNumber * _latestSampleValue;
    double  _maxChartYValue;
    double  _minChartYValue;
    UIFont * _seriesTitleFont;
    unsigned long long  _sexSegmentIndex;
    NSString * _xSeriesTitle;
    UILabel * _xSeriesTitleLabel;
    NSString * _ySeriesTitle;
    UILabel * _ySeriesTitleLabel;
}

@property (nonatomic, retain) NSMutableArray *ageBucketBarViews;
@property (nonatomic, retain) NSNumber *ageBucketIndex;
@property (nonatomic) unsigned long long classificationIndex;
@property (nonatomic, retain) NSNumber *currentViewWidth;
@property (nonatomic, retain) HKPopulationNormsChartGridView *gridView;
@property (nonatomic, readonly) UIColor *highlightedSegmentColor;
@property (nonatomic, retain) UIView *latestSampleHighlightView;
@property (nonatomic, retain) NSNumber *latestSampleValue;
@property (nonatomic) double maxChartYValue;
@property (nonatomic) double minChartYValue;
@property (nonatomic, readonly) UIFont *seriesTitleFont;
@property (nonatomic) unsigned long long sexSegmentIndex;
@property (nonatomic, copy) NSString *xSeriesTitle;
@property (nonatomic, retain) UILabel *xSeriesTitleLabel;
@property (nonatomic, copy) NSString *ySeriesTitle;
@property (nonatomic, retain) UILabel *ySeriesTitleLabel;

- (void).cxx_destruct;
- (unsigned long long)_highlightIndexForClassificationIndex:(unsigned long long)arg1 numberOfSegments:(unsigned long long)arg2;
- (void)_updateUserValueChartPointIfNecessary;
- (id)ageBucketBarViews;
- (id)ageBucketIndex;
- (unsigned long long)classificationIndex;
- (id)currentViewWidth;
- (id)gridView;
- (id)highlightedSegmentColor;
- (id)initWithMaxYValue:(double)arg1 minYValue:(double)arg2 YSeriesTitle:(id)arg3 XSeriesTitle:(id)arg4 highlightedSegmentColor:(id)arg5;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)latestSampleHighlightView;
- (id)latestSampleValue;
- (void)layoutSubviews;
- (double)maxChartYValue;
- (double)minChartYValue;
- (id)seriesTitleFont;
- (void)setAgeBucketBarViews:(id)arg1;
- (void)setAgeBucketIndex:(id)arg1;
- (void)setClassificationIndex:(unsigned long long)arg1;
- (void)setCurrentViewWidth:(id)arg1;
- (void)setGridView:(id)arg1;
- (void)setLatestSampleHighlightView:(id)arg1;
- (void)setLatestSampleValue:(id)arg1;
- (void)setMaxChartYValue:(double)arg1;
- (void)setMinChartYValue:(double)arg1;
- (void)setSexSegmentIndex:(unsigned long long)arg1;
- (void)setXSeriesTitle:(id)arg1;
- (void)setXSeriesTitleLabel:(id)arg1;
- (void)setYSeriesTitle:(id)arg1;
- (void)setYSeriesTitleLabel:(id)arg1;
- (unsigned long long)sexSegmentIndex;
- (void)updateWithFlattenedLevelsByAgeBucket:(id)arg1 currentClassificationIndex:(unsigned long long)arg2;
- (void)updateWithUserAgeBucketIndex:(id)arg1 userLatestSampleValue:(id)arg2;
- (id)xSeriesTitle;
- (id)xSeriesTitleLabel;
- (id)ySeriesTitle;
- (id)ySeriesTitleLabel;

@end

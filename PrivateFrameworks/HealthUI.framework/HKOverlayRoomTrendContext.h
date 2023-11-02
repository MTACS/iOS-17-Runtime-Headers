
@interface HKOverlayRoomTrendContext : NSObject <HKOverlayContext, HKTrendAccessibilityDelegate> {
    long long  _categoryIdentifier;
    HKDisplayTypeContextItem * _lastUpdatedItem;
    HKInteractiveChartOverlayViewController * _overlayChartController;
    long long  _overlayMode;
    HKGraphSeries * _seriesForSelectedTrend;
    HKInteractiveChartDisplayType * _trendDisplayType;
    HKChartSummaryTrendModel * _trendModel;
}

@property (nonatomic, readonly) long long categoryIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKDisplayTypeContextItem *lastUpdatedItem;
@property (nonatomic, readonly) HKInteractiveChartOverlayViewController *overlayChartController;
@property (nonatomic, readonly) long long overlayMode;
@property (nonatomic, retain) HKGraphSeries *seriesForSelectedTrend;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HKInteractiveChartDisplayType *trendDisplayType;
@property (nonatomic, readonly) HKChartSummaryTrendModel *trendModel;

+ (id)findInitialDateFromTrendModel:(id)arg1;
+ (long long)findStartingTimeScopeFromTrendModel:(id)arg1;

- (void).cxx_destruct;
- (id)_adjustTrendValueRange:(id)arg1 timescope:(long long)arg2 calendar:(id)arg3;
- (id)_buildAnnotatedHorizontalLineSeriesUsingDisplayType:(id)arg1 unitController:(id)arg2;
- (id)_buildTrendDisplayTypeFromModel:(id)arg1 baseDisplayType:(id)arg2 unitController:(id)arg3;
- (id)_buildTrendOverlayValueFormatterUsingDisplayType:(id)arg1 unitController:(id)arg2;
- (id)_buildTrendingLineSeriesStyleWithColor:(id)arg1 formattingDisplayType:(id)arg2 unitController:(id)arg3 annotationFormatter:(id)arg4;
- (id)_durationContextItemWithSummaryPhrase:(id)arg1 timeScope:(long long)arg2;
- (id)_representativeDisplayTypeFromDisplayType:(id)arg1;
- (id)_summaryGivenChartPoints:(id)arg1 timeScope:(long long)arg2;
- (bool)_timeScopeHasTrendSpans:(long long)arg1;
- (bool)_timeScopeMayHaveTrends:(long long)arg1;
- (id)_trendTitle;
- (id)_trendValueRangeForTimescope:(long long)arg1 calendar:(id)arg2;
- (id)_unselectedMetricColorsUserInteractive:(bool)arg1;
- (bool)canSelectOverlayContextItem:(id)arg1 isDeselecting:(bool)arg2 timeScope:(long long)arg3 chartController:(id)arg4;
- (long long)categoryIdentifier;
- (id)contextItemForLastUpdate;
- (id)initWithBaseDisplayType:(id)arg1 trendModel:(id)arg2 overlayChartController:(id)arg3 applicationItems:(id)arg4 overlayMode:(long long)arg5;
- (bool)isEqual:(id)arg1;
- (id)lastUpdatedItem;
- (id)overlayChartController;
- (id)overlayDisplayTypeForTimeScope:(long long)arg1;
- (long long)overlayMode;
- (void)overlayStateDidChange:(bool)arg1 contextItem:(id)arg2 chartController:(id)arg3;
- (long long)resolutionForTimeScope:(long long)arg1 traitResolution:(long long)arg2;
- (id)sampleTypeForDateRangeUpdates;
- (id)seriesForSelectedTrend;
- (void)setLastUpdatedItem:(id)arg1;
- (void)setSeriesForSelectedTrend:(id)arg1;
- (id)trendAccessibilitySeries;
- (id)trendDisplayType;
- (id)trendModel;
- (void)updateContextItemForDateInterval:(id)arg1 overlayController:(id)arg2 timeScope:(long long)arg3 resolution:(long long)arg4 completion:(id /* block */)arg5;

@end

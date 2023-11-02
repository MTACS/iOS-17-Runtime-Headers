
@interface HKInteractiveChartOverlayViewController : HKInteractiveChartViewController <HKInteractiveChartViewObserver> {
    UIColor * _currentOverlayColor;
    NSMutableDictionary * _customNamedCaches;
    long long  _displayMode;
    HKValueRange * _initialVisibleDateRange;
    NSMutableDictionary * _overlayChartCaches;
    HKDisplayType * _overlayDisplayType;
    HKDisplayType * _primaryDisplayType;
    _HKInteractiveChartOverlayWaitForCacheData * _waitForCacheData;
}

@property (nonatomic, retain) UIColor *currentOverlayColor;
@property (nonatomic, retain) NSMutableDictionary *customNamedCaches;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long displayMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKValueRange *initialVisibleDateRange;
@property (nonatomic, retain) NSMutableDictionary *overlayChartCaches;
@property (nonatomic, retain) HKDisplayType *overlayDisplayType;
@property (nonatomic, readonly) HKDisplayType *primaryDisplayType;
@property (readonly) Class superclass;
@property (nonatomic, retain) _HKInteractiveChartOverlayWaitForCacheData *waitForCacheData;

- (void).cxx_destruct;
- (void)_commonInitializationWithDisplayType:(id)arg1;
- (id)_dataSourceForDistributionStyle:(long long)arg1 timeScope:(long long)arg2 namedPredicate:(id)arg3;
- (id)_dataSourceForNamedDataSource:(id)arg1 templateDisplayType:(id)arg2;
- (id)_dataSourceForQuantityType:(id)arg1 timeScope:(long long)arg2 customDataSource:(id)arg3;
- (bool)_deliverCachedDataFromSource:(id)arg1 graphSeriesContext:(id)arg2 timeScope:(long long)arg3 resolution:(long long)arg4 startDate:(id)arg5 endDate:(id)arg6 completion:(id /* block */)arg7;
- (void)_deliverOrWaitForDataSource:(id)arg1 graphSeriesContext:(id)arg2 priorityDelegate:(id)arg3 timeScope:(long long)arg4 resolution:(long long)arg5 startDate:(id)arg6 endDate:(id)arg7 queryIfNeeded:(bool)arg8 completion:(id /* block */)arg9;
- (bool)_displayTypeRequiresAverageAndDuration:(id)arg1;
- (void)_modifyFormatter:(id)arg1 forTitleOptions:(long long)arg2;
- (id)_overlayChartCacheForDataSource:(id)arg1 templateDisplayType:(id)arg2;
- (id)_overlayChartCacheForDistributionStyle:(long long)arg1 timeScope:(long long)arg2 namedPredicate:(id)arg3;
- (void)cachedDataForCustomGraphSeries:(id)arg1 timeScope:(long long)arg2 resolution:(long long)arg3 startDate:(id)arg4 endDate:(id)arg5 completion:(id /* block */)arg6;
- (void)cachedDataForCustomGraphSeries:(id)arg1 timeScope:(long long)arg2 resolution:(long long)arg3 startDate:(id)arg4 endDate:(id)arg5 queryIfNeeded:(bool)arg6 completion:(id /* block */)arg7;
- (void)cachedDataForQuantityDistributionStyle:(long long)arg1 timeScope:(long long)arg2 resolution:(long long)arg3 startDate:(id)arg4 endDate:(id)arg5 namedPredicate:(id)arg6 completion:(id /* block */)arg7;
- (void)cachedDataForQuantityIdentifier:(id)arg1 timeScope:(long long)arg2 resolution:(long long)arg3 startDate:(id)arg4 endDate:(id)arg5 cacheDataSource:(id)arg6 completion:(id /* block */)arg7;
- (void)cachedDataForStandardDisplayType:(id)arg1 timeScope:(long long)arg2 resolution:(long long)arg3 startDate:(id)arg4 endDate:(id)arg5 completion:(id /* block */)arg6;
- (void)clearDisplayTypeStack;
- (void)clearOverlayDisplayType;
- (void)clearOverlayDisplayTypeWithAutomaticAutoscale:(bool)arg1;
- (void)configureDisplayTypes:(id)arg1 timeScope:(long long)arg2 stackOffset:(long long)arg3;
- (id)currentOverlayColor;
- (id)customNamedCaches;
- (long long)displayMode;
- (id)displayTypeForGraphSeries:(id)arg1 namedDataSource:(id)arg2 templateDisplayType:(id)arg3 timeScope:(long long)arg4 formatter:(id)arg5;
- (id)displayTypeForQuantityDistributionStyle:(long long)arg1 timeScope:(long long)arg2 overlayColor:(id)arg3 options:(long long)arg4 alternateFormatter:(id)arg5 namedPredicate:(id)arg6;
- (id)displayTypeForQuantityIdentifier:(id)arg1 timeScope:(long long)arg2 displayTypeController:(id)arg3 overlayColor:(id)arg4 cacheDataSource:(id)arg5 alternateLineSeries:(id)arg6 alternateFormatter:(id)arg7 seriesOptions:(long long)arg8;
- (id)initWithHealthStore:(id)arg1 primaryDisplayType:(id)arg2 unitPreferenceController:(id)arg3 dateCache:(id)arg4 chartDataCacheController:(id)arg5 selectedTimeScopeController:(id)arg6 sampleTypeDateRangeController:(id)arg7 initialXValue:(id)arg8 currentCalendarOverride:(id)arg9 options:(unsigned long long)arg10;
- (id)initWithTimeScopeRanges:(id)arg1 healthStore:(id)arg2 primaryDisplayType:(id)arg3 unitPreferenceController:(id)arg4 dateCache:(id)arg5 chartDataCacheController:(id)arg6 selectedTimeScopeController:(id)arg7 sampleTypeDateRangeController:(id)arg8 initialXValue:(id)arg9 currentCalendarOverride:(id)arg10 options:(unsigned long long)arg11;
- (id)initialVisibleDateRange;
- (void)installOverlayDisplayType:(id)arg1;
- (void)installStackedDisplayType:(id)arg1;
- (id)lollipopAnnotationColor;
- (id)lollipopExtensionColor;
- (double)minimumHeightForChart;
- (id)overlayChartCaches;
- (id)overlayDisplayType;
- (id)primaryDisplayType;
- (id)seriesSelectionLineColorForGraphView:(id)arg1;
- (void)setCurrentOverlayColor:(id)arg1;
- (void)setCustomNamedCaches:(id)arg1;
- (void)setDisplayMode:(long long)arg1;
- (void)setInitialVisibleDateRange:(id)arg1;
- (void)setOverlayChartCaches:(id)arg1;
- (void)setOverlayDisplayType:(id)arg1;
- (void)setWaitForCacheData:(id)arg1;
- (void)unitPreferencesWillUpdate:(id)arg1;
- (id)visibleRangeForTimeScope:(long long)arg1 proposedRange:(id)arg2;
- (id)waitForCacheData;

@end

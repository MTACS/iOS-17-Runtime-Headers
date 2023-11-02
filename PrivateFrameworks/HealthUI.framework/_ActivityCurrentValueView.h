
@interface _ActivityCurrentValueView : UIView {
    HKActivitySummaryDataProvider * _activitySummaryDataProvider;
    HKInteractiveChartAnnotationView * _annotationView;
    _ActivityCurrentValueDataSource * _currentValueDataSource;
    NSLayoutConstraint * _leadingMarginConstraint;
    NSLayoutConstraint * _trailingMarginConstraint;
}

@property (nonatomic, retain) HKActivitySummaryDataProvider *activitySummaryDataProvider;
@property (nonatomic, readonly) HKInteractiveChartAnnotationView *annotationView;
@property (nonatomic, retain) _ActivityCurrentValueDataSource *currentValueDataSource;
@property (nonatomic, retain) NSLayoutConstraint *leadingMarginConstraint;
@property (nonatomic, retain) NSLayoutConstraint *trailingMarginConstraint;

- (void).cxx_destruct;
- (id)_findFirstActivitySeriesInGraphView:(id)arg1;
- (void)_updateForDayWithGraphView:(id)arg1;
- (void)_updateWithGraphView:(id)arg1 forTimeScopeAboveDay:(long long)arg2;
- (id)activitySummaryDataProvider;
- (id)annotationView;
- (id)currentValueDataSource;
- (id)initWithDisplayTypeController:(id)arg1 unitPreferenceController:(id)arg2 wheelchairUseCharacteristicCache:(id)arg3 currentValueViewCallbacks:(id)arg4 activitySummaryDataProvider:(id)arg5 activityOptions:(unsigned long long)arg6 firstWeekday:(long long)arg7;
- (void)layoutSubviews;
- (id)leadingMarginConstraint;
- (void)setActivitySummaryDataProvider:(id)arg1;
- (void)setCurrentValueDataSource:(id)arg1;
- (void)setLeadingMarginConstraint:(id)arg1;
- (void)setTrailingMarginConstraint:(id)arg1;
- (id)trailingMarginConstraint;
- (void)updateWithGraphView:(id)arg1 timeScope:(long long)arg2;

@end

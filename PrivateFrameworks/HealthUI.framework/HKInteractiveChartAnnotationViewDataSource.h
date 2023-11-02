
@interface HKInteractiveChartAnnotationViewDataSource : NSObject <HKInteractiveChartAnnotationViewDataSourceProtocol> {
    NSArray * _annotationLabels;
    <HKCurrentValueViewDataSourceDelegate> * _currentValueViewDataSourceDelegate;
    long long  _firstWeekday;
    NSString * _lastCombinedDateString;
    HKValueRange * _lastDateRange;
    NSString * _lastLowerDateString;
    NSString * _lastUpperDateString;
    UILabel * _mainDateLabel;
    UIFont * _majorFont;
    UIFont * _minorFont;
    HKSelectedRangeFormatter * _selectedRangeFormatter;
}

@property (nonatomic, retain) NSArray *annotationLabels;
@property (nonatomic) <HKCurrentValueViewDataSourceDelegate> *currentValueViewDataSourceDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long firstWeekday;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *lastCombinedDateString;
@property (retain) HKValueRange *lastDateRange;
@property (nonatomic, retain) NSString *lastLowerDateString;
@property (nonatomic, retain) NSString *lastUpperDateString;
@property (nonatomic, retain) UILabel *mainDateLabel;
@property (nonatomic, retain) UIFont *majorFont;
@property (nonatomic, retain) UIFont *minorFont;
@property (nonatomic, readonly) HKSelectedRangeFormatter *selectedRangeFormatter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_buildDateLabels;
- (id)_dateRangeFromSelectionContext:(id)arg1 timeScope:(long long)arg2;
- (bool)_isMultiSelectionDateRange;
- (void)_updateDateTextWithTimeScope:(long long)arg1 resolution:(long long)arg2;
- (id)_weeksContainingDateRange:(id)arg1;
- (id)annotationLabels;
- (id)currentValueViewDataSourceDelegate;
- (id)dateViewWithOrientation:(long long)arg1;
- (long long)firstWeekday;
- (id)initWithSelectedRangeFormatter:(id)arg1 firstWeekday:(long long)arg2 currentValueViewDataSourceDelegate:(id)arg3;
- (id)lastCombinedDateString;
- (id)lastDateRange;
- (id)lastLowerDateString;
- (id)lastUpperDateString;
- (id)leftMarginViewWithOrientation:(long long)arg1;
- (id)mainDateLabel;
- (id)majorFont;
- (id)minorFont;
- (long long)numberOfValuesForAnnotationView:(id)arg1;
- (id)selectedRangeFormatter;
- (void)setAnnotationLabels:(id)arg1;
- (void)setCurrentValueViewDataSourceDelegate:(id)arg1;
- (void)setFirstWeekday:(long long)arg1;
- (void)setLastCombinedDateString:(id)arg1;
- (void)setLastDateRange:(id)arg1;
- (void)setLastLowerDateString:(id)arg1;
- (void)setLastUpperDateString:(id)arg1;
- (void)setMainDateLabel:(id)arg1;
- (void)setMajorFont:(id)arg1;
- (void)setMinorFont:(id)arg1;
- (bool)showSeparators;
- (void)updateWithSelectionContext:(id)arg1 displayType:(id)arg2 timeScope:(long long)arg3 resolution:(long long)arg4 healthStore:(id)arg5 viewController:(id)arg6;
- (id)valueViewForColumnAtIndex:(long long)arg1 orientation:(long long)arg2;

@end

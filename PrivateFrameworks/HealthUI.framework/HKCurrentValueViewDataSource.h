
@interface HKCurrentValueViewDataSource : NSObject <HKInteractiveChartAnnotationViewDataSourceProtocol> {
    NSMutableArray * _annotationLabels;
    HKDateCache * _dateCache;
    NSString * _dateIntervalString;
    UILabel * _dateLabelView;
    <HKCurrentValueViewDataSourceDelegate> * _delegate;
    HKDisplayType * _displayType;
    HKHealthStore * _healthStore;
    UIFont * _majorFont;
    UIFont * _minorFont;
    bool  _pendingData;
    NSArray * _selectedRangeData;
    HKSelectedRangeFormatter * _selectedRangeFormatter;
    UIColor * _titleColor;
    UIColor * _valueColor;
}

@property (nonatomic, retain) NSMutableArray *annotationLabels;
@property (nonatomic, retain) HKDateCache *dateCache;
@property (nonatomic, retain) NSString *dateIntervalString;
@property (nonatomic, retain) UILabel *dateLabelView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKCurrentValueViewDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HKDisplayType *displayType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, retain) UIFont *majorFont;
@property (nonatomic, retain) UIFont *minorFont;
@property (nonatomic) bool pendingData;
@property (nonatomic, retain) NSArray *selectedRangeData;
@property (nonatomic, retain) HKSelectedRangeFormatter *selectedRangeFormatter;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *titleColor;
@property (nonatomic, retain) UIColor *valueColor;

+ (id)defaultStringForValueRange:(id)arg1 timeScope:(long long)arg2;

- (void).cxx_destruct;
- (id)_dateIntervalStringForGraphView:(id)arg1 timeScope:(long long)arg2;
- (id)_delegateTitleForSelectedRangeData:(id)arg1 displayType:(id)arg2;
- (id)_delegateValueForSelectedRangeData:(id)arg1;
- (id)_delegateValueStringForGraphView:(id)arg1 timeScope:(long long)arg2;
- (bool)_pendingDataForGraphView:(id)arg1;
- (void)_updateAnnotationLabels:(id)arg1 fromRangeData:(id)arg2 displayType:(id)arg3;
- (id)annotationLabels;
- (id)dateCache;
- (id)dateIntervalString;
- (id)dateLabelView;
- (id)dateViewWithOrientation:(long long)arg1;
- (id)delegate;
- (id)displayType;
- (id)healthStore;
- (id)initWithDateCache:(id)arg1 healthStore:(id)arg2 selectedRangeFormatter:(id)arg3;
- (id)leftMarginViewWithOrientation:(long long)arg1;
- (id)majorFont;
- (id)minorFont;
- (long long)numberOfValuesForAnnotationView:(id)arg1;
- (bool)pendingData;
- (id)selectedRangeData;
- (id)selectedRangeFormatter;
- (void)setAnnotationLabels:(id)arg1;
- (void)setDateCache:(id)arg1;
- (void)setDateIntervalString:(id)arg1;
- (void)setDateLabelView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayType:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setMajorFont:(id)arg1;
- (void)setMinorFont:(id)arg1;
- (void)setPendingData:(bool)arg1;
- (void)setSelectedRangeData:(id)arg1;
- (void)setSelectedRangeFormatter:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setValueColor:(id)arg1;
- (bool)showSeparators;
- (id)titleColor;
- (void)updateDataSourceWithGraphView:(id)arg1 displayType:(id)arg2 timeScope:(long long)arg3;
- (id)valueColor;
- (id)valueViewForColumnAtIndex:(long long)arg1 orientation:(long long)arg2;

@end

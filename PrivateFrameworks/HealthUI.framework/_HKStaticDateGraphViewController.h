
@interface _HKStaticDateGraphViewController : HKDateGraphViewController {
    NSMutableArray * _allStackedSeries;
    HKValueRange * _fixedRange;
}

@property (nonatomic, retain) NSMutableArray *allStackedSeries;
@property (nonatomic, readonly) HKValueRange *fixedRange;

- (void).cxx_destruct;
- (void)addStackedSeries:(id)arg1;
- (id)allStackedSeries;
- (id)fixedRange;
- (void)graphView:(id)arg1 didUpdateSeries:(id)arg2 newDataArrived:(bool)arg3 changeContext:(long long)arg4;
- (id)graphView:(id)arg1 graphSeriesForZoom:(long long)arg2 stackOffset:(long long)arg3;
- (id)initWithFixedRange:(id)arg1 currentCalendar:(id)arg2;
- (void)setAllStackedSeries:(id)arg1;
- (long long)stackCountForGraphView:(id)arg1;
- (void)viewDidLoad;

@end

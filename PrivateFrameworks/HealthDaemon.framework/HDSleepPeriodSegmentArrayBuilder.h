
@interface HDSleepPeriodSegmentArrayBuilder : NSObject <HDSleepPeriodSegmentArrayBuilding> {
    HKCalendarCache * _calendarCache;
    long long  _morningIndex;
    unsigned long long  _options;
    HDProfile * _profile;
    <HDStatisticsCollectionCalculatorSourceOrderProvider> * _sourceOrderProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initProfile:(id)arg1 morningIndex:(long long)arg2 options:(unsigned long long)arg3 calendarCache:(id)arg4 sourceOrderProvider:(id)arg5;
- (id)sleepPeriodSegmentsFromSamples:(id)arg1;

@end

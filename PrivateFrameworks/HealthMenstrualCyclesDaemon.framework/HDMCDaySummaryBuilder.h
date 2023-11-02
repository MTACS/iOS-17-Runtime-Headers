
@interface HDMCDaySummaryBuilder : NSObject {
    NSMutableArray * _basalBodyTemperatureSamples;
    HKCalendarCache * _calendarCache;
    NSMutableArray * _cervicalMucusQualitySamples;
    long long  _dayIndex;
    NSMutableArray * _endedCycleFactors;
    NSMutableArray * _intermenstrualBleedingSamples;
    NSMutableArray * _menstrualFlowSamples;
    NSArray * _orderedWatchSources;
    NSMutableArray * _ovulationTestResultSamples;
    NSMutableArray * _pregnancyTestResultSamples;
    HDProfile * _profile;
    NSMutableArray * _progesteroneTestResultSamples;
    NSMutableDictionary * _sampleCountByType;
    NSMutableArray * _sexualActivitySamples;
    NSMutableArray * _startedCycleFactors;
    NSMutableArray * _symptomsSamples;
    NSMutableArray * _wristTemperatureSamples;
}

@property (nonatomic, readonly) long long dayIndex;

- (void).cxx_destruct;
- (id)_basalBodyTemperature;
- (long long)_cervicalMucusQuality;
- (id)_endedCycleFactors;
- (bool)_intermenstrualBleeding;
- (long long)_menstrualFlowWithModificationDay:(long long*)arg1 startOfCycleFromCycleTracking:(id*)arg2;
- (long long)_ovulationTestResult;
- (long long)_pregnancyTestResult;
- (long long)_progesteroneTestResult;
- (long long)_sexualActivity;
- (id)_startedCycleFactors;
- (unsigned long long)_symptoms;
- (id)_wristTemperature;
- (void)addCycleTrackingSample:(id)arg1;
- (id)createDaySummaryWithDevice:(id)arg1;
- (long long)dayIndex;
- (id)initWithProfile:(id)arg1 dayIndex:(long long)arg2 orderedWatchSources:(id)arg3 calendarCache:(id)arg4;

@end

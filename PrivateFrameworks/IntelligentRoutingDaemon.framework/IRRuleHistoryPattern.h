
@interface IRRuleHistoryPattern : IRRule {
    bool  _calculateScoreWithoutPortion;
    NSSet * _eventsToWatch;
    NSSet * _filters;
    unsigned long long  _maxNumberOfEventsInHistory;
    unsigned long long  _minNumberOfEventsInHistory;
    double  _threshold;
    double  _timeInterval;
}

@property (nonatomic) bool calculateScoreWithoutPortion;
@property (nonatomic, retain) NSSet *eventsToWatch;
@property (nonatomic, retain) NSSet *filters;
@property (nonatomic) unsigned long long maxNumberOfEventsInHistory;
@property (nonatomic) unsigned long long minNumberOfEventsInHistory;
@property (nonatomic) double threshold;
@property (nonatomic) double timeInterval;

+ (bool)_filterHistoryBySameApp:(id)arg1 withSystemState:(id)arg2;
+ (bool)filterHistoryBySimilarApp:(id)arg1 withSystemState:(id)arg2;

- (void).cxx_destruct;
- (bool)_filterHistoryByEventsToWatch:(id)arg1;
- (bool)_filterHistoryByMilo:(id)arg1 withMiloPrediction:(id)arg2;
- (bool)_filterHistoryBySameDay:(id)arg1 comparedToDate:(id)arg2 withSystemState:(id)arg3;
- (bool)_filterHistoryBySameLoi:(id)arg1 withSystemState:(id)arg2;
- (bool)_filterHistoryByTimeInterval:(id)arg1 comparedToDate:(id)arg2;
- (id)_filterHistoryEvents:(id)arg1 withSystemState:(id)arg2 date:(id)arg3 miloPrediction:(id)arg4 candiatesContainer:(id)arg5;
- (bool)_filterHistorywithSameCandidates:(id)arg1 withSameCandidates:(id)arg2;
- (bool)calculateScoreWithoutPortion;
- (id)eventsToWatch;
- (id)executeRuleWithCandiatesContainer:(id)arg1 systemStatus:(id)arg2 historyContainer:(id)arg3 miloPrediction:(id)arg4 nearbyDeviceContainer:(id)arg5 date:(id)arg6;
- (id)filters;
- (id)init;
- (id)initWithEventsToWatch:(id)arg1 filters:(id)arg2 timeInterval:(double)arg3 maxNumberOfEventsInHistory:(unsigned long long)arg4 minNumberOfEventsInHistory:(unsigned long long)arg5 threshold:(double)arg6;
- (unsigned long long)maxNumberOfEventsInHistory;
- (unsigned long long)minNumberOfEventsInHistory;
- (void)setCalculateScoreWithoutPortion:(bool)arg1;
- (void)setEventsToWatch:(id)arg1;
- (void)setFilters:(id)arg1;
- (void)setMaxNumberOfEventsInHistory:(unsigned long long)arg1;
- (void)setMinNumberOfEventsInHistory:(unsigned long long)arg1;
- (void)setThreshold:(double)arg1;
- (void)setTimeInterval:(double)arg1;
- (double)threshold;
- (double)timeInterval;

@end

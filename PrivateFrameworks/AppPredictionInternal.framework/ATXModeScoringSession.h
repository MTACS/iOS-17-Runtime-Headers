
@interface ATXModeScoringSession : NSObject {
    NSArray * _appLaunches;
    double  _endTimestamp;
    ATXModeEntityStore * _modeEntityStore;
    ATXModeEntityAffinityVector * _sessionAffinityVector;
    double  _startTimestamp;
}

@property (nonatomic, readonly) NSArray *appLaunches;
@property (nonatomic, readonly) double endTimestamp;
@property (nonatomic, readonly) ATXModeEntityStore *modeEntityStore;
@property (nonatomic, retain) ATXModeEntityAffinityVector *sessionAffinityVector;
@property (nonatomic, readonly) double startTimestamp;

+ (id)coalesceSessions:(id)arg1 modeEntityStore:(id)arg2;

- (void).cxx_destruct;
- (id)_initFromStartTime:(double)arg1 endTime:(double)arg2 modeEntityStore:(id)arg3 appLaunches:(id)arg4 sessionAffinityVector:(id)arg5;
- (void)_populateAffinity;
- (id)_weightForLaunch:(id)arg1;
- (double)affinityForMode:(unsigned long long)arg1;
- (id)appLaunches;
- (void)debug_prettyPrintSession:(bool)arg1;
- (double)duration;
- (double)endTimestamp;
- (bool)hasModeWithinRank:(unsigned long long)arg1 rank:(unsigned long long)arg2;
- (id)initFromStartTime:(double)arg1 endTime:(double)arg2 modeEntityStore:(id)arg3;
- (bool)isLabeled;
- (bool)isStronglyCorrelatedWithTopMode;
- (id)modeEntityStore;
- (double)numScoredAppLaunches;
- (void)populateAppLaunches:(id)arg1;
- (double)secondsUntilOtherSession:(id)arg1;
- (id)sessionAffinityVector;
- (void)setSessionAffinityVector:(id)arg1;
- (double)startTimestamp;
- (unsigned long long)topMode;

@end

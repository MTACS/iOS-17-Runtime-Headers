
@interface IMDSpotlightIndexerTimingProfiler : NSObject {
    NSArray * _abortedTimers;
    NSMutableArray * _runTimers;
    NSMutableSet * _runningTimers;
    double  _timeout;
    IMTimingCollection * _timingCollection;
}

@property (nonatomic, retain) NSArray *abortedTimers;
@property (nonatomic, retain) NSMutableArray *runTimers;
@property (nonatomic, retain) NSMutableSet *runningTimers;
@property (nonatomic) double timeout;
@property (nonatomic, retain) IMTimingCollection *timingCollection;

- (void).cxx_destruct;
- (void)abortCurrentTimers;
- (id)abortedTimers;
- (void)logResults:(bool)arg1;
- (id)runTimers;
- (id)runningTimers;
- (void)setAbortedTimers:(id)arg1;
- (void)setRunTimers:(id)arg1;
- (void)setRunningTimers:(id)arg1;
- (void)setTimeout:(double)arg1;
- (void)setTimingCollection:(id)arg1;
- (void)startMainTimerWithExpectedTimeoutInterval:(double)arg1;
- (void)startTimingForKey:(id)arg1;
- (void)startTimingForKey:(id)arg1 iteration:(long long)arg2;
- (void)stopMainTimerAndLogAfterFailure;
- (void)stopMainTimerAndLogAfterSuccess;
- (void)stopProfilingAfterIndexersBailed;
- (void)stopTimingForKey:(id)arg1;
- (void)stopTimingForKey:(id)arg1 iteration:(long long)arg2;
- (double)timeout;
- (id)timingCollection;

@end

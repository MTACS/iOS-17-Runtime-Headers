
@interface BLSHWatchdogAbortParameters : NSObject {
    <BLSHWatchdogAbortContext> * _abortContext;
    <BLSHWatchdogDelegate> * _delegate;
    NSString * _explanation;
    bool  _hasSleepBeenRequested;
    bool  _isPotentialHang;
    bool  _sleepImminent;
    bool  _sleepImminentSinceScheduled;
    double  _timeInSleepImminent;
}

@property (nonatomic, retain) <BLSHWatchdogAbortContext> *abortContext;
@property (nonatomic) <BLSHWatchdogDelegate> *delegate;
@property (nonatomic, copy) NSString *explanation;
@property (nonatomic) bool hasSleepBeenRequested;
@property (nonatomic) bool isPotentialHang;
@property (nonatomic) bool sleepImminent;
@property (nonatomic) bool sleepImminentSinceScheduled;
@property (nonatomic) double timeInSleepImminent;

- (void).cxx_destruct;
- (id)abortContext;
- (id)delegate;
- (id)explanation;
- (bool)hasSleepBeenRequested;
- (id)initWithDelegate:(id)arg1 abortContext:(id)arg2 isPotentialHang:(bool)arg3 hasSleepBeenRequested:(bool)arg4 sleepImminent:(bool)arg5 sleepImminentSinceScheduled:(bool)arg6 timeInSleepImminent:(double)arg7 explanation:(id)arg8;
- (bool)isPotentialHang;
- (void)setAbortContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExplanation:(id)arg1;
- (void)setHasSleepBeenRequested:(bool)arg1;
- (void)setIsPotentialHang:(bool)arg1;
- (void)setSleepImminent:(bool)arg1;
- (void)setSleepImminentSinceScheduled:(bool)arg1;
- (void)setTimeInSleepImminent:(double)arg1;
- (bool)sleepImminent;
- (bool)sleepImminentSinceScheduled;
- (double)timeInSleepImminent;

@end

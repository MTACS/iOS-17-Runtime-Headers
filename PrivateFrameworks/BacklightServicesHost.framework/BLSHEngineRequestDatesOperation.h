
@interface BLSHEngineRequestDatesOperation : NSObject <BSInvalidatable> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    double  _lock_averageInterval;
    NSDate * _lock_beginDate;
    double  _lock_beginTime;
    bool  _lock_begun;
    bool  _lock_complete;
    <BLSHEngineRequestDatesOperationDelegate> * _lock_delegate;
    bool  _lock_didReset;
    unsigned int  _lock_environmentCount;
    NSArray * _lock_environmentIdentifiers;
    BLSAssertion * _lock_flipbookPowerSavingAssertion;
    bool  _lock_invalidated;
    double  _lock_longestInterval;
    NSMutableSet * _lock_pendingEnvironments;
    double  _lock_shortestInterval;
    bool  _lock_timedOut;
    <BSTimerScheduleQuerying><BSCancellable><BSInvalidatable> * _lock_timeoutTimer;
    <BLSHOSTimerProviding> * _osTimerProvider;
    NSDateInterval * _requestInterval;
}

@property (nonatomic, readonly) double averageInterval;
@property (nonatomic, readonly) NSDate *beginDate;
@property (nonatomic, readonly) double beginTimestamp;
@property (getter=isComplete, nonatomic, readonly) bool complete;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didReset;
@property (nonatomic, readonly) unsigned int environmentCount;
@property (nonatomic, readonly) NSArray *environmentIdentifiers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double longestInterval;
@property (nonatomic, readonly) NSDateInterval *requestInterval;
@property (nonatomic, readonly) double shortestInterval;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)averageInterval;
- (id)beginDate;
- (void)beginOperationWithIntervals:(id)arg1 shouldReset:(bool)arg2;
- (double)beginTimestamp;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (bool)didReset;
- (unsigned int)environmentCount;
- (id)environmentIdentifiers;
- (id)initWithRequestInterval:(id)arg1 delegate:(id)arg2 osTimerProvider:(id)arg3;
- (void)invalidate;
- (bool)isComplete;
- (double)longestInterval;
- (id)requestInterval;
- (double)shortestInterval;
- (id)telemetryDataWithEndTime:(double)arg1;

@end

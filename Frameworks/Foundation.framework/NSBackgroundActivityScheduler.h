
@interface NSBackgroundActivityScheduler : NSObject {
    id /* block */  _activity;
    NSObject<OS_xpc_object> * _additionalProperties;
    bool  _appRefresh;
    id /* block */  _checkInHandler;
    NSObject<OS_xpc_object> * _currentActivity;
    double  _delay;
    long long  _flags;
    NSString * _identifier;
    double  _interval;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _invalidateLock;
    bool  _preregistered;
    long long  _qualityOfService;
    bool  _repeats;
    double  _tolerance;
}

@property (getter=_isAppRefresh) bool _appRefresh;
@property (copy) id /* block */ checkInHandler;
@property double delay;
@property (readonly, copy) NSString *identifier;
@property double interval;
@property (getter=isPreregistered) bool preregistered;
@property long long qualityOfService;
@property bool repeats;
@property (readonly) bool shouldDefer;
@property double tolerance;

- (bool)_isAppRefresh;
- (void)_setAdditionalXPCActivityProperties:(id)arg1;
- (void)_updateCriteria:(id)arg1;
- (void)_updateCriteriaForCompletedActivity:(id)arg1;
- (id /* block */)checkInHandler;
- (id)currentActivity;
- (void)dealloc;
- (double)delay;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (double)interval;
- (void)invalidate;
- (bool)isPreregistered;
- (long long)qualityOfService;
- (bool)repeats;
- (void)scheduleWithBlock:(id /* block */)arg1;
- (void)setCheckInHandler:(id /* block */)arg1;
- (void)setCurrentActivity:(id)arg1;
- (void)setDelay:(double)arg1;
- (void)setInterval:(double)arg1;
- (void)setPreregistered:(bool)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setRepeats:(bool)arg1;
- (void)setTolerance:(double)arg1;
- (void)set_appRefresh:(bool)arg1;
- (bool)shouldDefer;
- (double)tolerance;

@end

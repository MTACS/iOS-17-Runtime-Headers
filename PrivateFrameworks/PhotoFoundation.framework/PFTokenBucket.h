
@interface PFTokenBucket : NSObject <PFStateCaptureProvider> {
    NSDecimalNumber * _capacity;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSDecimalNumber * _lock_availableTokens;
    unsigned long long  _lock_lastRefillMsecs;
    NSObject<OS_os_log> * _log;
    NSString * _name;
    NSDecimalNumber * _refillRatePerMsec;
    PFStateCaptureHandler * _stateHandler;
    <PFTimeService> * _timeService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 capacity:(long long)arg2 decimalRefillRatePerMsec:(id)arg3 timeService:(id)arg4;
- (id)initWithName:(id)arg1 capacity:(long long)arg2 refillPeriod:(long long)arg3;
- (id)initWithName:(id)arg1 capacity:(long long)arg2 refillPeriod:(long long)arg3 timeService:(id)arg4;
- (id)initWithName:(id)arg1 capacity:(long long)arg2 refillRate:(long long)arg3;
- (id)initWithName:(id)arg1 capacity:(long long)arg2 refillRate:(long long)arg3 timeService:(id)arg4;
- (bool)removeToken;
- (id)stateCaptureDictionary;

@end

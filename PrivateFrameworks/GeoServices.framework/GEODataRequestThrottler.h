
@interface GEODataRequestThrottler : NSObject <GEOConfigChangeListenerDelegate> {
    int  _defaultChangedNotification;
    NSDictionary * _defaultThrottlePolicy;
    NSDictionary * _globalThrottlePolicy;
    geo_isolater * _isolation;
    id  _networkChangedNotification;
    unsigned char  _throttleEventLogLevel;
    bool  _throttlePoliciesCached;
    NSMutableDictionary * _throttlers;
    NSObject<OS_dispatch_source> * _updateStateTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedThrottler;

- (void).cxx_destruct;
- (id)_init;
- (void)_pruneThrottlers;
- (void)_reset;
- (void)_updateSavedState:(id)arg1;
- (void)_withThrottlersForKey:(struct GEOThrottleKey { unsigned int x1; })arg1 auditToken:(id)arg2 do:(id /* block */)arg3;
- (bool)allowRequest:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1 forClient:(id)arg2 throttlerToken:(id*)arg3 error:(id*)arg4;
- (void)dealloc;
- (id)description;
- (void)getInfoForRequest:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1 client:(id)arg2 timeUntilNextReset:(double*)arg3 availableRequestCount:(unsigned int*)arg4;
- (id)init;
- (void)pruneThrottlers;
- (void)reset;
- (id)throttlerForKeyPath:(id)arg1;
- (void)valueChangedForGEOConfigKey:(struct { unsigned int x1; void *x2; })arg1;

@end

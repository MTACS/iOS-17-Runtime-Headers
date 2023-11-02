
@interface CSCarKitUtils : NSObject {
    NSDictionary * _carPlayCapabilitiesDict;
    NSObject<OS_dispatch_queue> * _queue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _recacheCarCapabilitiesLock;
}

@property (nonatomic, readonly) NSDictionary *carPlayCapabilitiesDict;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_fetchCarCapabilitiesDict;
- (id)_getAndPotentiallyCacheCarPlayCapabilitiesDict;
- (bool)_isValidLatencyCorrectionValue:(id)arg1;
- (id)_latencyCorrectionSecondsForHeadUnit;
- (void)_recacheCarPlayCapabilitiesWithCompletion:(id /* block */)arg1;
- (void)_startObservingCarCapabilitiesNotfication:(const struct __CFString { }*)arg1;
- (id)_userInfoValueForKey:(id)arg1;
- (id)carPlayCapabilitiesDict;
- (void)dealloc;
- (void)fetchCarCapabilitiesInBackgroundWithCompletion:(id /* block */)arg1;
- (void)handleCarCapabilitiesUpdatedWithCompletion:(id /* block */)arg1;
- (void)handleHeadUnitConnectedWithAsyncCompletion:(id /* block */)arg1;
- (id)init;
- (void)invalidateCachedCarPlayCapabilities;
- (bool)isCarPlayConnected;
- (bool)isFlexibleFollowupDisabledForConnectedVehicle;
- (id)potentiallyAddHWLatencyToOption:(id)arg1 streamHandle:(unsigned long long)arg2 voiceController:(id)arg3;

@end

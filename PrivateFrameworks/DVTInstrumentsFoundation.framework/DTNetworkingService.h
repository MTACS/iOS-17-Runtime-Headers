
@interface DTNetworkingService : DTXService <DTNetworkingServiceAuthorizedAPI> {
    NSObject<OS_dispatch_source> * _dispatchTimer;
    int  _filteredToPid;
    unsigned long long  _hiddenInterfaces;
    long long  _interval;
    bool  _isAppleInternal;
    bool  _isDisconnected;
    struct __NStatManager { } * _netstatMan;
    unsigned long long  _seenInterfaces;
    struct DTNStatSourceMap { 
        struct __CFDictionary {} *_container; 
        long long _nextSerialNumber; 
    }  _sources;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)registerCapabilities:(id)arg1;
+ (id)serviceName;

- (void).cxx_destruct;
- (id)initWithChannel:(id)arg1;
- (void)messageReceived:(id)arg1;
- (void)setTargetPID:(id)arg1;
- (void)startMonitoring;
- (void)stopMonitoring;

@end

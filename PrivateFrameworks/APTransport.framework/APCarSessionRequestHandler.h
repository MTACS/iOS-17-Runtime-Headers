
@interface APCarSessionRequestHandler : NSObject <CARSessionRequestHandling> {
    CARSessionRequestAgent * _agent;
    struct __CFSet { } * _carPlayHelpers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_startAdvertisingCarPlayControlForUSB;
- (void)_startAdvertisingCarPlayControlForWiFiUUID:(id)arg1;
- (void)addCarPlayHelper:(struct OpaqueAPCarPlayHelperHelper { }*)arg1;
- (void)cancelRequests;
- (void)checkCarPlayControlAdvertisingForUSB;
- (void)checkCarPlayControlAdvertisingForWiFiUUID:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)prepareForRemovingWiFiUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)removeCarPlayHelper:(struct OpaqueAPCarPlayHelperHelper { }*)arg1;
- (void)startAdvertisingCarPlayControlForUSB;
- (void)startAdvertisingCarPlayControlForWiFiUUID:(id)arg1;
- (void)startSessionWithHost:(id)arg1 completion:(id /* block */)arg2;
- (void)stoppedSessionForHostIdentifier:(id)arg1;

@end

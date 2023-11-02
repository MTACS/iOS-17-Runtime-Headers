
@interface MRCompanionLinkClient : NSObject {
    RPCompanionLinkClient * _connection;
    NSMutableDictionary * _eventCallbacks;
    NSMutableArray * _pendingEvents;
    NSMutableSet * _pendingRegisteredEvents;
    NSMutableSet * _pendingRegisteredRequests;
    NSMutableArray * _pendingRequests;
    NSMutableSet * _registeredEvents;
    NSMutableSet * _registeredRequests;
    NSMutableDictionary * _requestCallbacks;
}

@property (nonatomic, readonly) NSArray *companionLinkDevices;
@property (nonatomic, retain) RPCompanionLinkClient *connection;
@property (nonatomic, retain) NSMutableDictionary *eventCallbacks;
@property (nonatomic, retain) NSMutableDictionary *requestCallbacks;

+ (void)rapportCompanionLinkClient:(id /* block */)arg1;
+ (id)sharedCompanionLinkClient;
+ (id)sharedIDSCompanionLinkClient;

- (void).cxx_destruct;
- (void)_enqueueEvent:(id)arg1 userInfo:(id)arg2 destination:(id)arg3 uid:(id)arg4;
- (void)_enqueueRequest:(id)arg1 userInfo:(id)arg2 destination:(id)arg3 uid:(id)arg4 date:(id)arg5 response:(id /* block */)arg6;
- (void)_handleEventID:(id)arg1 event:(id)arg2 options:(id)arg3;
- (void)_handleRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 response:(id /* block */)arg4;
- (void)_registerEvent:(id)arg1;
- (void)_registerRequest:(id)arg1;
- (id)_resolveEventID:(id)arg1;
- (void)_sendEvent:(id)arg1 userInfo:(id)arg2 destination:(id)arg3 uid:(id)arg4;
- (void)_sendRequest:(id)arg1 userInfo:(id)arg2 destination:(id)arg3 uid:(id)arg4 date:(id)arg5 response:(id /* block */)arg6;
- (id)companionLinkDevices;
- (id)connection;
- (id)deviceUIDForRapportUID:(id)arg1;
- (id)eventCallbacks;
- (id)initWithOptions:(int)arg1;
- (id)nameForUID:(id)arg1;
- (id)rapportUIDForDeviceUID:(id)arg1;
- (id)registerEvent:(id)arg1 callback:(id /* block */)arg2;
- (id)registerRequest:(id)arg1 callback:(id /* block */)arg2;
- (void)removeCallback:(id)arg1;
- (id)requestCallbacks;
- (void)sendEvent:(id)arg1 destination:(id)arg2 userInfo:(id)arg3;
- (void)sendEvent:(id)arg1 toDevicesOfHomeUser:(id)arg2 userInfo:(id)arg3;
- (void)sendEventToCompanion:(id)arg1 userInfo:(id)arg2;
- (void)sendEventToHome:(id)arg1 userInfo:(id)arg2;
- (void)sendRequest:(id)arg1 destination:(id)arg2 userInfo:(id)arg3 timeout:(double)arg4 response:(id /* block */)arg5;
- (void)setConnection:(id)arg1;
- (void)setEventCallbacks:(id)arg1;
- (void)setRequestCallbacks:(id)arg1;

@end

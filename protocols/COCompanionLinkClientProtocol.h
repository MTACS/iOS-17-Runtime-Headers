
@protocol COCompanionLinkClientProtocol <NSObject>

@required

- (void)activateWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSArray *)activeDevices;
- (unsigned long long)controlFlags;
- (void)deregisterEventID:(NSString *)arg1;
- (void)deregisterRequestID:(NSString *)arg1;
- (RPCompanionLinkDevice *)destinationDevice;
- (id /* block */)deviceChangedHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, RPCompanionLinkDevice *, unsigned int, void*, id, SEL
- (id /* block */)deviceFoundHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, RPCompanionLinkDevice *, void*, id, SEL
- (id /* block */)deviceLostHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, RPCompanionLinkDevice *, void*, id, SEL
- (id /* block */)disconnectHandler:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (NSObject<OS_dispatch_queue> *)dispatchQueue;
- (unsigned long long)errorFlags;
- (id /* block */)errorFlagsChangedHandler:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (id /* block */)eventIDRegistrationCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSString *, void*, id, SEL
- (id /* block */)interruptionHandler:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (void)invalidate;
- (id /* block */)invalidationHandler:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (RPCompanionLinkDevice *)localDevice;
- (id /* block */)localDeviceUpdatedHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, RPCompanionLinkDevice *, void*, id, SEL
- (void)registerEventID:(void *)arg1 options:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSDictionary *, void*
- (void)registerRequestID:(void *)arg1 options:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 17: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSDictionary *, id /* block */, void*, void, id /* block */, NSDictionary *, NSDictionary *, NSError *, void*, void*
- (id /* block */)requestIDRegistrationCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSString *, void*, id, SEL
- (void)sendEventID:(void *)arg1 event:(void *)arg2 options:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)sendRequestID:(void *)arg1 request:(void *)arg2 options:(void *)arg3 responseHandler:(void *)arg4; // needs 4 arg types, found 11: NSString *, NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSDictionary *, NSError *, void*
- (void)setControlFlags:(unsigned long long)arg1;
- (void)setDeviceChangedHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RPCompanionLinkDevice *, unsigned int, void*
- (void)setDeviceFoundHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RPCompanionLinkDevice *, void*
- (void)setDeviceLostHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RPCompanionLinkDevice *, void*
- (void)setDisconnectHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setDispatchQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)setErrorFlagsChangedHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setEventIDRegistrationCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)setInterruptionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setInvalidationHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setLocalDeviceUpdatedHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RPCompanionLinkDevice *, void*
- (void)setRequestIDRegistrationCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)setStateUpdatedHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (id /* block */)stateUpdatedHandler:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (bool)usingOnDemandConnection;

@end

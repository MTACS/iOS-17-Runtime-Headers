
@protocol DDUIEndpointPairingTransport <NSObject>

@required

- (void)activateForDeviceTypes:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSArray *)availableDevices;
- (id /* block */)availableDevicesChangedHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSArray *, void*, id, SEL
- (void)createListenerMappingForDevice:(void *)arg1 forServiceIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: <DDUIDevice> *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, void*
- (void)invalidate;
- (<DDUIEndpointPairingTransportSession> *)sessionForDevice:(id <DDUIDevice>)arg1 bundleID:(NSString *)arg2 serviceIdentifier:(NSString *)arg3 error:(id*)arg4;
- (void)setAvailableDevicesChangedHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)setupListeningForSessionsWithHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <DDUIEndpointPairingTransportSession> *, NSDictionary *, unsigned long long, void*
- (void)shouldReauthenticateDevice:(void *)arg1 forServiceIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: <DDUIDevice> *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSUUID *, void*

@end

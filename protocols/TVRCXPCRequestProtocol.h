
@protocol TVRCXPCRequestProtocol <NSObject>

@required

- (void)beginDeviceQuery;
- (void)cancelAuthChallengeForDeviceWithIdentifier:(NSString *)arg1;
- (void)closeConnectionToDeviceWithIdentifier:(NSString *)arg1 withType:(unsigned long long)arg2;
- (void)enableFindingSession:(bool)arg1 forDeviceIdentifier:(NSString *)arg2;
- (void)enableTVRemoteOnLockscreen:(bool)arg1 forDeviceIdentifier:(NSString *)arg2;
- (void)endDeviceQuery;
- (void)fetchActiveMREndpointUIDWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)fulfillAuthChallengeForDeviceWithIdentifier:(NSString *)arg1 withLocallyEnteredCode:(NSString *)arg2;
- (void)getConnectionStatusToDeviceWithIdentifier:(void *)arg1 response:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)getSuggestedDevicesWithResponse:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)launchViewServiceForDeviceWithIdentifier:(NSString *)arg1;
- (void)openConnectionToDeviceWithIdentifier:(NSString *)arg1 connectionContext:(long long)arg2;
- (void)sendButtonEvent:(TVRCButtonEvent *)arg1 toDeviceWithIdentifier:(NSString *)arg2;
- (void)sendEvent:(void *)arg1 toDeviceWithIdentifier:(void *)arg2 options:(void *)arg3 response:(void *)arg4; // needs 4 arg types, found 11: NSString *, NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSDictionary *, NSError *, void*
- (void)sendGameControllerEvent:(TVRCGameControllerEvent *)arg1 toDeviceWithIdentifier:(NSString *)arg2;
- (void)sendInputReturnKeyToDeviceWithIdentifier:(NSString *)arg1;
- (void)sendInputText:(NSString *)arg1 toDeviceWithIdentifier:(NSString *)arg2;
- (void)sendInputTextPayload:(RTIDataPayload *)arg1 toDeviceWithIdentifier:(NSString *)arg2;
- (void)sendTouchEvent:(TVRCTouchEvent *)arg1 toDeviceWithIdentifier:(NSString *)arg2;

@end

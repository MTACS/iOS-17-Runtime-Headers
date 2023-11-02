
@protocol PKVoIPXPCClient

@required

- (void)voipPayloadReceived:(void *)arg1 mustPostCall:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 7: NSDictionary *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)voipRegistrationSucceededWithDeviceToken:(NSData *)arg1;

@optional

- (void)voipRegistrationFailed;

@end


@protocol PKComplicationXPCClient

@required

- (void)complicationPayloadReceived:(NSDictionary *)arg1;
- (void)complicationRegistrationSucceededWithDeviceToken:(NSData *)arg1;

@optional

- (void)complicationRegistrationFailed;

@end

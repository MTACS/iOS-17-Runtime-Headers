
@protocol PKFileProviderXPCClient

@required

- (void)fileProviderPayloadReceived:(NSDictionary *)arg1;
- (void)fileProviderRegistrationSucceededWithDeviceToken:(NSData *)arg1;

@optional

- (void)fileProviderRegistrationFailed;

@end

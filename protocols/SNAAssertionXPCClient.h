
@protocol SNAAssertionXPCClient

@required

- (oneway void)didConnect;
- (oneway void)didInvalidate:(NSData *)arg1;

@end


@protocol DNDRemoteServiceClientModeAssertionProtocol <NSObject>

@required

- (oneway void)deliverActiveModeAssertionUpdate:(DNDModeAssertion *)arg1 invalidation:(DNDModeAssertionInvalidation *)arg2 clientIdentifiers:(NSArray<__NSString__> *)arg3;

@end

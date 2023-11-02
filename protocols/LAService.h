
@protocol LAService <NSObject>

@required

- (NSXPCListenerEndpoint *)endpoint;
- (NSString *)serviceID;

@end

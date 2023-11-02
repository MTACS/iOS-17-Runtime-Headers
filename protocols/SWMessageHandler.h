
@protocol SWMessageHandler <NSObject>

@required

- (void)didReceiveMessage:(id <SWMessage>)arg1 securityOrigin:(id <SWMessageSecurityOrigin>)arg2;

@end

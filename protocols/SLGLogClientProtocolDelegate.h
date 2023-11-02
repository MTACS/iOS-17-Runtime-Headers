
@protocol SLGLogClientProtocolDelegate <NSObject>

@required

- (void)client:(id <SLGLogClientProtocol>)arg1 didReceiveInitialLogMessageFromDomain:(NSString *)arg2;
- (void)clientDidReceiveServerReset:(id <SLGLogClientProtocol>)arg1;

@end

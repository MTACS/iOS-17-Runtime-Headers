
@protocol BDSServiceProxyConnectionDelegate <BDSClientSideProtocol>

@required

- (void)serviceConnectionDidResume;
- (void)serviceDidRestart;

@end


@protocol SCLSchoolModeClientProxyDelegate <NSObject>

@required

- (void)clientProxy:(SCLSchoolModeClientProxy *)arg1 didConnectWithPairingID:(NSUUID *)arg2;
- (void)clientProxyDidInvalidate:(SCLSchoolModeClientProxy *)arg1;

@end

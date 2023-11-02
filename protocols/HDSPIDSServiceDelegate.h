
@protocol HDSPIDSServiceDelegate <NSObject>

@required

- (void)service:(id <HDSPIDSService>)arg1 didReceiveMessage:(id <HDSPIDSMessage>)arg2;

@end

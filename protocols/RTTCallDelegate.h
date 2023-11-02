
@protocol RTTCallDelegate <NSObject>

@required

- (void)ttyCall:(RTTCall *)arg1 didReceiveString:(NSString *)arg2 forUtterance:(NSString *)arg3;
- (void)ttyCall:(RTTCall *)arg1 didSendRemoteString:(NSString *)arg2 forUtterance:(NSString *)arg3;
- (void)ttyCall:(RTTCall *)arg1 setVisible:(bool)arg2 serviceUpdate:(NSString *)arg3;

@end

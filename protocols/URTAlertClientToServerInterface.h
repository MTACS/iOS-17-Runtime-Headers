
@protocol URTAlertClientToServerInterface <NSObject>

@required

- (oneway void)dismissAlert:(URTAlert *)arg1;
- (oneway void)presentAlert:(URTAlert *)arg1 preferringPresentationStyle:(NSNumber *)arg2;

@end

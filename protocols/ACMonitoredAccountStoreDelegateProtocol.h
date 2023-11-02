
@protocol ACMonitoredAccountStoreDelegateProtocol <NSObject>

@optional

- (void)accountCredentialChanged:(ACAccount *)arg1;
- (void)accountWasAdded:(ACAccount *)arg1;
- (void)accountWasModified:(ACAccount *)arg1;
- (void)accountWasRemoved:(ACAccount *)arg1;

@end

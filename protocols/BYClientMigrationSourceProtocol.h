
@protocol BYClientMigrationSourceProtocol <NSObject>

@required

- (void)didChangeConnectionInformation:(MBDeviceTransferConnectionInfo *)arg1;
- (void)didFinishWithError:(NSError *)arg1;
- (void)didUpdateProgress:(MBDeviceTransferProgress *)arg1;

@end

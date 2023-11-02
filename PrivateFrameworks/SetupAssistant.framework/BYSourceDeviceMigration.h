
@interface BYSourceDeviceMigration : BYDeviceMigrationManager

+ (id)createDeviceTransferTask:(id)arg1;

- (void)cancelDeviceTransferTask;
- (bool)requiresProcessAssertion;
- (id)sourceDeviceTransferTask;
- (void)startDeviceTransferTask;
- (void)updateFileTransferSession:(id)arg1;

@end

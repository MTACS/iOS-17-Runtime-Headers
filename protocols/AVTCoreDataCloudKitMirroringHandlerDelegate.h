
@protocol AVTCoreDataCloudKitMirroringHandlerDelegate

@required

- (void)mirroringHandler:(id <AVTCoreDataCloudKitMirroringHandler>)arg1 didResetSyncWithReason:(unsigned long long)arg2;
- (void)mirroringHandler:(id <AVTCoreDataCloudKitMirroringHandler>)arg1 willResetSyncWithReason:(unsigned long long)arg2;

@end

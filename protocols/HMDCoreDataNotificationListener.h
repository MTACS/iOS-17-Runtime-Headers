
@protocol HMDCoreDataNotificationListener <NSObject>

@optional

- (void)coreData:(HMDCoreData *)arg1 cloudKitExportFinishedForStoreWithIdentifier:(NSString *)arg2 duration:(double)arg3 error:(NSError *)arg4;
- (void)coreData:(HMDCoreData *)arg1 cloudKitExportStartedForStoreWithIdentifier:(NSString *)arg2;
- (void)coreData:(HMDCoreData *)arg1 cloudKitImportFinishedForStoreWithIdentifier:(NSString *)arg2 duration:(double)arg3 error:(NSError *)arg4;
- (void)coreData:(HMDCoreData *)arg1 cloudKitImportStartedForStoreWithIdentifier:(NSString *)arg2;
- (void)coreData:(HMDCoreData *)arg1 persistentStoreWithIdentifierDidChange:(NSString *)arg2;

@end

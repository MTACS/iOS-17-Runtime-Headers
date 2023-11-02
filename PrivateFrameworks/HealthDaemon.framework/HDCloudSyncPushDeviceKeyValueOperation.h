
@interface HDCloudSyncPushDeviceKeyValueOperation : HDCloudSyncOperation {
    HDCloudSyncCachedZone * _contextSyncZone;
    HDCloudSyncDeviceContextRecord * _recordWithCurrentIdentity;
    NSMutableArray * _recordsToBeDeleted;
    NSMutableArray * _recordsToBeSaved;
}

- (void).cxx_destruct;
- (void)main;

@end

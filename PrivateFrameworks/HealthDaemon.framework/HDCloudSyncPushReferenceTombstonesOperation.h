
@interface HDCloudSyncPushReferenceTombstonesOperation : HDCloudSyncOperation {
    HDCloudSyncCachedZone * _attachmentZone;
    NSMutableSet * _attachmentsRecordsToDelete;
    NSMutableSet * _referenceRecordsToDelete;
    NSMutableSet * _tombstoneRecordsToPush;
    NSMutableArray * _unsynchronizedTombstones;
}

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (void)main;

@end

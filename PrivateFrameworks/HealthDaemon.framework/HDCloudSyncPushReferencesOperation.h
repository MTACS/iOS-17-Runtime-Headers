
@interface HDCloudSyncPushReferencesOperation : HDCloudSyncOperation {
    NSMutableSet * _attachmentRecordsToPush;
    HDCloudSyncCachedZone * _attachmentZone;
    NSMutableArray * _referencesToPush;
    NSMutableArray * _unsynchronizedReferences;
}

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (void)main;

@end


@interface HDCloudSyncPullReferencesOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    NSMutableDictionary * _attachmentRecordsToFetch;
    HDCloudSyncCachedZone * _attachmentZone;
    long long  _epoch;
    NSMutableDictionary * _referencesToPersist;
    HDSynchronousTaskGroup * _taskGroup;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (void)main;
- (void)synchronousTaskGroup:(id)arg1 didFinishWithSuccess:(bool)arg2 errors:(id)arg3;

@end

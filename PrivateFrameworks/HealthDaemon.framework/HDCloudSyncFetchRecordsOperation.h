
@interface HDCloudSyncFetchRecordsOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    CKContainer * _container;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id /* block */  _recordHandler;
    NSArray * _recordIDs;
    HDSynchronousTaskGroup * _taskGroup;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ recordHandler;
@property (nonatomic, copy) NSArray *recordIDs;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1 container:(id)arg2 recordIDs:(id)arg3;
- (void)main;
- (id /* block */)recordHandler;
- (id)recordIDs;
- (void)setRecordHandler:(id /* block */)arg1;
- (void)setRecordIDs:(id)arg1;
- (void)synchronousTaskGroup:(id)arg1 didFinishWithSuccess:(bool)arg2 errors:(id)arg3;

@end

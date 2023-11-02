
@protocol SWDatastoreSynchronizationManager <NSObject>

@required

- (<SWDatastoreManager> *)datastoreManager;
- (<SWDatastoreManager> *)localDatastoreManager;
- (void)setDatastoreManager:(id <SWDatastoreManager>)arg1;
- (void)setLocalDatastoreManager:(id <SWDatastoreManager>)arg1;
- (void)synchronizeDatastore:(void *)arg1 from:(void *)arg2 previousDatastore:(void *)arg3 originatingSession:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 9: SWDatastore *, <SWDatastoreManager> *, SWDatastore *, <SWSession> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end

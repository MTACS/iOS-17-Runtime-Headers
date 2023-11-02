
@interface PLChangeNode : NSObject {
    PLCoreDataChangeMerger * _changeMerger;
    <PLChangePublisher> * _changePublisher;
    PLDelayedSaveActionsProcessor * _delayedSaveActionsProcessor;
    PLLibraryServicesManager * _libraryServicesManager;
    NSURL * _libraryUrl;
    unsigned char  _nodeUUID;
    NSString * _nodeUUIDShortString;
    PLUpdatedOrderKeys * _updatedOrderKeys;
}

- (void).cxx_destruct;
- (bool)_isInvalidRemoteChangeEvent:(id)arg1 reply:(id /* block */)arg2;
- (void)connectManagedObjectContext:(id)arg1;
- (void)dealloc;
- (void)disconnectManagedObjectContext:(id)arg1;
- (void)distributeRemoteContextDidSaveEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 transaction:(id)arg3;
- (id)initWithLibraryURL:(id)arg1 changeMerger:(id)arg2 changePublisher:(id)arg3 libraryServicesManager:(id)arg4;
- (void)invalidate;
- (void)publishChangesForDidSaveObjectIDsNotification:(id)arg1;
- (void)publishRemoteChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 reply:(id /* block */)arg3;

@end


@interface WBSPasswordWarningStore : NSObject {
    NSURL * _backingStoreURL;
    bool  _hasPendingChanges;
    NSMutableDictionary * _lastWarningDatesByPersistentIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::default_delete<SafariShared::SuddenTerminationDisabler>> { 
        struct __compressed_pair<SafariShared::SuddenTerminationDisabler *, std::default_delete<SafariShared::SuddenTerminationDisabler>> { 
            struct SuddenTerminationDisabler {} *__value_; 
        } __ptr_; 
    }  _suddenTerminationDisabler;
}

+ (id)sharedStore;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addPersistentIdentifier:(id)arg1 withLastWarningDate:(id)arg2;
- (id)_initWithBackingStoreURL:(id)arg1;
- (id)_initWithDefaultBackingStore;
- (void)_loadStoreIfNecessary;
- (void)_saveStoreNow;
- (void)_saveStoreSoon;
- (void)addPersistentIdentifier:(id)arg1;
- (void)clearStoreSynchronously;
- (void)getContainsPersistentIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)saveStoreSynchronously;
- (void)synchronousyClearIdentifiersAddedAfterDate:(id)arg1;

@end

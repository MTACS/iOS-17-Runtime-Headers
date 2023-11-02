
@interface PLCoreDataChangeMerger : NSObject {
    NSDictionary * _allDidSaveObjectIDsUserInfo;
    PLManagedObjectContextList * _contextsToReceiveNotifications;
    bool  _invalidated;
    bool  _isMergingCoalescedSaveNotification;
    NSObject<OS_dispatch_queue> * _mergeChangesQueue;
}

@property (nonatomic, copy) NSDictionary *allDidSaveObjectIDsUserInfo;
@property (nonatomic) bool isMergingCoalescedSaveNotification;

- (void).cxx_destruct;
- (id)allContexts;
- (id)allContextsNotIdenticalTo:(id)arg1;
- (id)allDidSaveObjectIDsUserInfo;
- (void)dealloc;
- (void)handleUnknownMergeEvent;
- (id)init;
- (void)invalidate;
- (bool)isMergingCoalescedSaveNotification;
- (void)mergeChangesFromRemoteContextSave:(id)arg1 intoAllContextsNotIdenticalTo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)mergeIntoAllContextsChangesFromRemoteContextSave:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)refreshAllObjects;
- (void)registerToReceiveCoreDataChanges:(id)arg1;
- (void)setAllDidSaveObjectIDsUserInfo:(id)arg1;
- (void)setIsMergingCoalescedSaveNotification:(bool)arg1;

@end


@interface IMBlockListController : NSObject {
    id  _cmfBlockListUpdatedObserver;
    id  _cnDatabaseChangedExternallyObserver;
    NSOrderedSet * _imBlockItemList;
}

@property (nonatomic, retain) id cmfBlockListUpdatedObserver;
@property (nonatomic, retain) id cnDatabaseChangedExternallyObserver;
@property (nonatomic, retain) NSOrderedSet *imBlockItemList;

+ (void*)_createCMFItemRefWithUnsanitizedAddress:(id)arg1;
+ (id)sharedBlockList;

- (void).cxx_destruct;
- (id)_addressForCMItemRef:(void*)arg1;
- (bool)_blockCMFItemRef:(void*)arg1;
- (void)_buildBlockList;
- (void)_unblockCMFItem:(void*)arg1;
- (bool)addressIsBlocked:(id)arg1;
- (bool)blockAddress:(id)arg1;
- (bool)blockItem:(id)arg1;
- (id)blockListItems;
- (id)cmfBlockListUpdatedObserver;
- (id)cnDatabaseChangedExternallyObserver;
- (void)dealloc;
- (id)imBlockItemList;
- (id)init;
- (bool)itemIsBlocked:(id)arg1;
- (void)listenToCNNotifications;
- (void)removeCNNotifications;
- (void)setCmfBlockListUpdatedObserver:(id)arg1;
- (void)setCnDatabaseChangedExternallyObserver:(id)arg1;
- (void)setImBlockItemList:(id)arg1;
- (void)unblockAddress:(id)arg1;
- (void)unblockItem:(id)arg1;

@end

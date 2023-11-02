
@interface BRCSyncUpOperationBuilder : NSObject {
    BRCUserDefaults * _defaults;
    NSMutableSet * _fullyChainedParentIDWhitelist;
    NSMutableSet * _halfChainedParentIDWhitelist;
    BRCLocalItem * _itemNeedingPCSChaining;
    BRCSyncUpOperation * _op;
    BRCAccountSession * _session;
}

@property (nonatomic, retain) BRCUserDefaults *defaults;
@property (nonatomic, readonly) BRCLocalItem *itemNeedingPCSChaining;
@property (nonatomic, retain) BRCSyncUpOperation *op;
@property (nonatomic, retain) BRCAccountSession *session;

- (void).cxx_destruct;
- (bool)_checkIfShouldDedicateOpToPCSChainingItem:(id)arg1;
- (float)addDeletionOfAlias:(id)arg1;
- (float)addDeletionOfDirectory:(id)arg1;
- (float)addDeletionOfDocument:(id)arg1;
- (float)addDeletionOfFinderBookmark:(id)arg1;
- (float)addDeletionOfItem:(id)arg1;
- (float)addDeletionOfRecordID:(id)arg1 ckInfo:(id)arg2;
- (float)addDeletionOfSharedTopLevelItem:(id)arg1;
- (float)addEditOfDirectory:(id)arg1;
- (float)addEditOfDocument:(id)arg1;
- (float)addEditOfFinderBookmark:(id)arg1;
- (float)addEditOfSharedTopLevelItem:(id)arg1;
- (float)addEditOfSymlink:(id)arg1;
- (float)addItem:(id)arg1;
- (bool)checkIfSyncAllowedInSharedZoneForItem:(id)arg1;
- (id)defaults;
- (float)fakeSyncForItem:(id)arg1 serverItem:(id)arg2 inZone:(id)arg3;
- (void)handleDeletionOfSharedItem:(id)arg1;
- (void)handleEditOfSharedItem:(id)arg1;
- (id)init;
- (id)itemNeedingPCSChaining;
- (id)op;
- (void)prepareAppLibraryRootSyncUpForItem:(id)arg1;
- (id)session;
- (void)setDefaults:(id)arg1;
- (void)setOp:(id)arg1;
- (void)setSession:(id)arg1;
- (unsigned char)shouldPCSChainStatusForItem:(id)arg1;

@end

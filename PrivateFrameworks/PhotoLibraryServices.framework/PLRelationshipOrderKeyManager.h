
@interface PLRelationshipOrderKeyManager : NSObject {
    bool  _conflictDetected;
    NSMutableDictionary * _enqueuedAlbumAssetsOrderValueUpdates;
    NSMutableDictionary * _enqueuedFolderAlbumsOrderValueUpdates;
    id /* block */  _generateContextBlock;
    bool  _hasStashedLocationValues;
    bool  _inWriteStashedLocationMode;
    NSMutableDictionary * _locationsCache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, readonly) bool conflictDetected;
@property (nonatomic, copy) id /* block */ generateContextBlock;
@property (nonatomic, readonly) bool hasStashedLocationValues;
@property bool inWriteStashedLocationMode;

+ (long long)compareOrderKeyObject:(id)arg1 withObject:(id)arg2;
+ (id)new;

- (void).cxx_destruct;
- (void)_getAndResetEnqueuedOrderValueUpdatesForFolders:(id*)arg1 albums:(id*)arg2 conflictDetected:(bool*)arg3;
- (id)_locked_enqueuedAlbumAssetsOrderValueUpdates;
- (id)_locked_enqueuedFolderAlbumsOrderValueUpdates;
- (id)_locked_locationsCache;
- (void)_migration_updateOrderKeysForAssetsInParentAlbum:(id)arg1 childToOrderKeyMap:(id)arg2;
- (void)_migration_updateOrderValuesForAssetsInAlbum:(id)arg1 managedObjectContext:(id)arg2;
- (id)_orderingStateForRelationship:(id)arg1 onObjectWithID:(id)arg2 invalidateCache:(bool)arg3 usingSPISafeContext:(id)arg4;
- (id)_orderingStateForRelationship:(id)arg1 onObjectWithID:(id)arg2 usingSPISafeContext:(id)arg3;
- (void)_setConflictDetected:(bool)arg1;
- (void)_stashLocationValue:(long long)arg1 forOrderedObjectWithID:(id)arg2 inSourceObjectID:(id)arg3 relationship:(id)arg4 atIndex:(unsigned long long)arg5 usingStashDictionary:(id)arg6 usingSPISafeContext:(id)arg7;
- (void)_updateOrderOfChildrenInParent:(id)arg1 usingTransientOrders:(id)arg2;
- (id)albumsAndOrderValuesForAsset:(id)arg1 inManagedObjectContext:(id)arg2;
- (bool)conflictDetected;
- (unsigned long long)findIndexForAlbumWithID:(id)arg1 newOrderValue:(long long)arg2 inFolderWithID:(id)arg3 hasOrderValueConflictWithAlbumID:(id*)arg4 inContext:(id)arg5;
- (unsigned long long)findIndexForAssetWithID:(id)arg1 newOrderValue:(long long)arg2 inAlbumWithID:(id)arg3 hasOrderValueConflictWithAssetID:(id*)arg4 inContext:(id)arg5;
- (id /* block */)generateContextBlock;
- (void)getConflictResolutionOrderValuesForRelationship:(id)arg1 onObjectWithID:(id)arg2 atIndex:(unsigned long long)arg3 intoLower:(long long*)arg4 higher:(long long*)arg5 inContext:(id)arg6;
- (bool)hasStashedLocationValues;
- (bool)inWriteStashedLocationMode;
- (id)init;
- (id)initWithGenerateContextBlock:(id /* block */)arg1;
- (void)migration_ensureValidOrderKey:(id)arg1 usingOrderValuePropertyKey:(id)arg2;
- (void)migration_fixupOrderKeys:(id)arg1 usingOrderValuePropertyKey:(id)arg2 enforceSingletonAlbumReservedKeySpace:(bool)arg3;
- (id)migration_sortedOrderKeysForAssetsInAlbum:(id)arg1 usingMap:(id)arg2;
- (void)migration_updateLegacyChildCollectionOrderKeysInFolder:(id)arg1;
- (void)migration_updateLegacyOrderValuesForAssetsInAlbums:(id)arg1 managedObjectContext:(id)arg2;
- (id)objectIDsAndOrderValuesForRelationship:(id)arg1 onObjectWithID:(id)arg2 invalidateCache:(bool)arg3 inContext:(id)arg4;
- (id)parentFolderOrderValueForAlbum:(id)arg1 inManagedObjectContext:(id)arg2;
- (void)setGenerateContextBlock:(id /* block */)arg1;
- (void)setInWriteStashedLocationMode:(bool)arg1;
- (void)stashAlbumAssetsLocationValue:(long long)arg1 forAssetWithID:(id)arg2 inAlbumWithID:(id)arg3 atIndex:(unsigned long long)arg4;
- (void)stashFolderAlbumsLocationValue:(long long)arg1 forAlbumWithID:(id)arg2 inFolderWithID:(id)arg3 atIndex:(unsigned long long)arg4;
- (void)updateAlbumAssetsUsingTransientOrdersByAlbumOID:(id)arg1 inLibrary:(id)arg2;
- (void)updateKeyAssetsForAlbums:(id)arg1 inLibrary:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)writeStashedLocationValuesInContext:(id)arg1 error:(id*)arg2;

@end

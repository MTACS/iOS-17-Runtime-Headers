
@interface FPItemManager : NSObject {
    NSMutableSet * _activeCollections;
    NSObject<OS_dispatch_queue> * _completionQueue;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSOperationQueue * _operationQueue;
}

// Image: /System/Library/Frameworks/FileProvider.framework/FileProvider

+ (void)_promoteItemToAppLibraryIfNeeded:(id)arg1;
+ (id)defaultManager;
+ (bool)isAnyDocumentRecentlyUsed:(id)arg1 excludedFileTypes:(id)arg2 allowedFileProviderIdentifiers:(id)arg3;

- (void).cxx_destruct;
- (id)__itemForURLWithBuggyNullability:(id)arg1 error:(id*)arg2;
- (void)_fetchHierarchyForItemID:(id)arg1 recursively:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_fetchHierarchyForItemID:(id)arg1 recursively:(bool)arg2 depth:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)_fetchItemForURL:(id)arg1 synchronously:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_fetchItemForURL:(id)arg1 synchronously:(bool)arg2 skipURLValidation:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)_fetchParentsForItemID:(id)arg1 recursively:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_fetchURLForItemID:(id)arg1 creatingPlaceholderIfMissing:(bool)arg2 completionHandler:(id /* block */)arg3;
- (bool)_isValidDestination:(id)arg1;
- (bool)_itemIsOfArchiveType:(id)arg1;
- (void)addOperation:(id)arg1;
- (id)appLibraryCollectionForProviderDomain:(id)arg1;
- (id)collectionForFolderItem:(id)arg1;
- (id)collectionForFolderItem:(id)arg1 fileTypes:(id)arg2;
- (id)collectionWithIdentifier:(id)arg1 domainIdentifier:(id)arg2 providerIdentifier:(id)arg3 fileTypes:(id)arg4;
- (id)collectionWithIdentifier:(id)arg1 domainIdentifier:(id)arg2 providerIdentifier:(id)arg3 sortDescriptors:(id)arg4;
- (id)collectionWithIdentifier:(id)arg1 providerIdentifier:(id)arg2 fileTypes:(id)arg3;
- (id)eligibleActionsForDroppingItems:(id)arg1 underItem:(id)arg2;
- (id)eligibleActionsForDroppingUTIs:(id)arg1 underItem:(id)arg2;
- (id)eligibleActionsForItems:(id)arg1;
- (id)eligibleActionsForItems:(id)arg1 allowCachedDomain:(bool)arg2;
- (id)eligibleActionsForItems:(id)arg1 providerDomain:(id)arg2;
- (id)evictItemAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)extendBookmarkForItem:(id)arg1 receivingBundleID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchAllParentsForItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchDefaultLocationForApplication:(id)arg1 defaultProviderDomain:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchDefaultLocationForApplicationRecord:(id)arg1 defaultProviderDomain:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchFSItemsForItemIdentifiers:(id)arg1 providerIdentifier:(id)arg2 domainIdentifier:(id)arg3 materializingIfNeeded:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)fetchIndexPropertiesForItemAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchItemForItemID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchItemForURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchOperationServiceForProviderDomainID:(id)arg1 handler:(id /* block */)arg2;
- (void)fetchParentForItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchParentsForItemID:(id)arg1 recursively:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchPathComponentsForURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchRemoteDomainForProviderDomainID:(id)arg1 handler:(id /* block */)arg2;
- (void)fetchRootItemForProvider:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchRootItemForProviderDomain:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchServicesWithName:(id)arg1 itemAtURL:(id)arg2 synchronously:(bool)arg3 handler:(id /* block */)arg4;
- (void)fetchURLForItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchURLForItem:(id)arg1 creatingPlaceholderIfMissing:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchURLForItemID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchVendorServiceForProviderDomainID:(id)arg1 handler:(id /* block */)arg2;
- (id)init;
- (bool)isItemInTrash:(id)arg1;
- (id)itemForURL:(id)arg1 error:(id*)arg2;
- (id)newCollectionForProvider:(id)arg1;
- (id)newCollectionForTag:(id)arg1;
- (id)newCollectionWithItemID:(id)arg1;
- (id)newEvictableCollection;
- (id)newFavoritesCollection;
- (id)newNonAutoEvictableCollection;
- (id)newRecentsCollection;
- (id)newSearchCollection;
- (id)newSearchTrashCollection;
- (id)newSharedItemsCollection;
- (id)newTagCollection;
- (id)newTrashCollection;
- (id)operationForAction:(id)arg1 items:(id)arg2;
- (void)recursivelyExportItem:(id)arg1 toURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)rootCollectionForProvider:(id)arg1;
- (id)rootCollectionForProvider:(id)arg1 fileTypes:(id)arg2;
- (id)rootCollectionForProviderDomain:(id)arg1;
- (void)scheduleAction:(id)arg1;
- (id)serverCollectionForFolderItem:(id)arg1;
- (id)servicesForItemAtURL:(id)arg1 error:(id*)arg2;
- (id)thumbnailsFetchOperationForItem:(id)arg1 withVersions:(id)arg2 withSize:(struct CGSize { double x1; double x2; })arg3 scale:(double)arg4;
- (id)thumbnailsFetchOperationForItems:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;
- (id)trashCollectionForProviderDomain:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore

- (void)doc_fetchRootItemForProviderDomain:(id)arg1 completionHandler:(id /* block */)arg2;

@end

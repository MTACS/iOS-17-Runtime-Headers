
@protocol BCCloudCollectionDetailManager <NSObject, BDSCloudKitSupportSignOutDissociate>

@required

- (void)collectionDetailForCollectionID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BCMutableCollectionDetail *, NSError *, void*
- (void)collectionDetailsForCollectionIDs:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, BCMutableCloudSyncVersions *, NSError *, void*
- (void)currentCollectionDetailCloudSyncVersions:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BCMutableCloudSyncVersions *, void*
- (void)deleteCollectionDetailForCollectionID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)deleteCollectionDetailForCollectionIDs:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)fetchCollectionDetailsIncludingDeleted:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, BCMutableCloudSyncVersions *, NSError *, void*
- (void)getCollectionDetailChangesSince:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 11: BCMutableCloudSyncVersions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSSet *, BCMutableCloudSyncVersions *, NSError *, bool, void*
- (void)setCollectionDetail:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: BCMutableCollectionDetail *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, NSError *, void*
- (void)setCollectionDetails:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, NSError *, void*

@end

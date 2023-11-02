
@interface FPItemCollectionItemIDBasedDiffs : FPItemCollectionDiffs {
    NSMutableArray * _deletedItemIDs;
    NSMutableDictionary * _replacedItemsByFormerID;
    NSMutableArray * _updatedItems;
}

@property (retain) NSMutableArray *deletedItemIDs;
@property (retain) NSMutableDictionary *replacedItemsByFormerID;
@property (retain) NSMutableArray *updatedItems;

- (void).cxx_destruct;
- (bool)containsChanges;
- (id)deletedItemIDs;
- (id)replacedItemsByFormerID;
- (void)setDeletedItemIDs:(id)arg1;
- (void)setReplacedItemsByFormerID:(id)arg1;
- (void)setUpdatedItems:(id)arg1;
- (id)updatedItems;

@end

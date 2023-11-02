
@interface FPStitchingManager : NSObject {
    NSMapTable * _bouncedItems;
    NSHashTable * _stitchingSessions;
}

@property (nonatomic, readonly) NSMutableArray *allDeletedIDs;
@property (nonatomic, readonly) NSDictionary *allPlaceholderItemsByParentIdentifierAndName;
@property (nonatomic, readonly) NSArray *allPlaceholderReplacementsIDs;
@property (nonatomic, readonly) NSDictionary *stitchedFieldsAndItemsByItemIDs;

+ (id)parentIdNameKeyForItem:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addBouncedItem:(id)arg1;
- (id)allDeletedIDs;
- (id)allPlaceholderItemsByParentIdentifierAndName;
- (id)allPlaceholderReplacementsIDs;
- (bool)cleanStitchedForItemID:(id)arg1 ignoreSession:(id)arg2;
- (id)init;
- (void)registerStitchingSession:(id)arg1;
- (void)removeBouncedItemsWithIDs:(id)arg1;
- (id)stitchedFieldsAndItemsByItemIDs;
- (id)stitchedItemsForParentID:(id)arg1;

@end

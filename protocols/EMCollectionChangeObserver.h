
@protocol EMCollectionChangeObserver <NSObject>

@required

- (void)collection:(EMCollection *)arg1 addedItemIDs:(NSArray *)arg2 after:(id <EMCollectionItemID>)arg3;
- (void)collection:(EMCollection *)arg1 addedItemIDs:(NSArray *)arg2 before:(id <EMCollectionItemID>)arg3;
- (void)collection:(EMCollection *)arg1 changedItemIDs:(NSArray *)arg2;
- (void)collection:(EMCollection *)arg1 deletedItemIDs:(NSArray *)arg2;
- (void)collection:(EMCollection *)arg1 movedItemIDs:(NSArray *)arg2 after:(id <EMCollectionItemID>)arg3;
- (void)collection:(EMCollection *)arg1 movedItemIDs:(NSArray *)arg2 before:(id <EMCollectionItemID>)arg3;
- (void)collection:(EMCollection *)arg1 replacedExistingItemID:(id <EMCollectionItemID>)arg2 withNewItemID:(id <EMCollectionItemID>)arg3;

@optional

- (void)collection:(EMCollection *)arg1 shouldHighlightSnippetHints:(NSDictionary *)arg2;
- (void)collectionDidFinishInitialLoad:(EMCollection *)arg1;
- (void)didFinishRecoveryForCollection:(EMCollection *)arg1;
- (void)didFinishRemoteSearchForCollection:(EMCollection *)arg1;

@end

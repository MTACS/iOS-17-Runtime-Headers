
@interface TrackedMessageListItems : NSObject {
    NSMutableDictionary * _trackedItems;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSArray *itemIDs;
@property (nonatomic, readonly) NSSet *itemIDsSet;
@property (nonatomic, readonly) NSArray *messageListItems;

- (void).cxx_destruct;
- (unsigned long long)count;
- (bool)hasMessageListItemForItemID:(id)arg1;
- (id)init;
- (id)itemIDs;
- (id)itemIDsSet;
- (id)messageListItems;
- (void)trackMessageListItemWithItemID:(id)arg1;
- (void)trackmessageListItem:(id)arg1;
- (void)untrackAllMessageListItems;
- (void)untrackMessageListItemWithItemID:(id)arg1;
- (void)untrackMessageListItemsWithItemIDs:(id)arg1;
- (void)updateMessageListItem:(id)arg1;

@end

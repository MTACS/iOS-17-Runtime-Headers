
@protocol HFItemUpdating <NSObject>

@required

- (NSSet *)childItemsForItem:(HFItem *)arg1;
- (NSArray *)displayedItemsInSectionWithIdentifier:(NSString *)arg1;
- (NAFuture *)performItemUpdateRequest:(HFItemUpdateRequest *)arg1;
- (void)setSourceItem:(HFItem *)arg1;
- (HFItem *)sourceItem;

@optional

- (NAFuture *)firstFullItemUpdateFuture;
- (bool)itemIsBeingDisplayed:(HFItem *)arg1;

@end

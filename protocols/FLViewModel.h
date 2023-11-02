
@protocol FLViewModel <NSObject>

@required

- (NSArray *)allPendingItems;
- (void)setItemChangeHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@optional

- (NSArray *)groups;
- (NSArray *)groupsForPrimaryAccount:(NSString *)arg1 secondaryAccounts:(NSArray *)arg2;
- (void)refreshItems:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)refreshItemsForItem:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: FLFollowUpItem *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end

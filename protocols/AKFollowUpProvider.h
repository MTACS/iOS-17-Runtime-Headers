
@protocol AKFollowUpProvider <NSObject>

@required

- (bool)addFollowUpItems:(NSArray *)arg1 error:(id*)arg2;
- (bool)clearNotificationsForItem:(FLFollowUpItem *)arg1 error:(id*)arg2;
- (NSArray *)pendingFollowUpItems:(id*)arg1;
- (bool)removeAllFollowUpItems:(id*)arg1;
- (bool)removeFollowUpItems:(NSArray *)arg1 error:(id*)arg2;
- (bool)removeFollowUpItemsWithIdentifiers:(NSArray *)arg1 error:(id*)arg2;

@end

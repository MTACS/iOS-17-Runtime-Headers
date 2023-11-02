
@protocol NDOFollowUpProvider <NSObject>

@required

- (bool)clearPendingFollowUpItemsWithUniqueIdentifiers:(NSArray *)arg1 error:(id*)arg2;
- (NSArray *)pendingFollowUpItems:(id*)arg1;
- (bool)postFollowUpItem:(FLFollowUpItem *)arg1 error:(id*)arg2;

@end

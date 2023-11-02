
@protocol DASearchQueryConsumer

@required

- (void)searchQuery:(DASearchQuery *)arg1 finishedWithError:(NSError *)arg2;
- (void)searchQuery:(DASearchQuery *)arg1 returnedResults:(NSArray *)arg2;

@optional

- (void)searchQuery:(DASearchQuery *)arg1 returnedTotalCount:(NSNumber *)arg2;

@end


@protocol EMMessageListQueryResultsObserver <EMQueryResultsObserver>

@required

- (void)queryMatchedOldestItemsUpdatedForMailboxesObjectIDs:(NSDictionary *)arg1;

@end

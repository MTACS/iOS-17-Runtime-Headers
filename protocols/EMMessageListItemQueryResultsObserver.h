
@protocol EMMessageListItemQueryResultsObserver <NSObject>

@required

- (void)observer:(EMObjectID *)arg1 matchedAddedObjectIDs:(NSArray *)arg2 after:(EMObjectID *)arg3 extraInfo:(NSDictionary *)arg4;
- (void)observer:(EMObjectID *)arg1 matchedAddedObjectIDs:(NSArray *)arg2 before:(EMObjectID *)arg3 extraInfo:(NSDictionary *)arg4;
- (void)observer:(EMObjectID *)arg1 matchedChangesForObjectIDs:(NSDictionary *)arg2;
- (void)observer:(EMObjectID *)arg1 matchedDeletedObjectIDs:(NSArray *)arg2;
- (void)observer:(EMObjectID *)arg1 matchedMovedObjectIDs:(NSArray *)arg2 after:(EMObjectID *)arg3;
- (void)observer:(EMObjectID *)arg1 matchedMovedObjectIDs:(NSArray *)arg2 before:(EMObjectID *)arg3;
- (void)observer:(EMObjectID *)arg1 matchedOldestItemsUpdatedForMailboxes:(NSDictionary *)arg2;
- (void)observer:(EMObjectID *)arg1 replacedExistingObjectID:(EMObjectID *)arg2 withNewObjectID:(EMMessageObjectID *)arg3;
- (void)observer:(EMObjectID *)arg1 wasUpdated:(id <EFInvocable>)arg2;
- (void)observerDidFinishInitialLoad:(EMObjectID *)arg1;
- (void)observerWillRestart:(EMObjectID *)arg1;

@optional

- (void)observerDidFinishRemoteSearch:(EMObjectID *)arg1;

@end

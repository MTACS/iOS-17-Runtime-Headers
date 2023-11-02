
@protocol EMQueryResultsObserver <EMObject>

@required

- (bool)observerContainsObjectID:(EMObjectID *)arg1;
- (void)queryAnticipatesDeletedObjectIDs:(NSArray *)arg1;
- (void)queryDidFinishInitialLoad;
- (void)queryDidFinishRemoteSearch;
- (void)queryDidStartRecovery;
- (void)queryMatchedAddedObjectIDs:(NSArray *)arg1 after:(EMObjectID *)arg2 extraInfo:(NSDictionary *)arg3;
- (void)queryMatchedAddedObjectIDs:(NSArray *)arg1 before:(EMObjectID *)arg2 extraInfo:(NSDictionary *)arg3;
- (void)queryMatchedChangesByObjectIDs:(NSDictionary *)arg1;
- (void)queryMatchedDeletedObjectIDs:(NSArray *)arg1;
- (void)queryMatchedMovedObjectIDs:(NSArray *)arg1 after:(EMObjectID *)arg2;
- (void)queryMatchedMovedObjectIDs:(NSArray *)arg1 before:(EMObjectID *)arg2;
- (void)queryReplacedObjectID:(EMObjectID *)arg1 withNewObjectID:(EMObjectID *)arg2;

@end

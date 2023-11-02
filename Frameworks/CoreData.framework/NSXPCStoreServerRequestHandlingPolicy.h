
@interface NSXPCStoreServerRequestHandlingPolicy : NSObject

+ (void)initialize;

- (id)allowableClassesForClientWithContext:(id)arg1;
- (id)processFaultForObjectWithID:(id)arg1 fromClientWithContext:(id)arg2 error:(id*)arg3;
- (id)processFaultForRelationshipWithName:(id)arg1 onObjectWithID:(id)arg2 fromClientWithContext:(id)arg3 error:(id*)arg4;
- (id)processRequest:(id)arg1 fromClientWithContext:(id)arg2 error:(id*)arg3;
- (id)restrictingPullChangeHistoryPredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2;
- (id)restrictingReadPredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2;
- (id)restrictingWritePredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2;
- (bool)shouldAcceptConnectionsFromClientWithContext:(id)arg1;
- (bool)shouldAcceptMetadataChangesFromClientWithContext:(id)arg1;

@end

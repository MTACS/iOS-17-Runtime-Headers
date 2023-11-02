
@protocol CLSEntityChangeNotifiable <CLSChangeNotifiable>

@required

- (oneway void)clientRemote_entitiesChangedAdded:(NSSet *)arg1 updated:(NSSet *)arg2 deleted:(NSSet *)arg3;
- (oneway void)clientRemote_entitiesChangedUpdatedMatchingPredicate:(NSSet *)arg1 updatedNotMatchingPredicate:(NSSet *)arg2;
- (oneway void)clientRemote_finishWithEntitiesChangedSince:(NSDate *)arg1;

@end

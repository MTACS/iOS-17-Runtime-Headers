
@protocol REMReplicaManagerProviding <NSObject>

@required

- (REMReplicaManager *)replicaManagerForAccountID:(REMObjectID *)arg1;
- (NSDictionary *)unsavedReplicaManagersForAccountIDs:(NSSet *)arg1;

@end

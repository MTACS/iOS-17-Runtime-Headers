
@interface REMSharedEntitySyncActivity_Codable : REMSharedEntitySyncActivity

+ (bool)supportsSecureCoding;

- (id)initWithAccountIdentifier:(id)arg1 activityDate:(id)arg2 activityType:(long long)arg3 authorUserRecordIDString:(id)arg4 ckParentCloudObjectEntityName:(id)arg5 ckParentCloudObjectIdentifier:(id)arg6 ckIdentifier:(id)arg7 sharedEntityName:(id)arg8 uuidForChangeTracking:(id)arg9;
- (id)initWithCoder:(id)arg1;

@end


@interface REMSharedEntitySyncActivity : NSObject <NSSecureCoding> {
    NSString * _accountIdentifier;
    NSDate * _activityDate;
    long long  _activityType;
    NSString * _authorUserRecordIDString;
    NSString * _ckIdentifier;
    NSString * _ckParentCloudObjectEntityName;
    NSString * _ckParentCloudObjectIdentifier;
    NSString * _sharedEntityName;
    NSUUID * _uuidForChangeTracking;
}

@property (nonatomic, readonly) NSString *accountIdentifier;
@property (nonatomic, readonly) NSDate *activityDate;
@property (nonatomic, readonly) long long activityType;
@property (nonatomic, readonly) NSString *authorUserRecordIDString;
@property (nonatomic, readonly) NSString *ckIdentifier;
@property (nonatomic, readonly) NSString *ckParentCloudObjectEntityName;
@property (nonatomic, readonly) NSString *ckParentCloudObjectIdentifier;
@property (nonatomic, readonly) NSString *sharedEntityName;
@property (nonatomic, readonly) NSUUID *uuidForChangeTracking;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)activityDate;
- (long long)activityType;
- (id)activityTypeDescription;
- (id)authorUserRecordIDString;
- (id)ckIdentifier;
- (id)ckParentCloudObjectEntityName;
- (id)ckParentCloudObjectIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccountIdentifier:(id)arg1 activityDate:(id)arg2 activityType:(long long)arg3 authorUserRecordIDString:(id)arg4 ckParentCloudObjectEntityName:(id)arg5 ckParentCloudObjectIdentifier:(id)arg6 ckIdentifier:(id)arg7 sharedEntityName:(id)arg8 uuidForChangeTracking:(id)arg9;
- (id)initWithCoder:(id)arg1;
- (id)sharedEntityName;
- (id)uuidForChangeTracking;

@end


@interface REMDueDateDeltaAlert : NSObject <NSCopying, NSSecureCoding, REMObjectIDProviding> {
    REMObjectID * _accountID;
    NSDate * _acknowledgedDate;
    NSDate * _creationDate;
    REMDueDateDeltaInterval * _dueDateDelta;
    NSUUID * _identifier;
    long long  _minimumSupportedAppVersion;
    REMObjectID * _reminderID;
}

@property (nonatomic, readonly) REMObjectID *accountID;
@property (nonatomic, readonly) NSDate *acknowledgedDate;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) REMDueDateDeltaInterval *dueDateDelta;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) long long minimumSupportedAppVersion;
@property (nonatomic, readonly) REMObjectID *remObjectID;
@property (nonatomic, readonly) REMObjectID *reminderID;

+ (id)cdEntityName;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountID;
- (id)acknowledgedDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)description;
- (id)dueDateDelta;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 reminderID:(id)arg2 accountID:(id)arg3 dueDateDelta:(id)arg4 creationDate:(id)arg5 acknowledgedDate:(id)arg6 minimumSupportedAppVersion:(long long)arg7;
- (bool)isContentEqual:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)minimumSupportedAppVersion;
- (id)remObjectID;
- (id)reminderID;

@end

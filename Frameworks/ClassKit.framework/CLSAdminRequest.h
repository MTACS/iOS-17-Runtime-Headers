
@interface CLSAdminRequest : CLSObject {
    long long  _approval;
    NSString * _bundleIdentifier;
    NSDate * _dateCompleted;
    NSString * _organizationID;
    NSString * _requestorID;
    NSString * _responderNote;
    long long  _status;
    long long  _type;
}

@property (nonatomic) long long approval;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSDate *dateCompleted;
@property (nonatomic, copy) NSString *organizationID;
@property (nonatomic, copy) NSString *requestorID;
@property (nonatomic, copy) NSString *responderNote;
@property (nonatomic) long long status;
@property (nonatomic) long long type;

+ (id)_propertyNames;
+ (long long)approvalFromString:(id)arg1;
+ (long long)statusFromString:(id)arg1;
+ (id)stringForApproval:(long long)arg1;
+ (id)stringForStatus:(long long)arg1;
+ (id)stringForType:(long long)arg1;
+ (bool)supportsSecureCoding;
+ (long long)typeFromString:(id)arg1;

- (void).cxx_destruct;
- (id)_init;
- (long long)approval;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateCompleted;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;
- (id)initWithType:(long long)arg1 requestorEmail:(id)arg2 organizationID:(id)arg3;
- (id)initWithType:(long long)arg1 requestorID:(id)arg2 organizationID:(id)arg3;
- (void)mergeWithObject:(id)arg1;
- (id)organizationID;
- (id)requestorID;
- (id)responderNote;
- (void)setApproval:(long long)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDateCompleted:(id)arg1;
- (void)setOrganizationID:(id)arg1;
- (void)setRequestorID:(id)arg1;
- (void)setResponderNote:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setType:(long long)arg1;
- (long long)status;
- (long long)type;

@end

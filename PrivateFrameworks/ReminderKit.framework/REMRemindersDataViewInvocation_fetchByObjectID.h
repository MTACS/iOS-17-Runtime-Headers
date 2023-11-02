
@interface REMRemindersDataViewInvocation_fetchByObjectID : REMStoreInvocation <NSSecureCoding> {
    REMReminderFetchOptions * _fetchOptions;
    NSArray * _objectIDs;
}

@property (nonatomic, readonly) REMReminderFetchOptions *fetchOptions;
@property (nonatomic, readonly) NSArray *objectIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fetchOptions;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectIDs:(id)arg1 fetchOptions:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)objectIDs;

@end

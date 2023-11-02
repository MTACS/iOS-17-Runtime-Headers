
@interface REMRemindersDataViewInvocationResult : REMStoreInvocationResult <NSSecureCoding> {
    NSArray * _accountStorages;
    NSArray * _listStorages;
    NSArray * _objectIDs;
    NSArray * _reminderStorages;
}

@property (nonatomic, readonly) NSArray *accountStorages;
@property (nonatomic, readonly) NSArray *listStorages;
@property (nonatomic, readonly) NSArray *objectIDs;
@property (nonatomic, readonly) NSArray *reminderStorages;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountStorages;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAccountStorages:(id)arg1 listStorages:(id)arg2 reminderStorages:(id)arg3 objectIDs:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)listStorages;
- (id)objectIDs;
- (id)reminderStorages;

@end

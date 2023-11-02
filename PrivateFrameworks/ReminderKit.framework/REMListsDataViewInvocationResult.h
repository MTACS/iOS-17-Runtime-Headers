
@interface REMListsDataViewInvocationResult : REMStoreInvocationResult <NSSecureCoding> {
    NSArray * _accountStorages;
    NSArray * _listStorages;
    NSArray * _objectIDs;
}

@property (nonatomic, readonly) NSArray *accountStorages;
@property (nonatomic, readonly) NSArray *listStorages;
@property (nonatomic, readonly) NSArray *objectIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountStorages;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAccountStorages:(id)arg1 listStorages:(id)arg2 objectIDs:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)listStorages;
- (id)objectIDs;

@end

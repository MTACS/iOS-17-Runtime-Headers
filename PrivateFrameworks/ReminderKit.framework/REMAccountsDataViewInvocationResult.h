
@interface REMAccountsDataViewInvocationResult : REMStoreInvocationResult <NSSecureCoding> {
    NSArray * _accountStorages;
}

@property (nonatomic, readonly) NSArray *accountStorages;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountStorages;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStorages:(id)arg1;
- (bool)isEqual:(id)arg1;

@end

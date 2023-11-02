
@interface REMAccountsDataViewInvocationREMObjectIDOnlyResult : REMStoreInvocationResult <NSSecureCoding> {
    NSArray * _accountIDs;
}

@property (nonatomic, readonly) NSArray *accountIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAccountIDs:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end

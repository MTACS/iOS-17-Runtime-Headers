
@interface REMAccountsDataViewInvocation_fetchAll : REMStoreInvocation <NSSecureCoding> {
    long long  _purpose;
}

@property (nonatomic, readonly) long long purpose;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPurpose:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (long long)purpose;

@end

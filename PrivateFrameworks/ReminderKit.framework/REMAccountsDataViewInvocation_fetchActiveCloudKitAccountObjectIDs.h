
@interface REMAccountsDataViewInvocation_fetchActiveCloudKitAccountObjectIDs : REMStoreInvocation <NSSecureCoding> {
    long long  _fetchOption;
}

@property (nonatomic, readonly) long long fetchOption;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)fetchOption;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFetchOption:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;

@end

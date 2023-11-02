
@interface REMAccountsDataViewInvocation_fetchPrimaryActiveCloudKitAccount : REMStoreInvocation <NSSecureCoding> {
    bool  _fetchREMObjectIDOnly;
}

@property (nonatomic, readonly) bool fetchREMObjectIDOnly;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)fetchREMObjectIDOnly;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFetchREMObjectIDOnly:(bool)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;

@end

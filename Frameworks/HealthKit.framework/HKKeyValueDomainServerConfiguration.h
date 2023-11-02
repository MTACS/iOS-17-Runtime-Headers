
@interface HKKeyValueDomainServerConfiguration : HKTaskConfiguration {
    long long  _category;
    NSString * _domainName;
}

@property (nonatomic, readonly) long long category;
@property (nonatomic, readonly, copy) NSString *domainName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)domainName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCategory:(long long)arg1 domainName:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end


@interface HKDeviceKeyValueStoreTaskConfiguration : HKTaskConfiguration {
    NSString * _domain;
}

@property (nonatomic, copy) NSString *domain;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)domain;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDomain:(id)arg1;

@end

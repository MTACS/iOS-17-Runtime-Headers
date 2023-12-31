
@interface HKElectrocardiogramSessionTaskConfiguration : HKTaskConfiguration <NSCopying> {
    HKElectrocardiogramSessionConfiguration * _sessionConfiguration;
}

@property (nonatomic, copy) HKElectrocardiogramSessionConfiguration *sessionConfiguration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)sessionConfiguration;
- (void)setSessionConfiguration:(id)arg1;

@end

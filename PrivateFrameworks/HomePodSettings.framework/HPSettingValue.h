
@interface HPSettingValue : NSObject <NSSecureCoding> {
    NSString * _keyPath;
}

@property (nonatomic, copy) NSString *keyPath;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyPath:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)keyPath;
- (void)setKeyPath:(id)arg1;

@end

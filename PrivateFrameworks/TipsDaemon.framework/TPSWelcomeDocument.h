
@interface TPSWelcomeDocument : TPSDocument {
    NSString * _majorVersion;
}

@property (nonatomic, copy) NSString *majorVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)majorVersion;
- (void)setMajorVersion:(id)arg1;

@end

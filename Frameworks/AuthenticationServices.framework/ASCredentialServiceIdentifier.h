
@interface ASCredentialServiceIdentifier : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 type:(long long)arg2;
- (long long)type;

@end

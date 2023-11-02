
@interface NFVASPassConfig : NSObject <NSCopying, NSSecureCoding> {
    NSString * _passIdentifier;
    long long  _vasMode;
}

@property (nonatomic, readonly, copy) NSString *passIdentifier;
@property (nonatomic, readonly) long long vasMode;

+ (id)passConfigWithMode:(long long)arg1 passIdentifier:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)passIdentifier;
- (long long)vasMode;

@end

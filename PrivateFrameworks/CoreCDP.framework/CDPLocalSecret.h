
@interface CDPLocalSecret : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _secretType;
    NSString * _validatedSecret;
}

@property (nonatomic, readonly) unsigned long long secretType;
@property (nonatomic, readonly) NSString *validatedSecret;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithValidatedSecret:(id)arg1 secretType:(unsigned long long)arg2;
- (unsigned long long)secretType;
- (id)validatedSecret;

@end

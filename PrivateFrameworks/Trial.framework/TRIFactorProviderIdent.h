
@interface TRIFactorProviderIdent : NSObject <NSCopying, NSSecureCoding> {
    unsigned char  _type;
    NSString * _value;
}

@property (nonatomic, readonly) unsigned char type;
@property (nonatomic, readonly) NSString *value;

+ (id)identWithType:(unsigned char)arg1 value:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithReplacementType:(unsigned char)arg1;
- (id)copyWithReplacementValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned char)arg1 value:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToIdent:(id)arg1;
- (unsigned char)type;
- (id)value;

@end

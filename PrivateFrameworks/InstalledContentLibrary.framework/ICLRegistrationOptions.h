
@interface ICLRegistrationOptions : NSObject <NSCopying, NSSecureCoding> {
    unsigned int  _targetUID;
}

@property (nonatomic) unsigned int targetUID;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTargetUID:(unsigned int)arg1;
- (bool)isEqual:(id)arg1;
- (void)setTargetUID:(unsigned int)arg1;
- (unsigned int)targetUID;

@end

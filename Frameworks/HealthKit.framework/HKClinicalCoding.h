
@interface HKClinicalCoding : NSObject <NSCopying, NSSecureCoding> {
    NSString * _code;
    NSString * _system;
    NSString * _version;
}

@property (nonatomic, readonly, copy) NSString *code;
@property (nonatomic, readonly, copy) NSString *system;
@property (nonatomic, readonly, copy) NSString *version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)code;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSystem:(id)arg1 version:(id)arg2 code:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)system;
- (id)version;

@end

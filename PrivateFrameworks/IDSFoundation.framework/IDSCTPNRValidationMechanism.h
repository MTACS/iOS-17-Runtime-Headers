
@interface IDSCTPNRValidationMechanism : NSObject <NSCopying> {
    NSString * _context;
    long long  _type;
}

@property (nonatomic, readonly) NSString *context;
@property (nonatomic, readonly) long long type;

+ (id)SMSLessMechanism;
+ (id)SMSMechanismWithContext:(id)arg1;

- (void).cxx_destruct;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithType:(long long)arg1 context:(id)arg2;
- (bool)isEqual:(id)arg1;
- (long long)type;

@end

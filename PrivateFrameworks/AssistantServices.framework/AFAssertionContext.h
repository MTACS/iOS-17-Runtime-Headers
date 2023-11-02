
@interface AFAssertionContext : NSObject <AFDictionaryConvertible, NSCopying, NSSecureCoding> {
    NSDate * _effectiveDate;
    double  _expirationDuration;
    NSString * _reason;
    unsigned long long  _timestamp;
    NSDictionary * _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDate *effectiveDate;
@property (nonatomic, readonly) double expirationDuration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *reason;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long timestamp;
@property (nonatomic, readonly, copy) NSDictionary *userInfo;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)buildDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)effectiveDate;
- (void)encodeWithCoder:(id)arg1;
- (double)expirationDuration;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithTimestamp:(unsigned long long)arg1 reason:(id)arg2 effectiveDate:(id)arg3 expirationDuration:(double)arg4 userInfo:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (id)reason;
- (unsigned long long)timestamp;
- (id)userInfo;

@end

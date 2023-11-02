
@interface DMFFetchSecurityInformationResultObject : CATTaskResultObject {
    NSDictionary * _errorsByPropertyKey;
    DMFSecurityInformation * _securityInformation;
    NSDictionary * _valuesByPropertyKey;
}

@property (nonatomic, readonly, copy) NSDictionary *errorsByPropertyKey;
@property (nonatomic, readonly, copy) DMFSecurityInformation *securityInformation;
@property (nonatomic, readonly, copy) NSDictionary *valuesByPropertyKey;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)errorsByPropertyKey;
- (id)initWithCoder:(id)arg1;
- (id)initWithSecurityInformation:(id)arg1;
- (id)initWithValuesByPropertyKey:(id)arg1 errorsByPropertyKey:(id)arg2;
- (id)securityInformation;
- (id)valuesByPropertyKey;

@end

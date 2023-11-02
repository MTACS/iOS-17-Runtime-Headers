
@interface CRKFetchDevicePropertiesResultObject : CATTaskResultObject {
    NSDictionary * _errorsByPropertyKey;
    NSDictionary * _valuesByPropertyKey;
}

@property (nonatomic, copy) NSDictionary *errorsByPropertyKey;
@property (nonatomic, copy) NSDictionary *valuesByPropertyKey;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)errorsByPropertyKey;
- (id)initWithCoder:(id)arg1;
- (void)setErrorsByPropertyKey:(id)arg1;
- (void)setValuesByPropertyKey:(id)arg1;
- (id)valueForPropertyKey:(id)arg1 error:(id*)arg2;
- (id)valuesByPropertyKey;

@end

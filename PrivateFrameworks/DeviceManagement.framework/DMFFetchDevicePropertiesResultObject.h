
@interface DMFFetchDevicePropertiesResultObject : CATTaskResultObject {
    NSDictionary * _errorsByPropertyKey;
    NSDictionary * _valuesByPropertyKey;
}

@property (nonatomic, readonly) DMFDevice *device;
@property (nonatomic, readonly, copy) NSDictionary *errorsByPropertyKey;
@property (nonatomic, readonly, copy) NSDictionary *valuesByPropertyKey;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (Class)classForCoder;
- (id)description;
- (id)device;
- (void)encodeWithCoder:(id)arg1;
- (id)errorsByPropertyKey;
- (id)initWithCoder:(id)arg1;
- (id)initWithValuesByPropertyKey:(id)arg1 errorsByPropertyKey:(id)arg2;
- (id)valueForPropertyKey:(id)arg1 error:(id*)arg2;
- (id)valuesByPropertyKey;

@end

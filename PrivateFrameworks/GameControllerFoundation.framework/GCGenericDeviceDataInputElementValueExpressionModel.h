
@interface GCGenericDeviceDataInputElementValueExpressionModel : GCGenericDeviceDataProcessorExpressionModel {
    NSString * _elementIdentifier;
    long long  _scaleType;
}

@property (readonly, copy) NSString *elementIdentifier;
@property (readonly) long long scaleType;

+ (id)description;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)elementIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)redactedDescription;
- (long long)scaleType;

@end

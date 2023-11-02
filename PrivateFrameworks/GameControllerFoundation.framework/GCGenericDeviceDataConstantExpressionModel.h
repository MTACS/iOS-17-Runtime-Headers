
@interface GCGenericDeviceDataConstantExpressionModel : GCGenericDeviceDataProcessorExpressionModel {
    double  _value;
}

@property (readonly) double value;

+ (id)description;
+ (bool)supportsSecureCoding;

- (id /* block */)_buildPullExpressionWithOverrideBuilder:(id /* block */)arg1 error:(out id*)arg2;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)redactedDescription;
- (double)value;

@end

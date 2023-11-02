
@interface GCGenericDeviceDataClampExpressionModel : GCGenericDeviceDataProcessorExpressionModel {
    GCGenericDeviceDataProcessorExpressionModel * _inputExpression;
    GCGenericDeviceDataProcessorExpressionModel * _maxExpression;
    GCGenericDeviceDataProcessorExpressionModel * _minExpression;
}

@property (readonly) GCGenericDeviceDataProcessorExpressionModel *inputExpression;
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *maxExpression;
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *minExpression;

+ (id)description;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id /* block */)_buildPullExpressionWithOverrideBuilder:(id /* block */)arg1 error:(out id*)arg2;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)inputExpression;
- (bool)isEqual:(id)arg1;
- (id)maxExpression;
- (id)minExpression;
- (id)redactedDescription;

@end

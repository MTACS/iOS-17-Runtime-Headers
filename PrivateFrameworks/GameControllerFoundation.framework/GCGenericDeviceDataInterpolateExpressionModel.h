
@interface GCGenericDeviceDataInterpolateExpressionModel : GCGenericDeviceDataProcessorExpressionModel {
    GCGenericDeviceDataProcessorExpressionModel * _inputExpression;
    GCGenericDeviceDataProcessorExpressionModel * _inputMaxExpression;
    GCGenericDeviceDataProcessorExpressionModel * _inputMinExpression;
    GCGenericDeviceDataProcessorExpressionModel * _outputMaxExpression;
    GCGenericDeviceDataProcessorExpressionModel * _outputMinExpression;
}

@property (readonly) GCGenericDeviceDataProcessorExpressionModel *inputExpression;
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *inputMaxExpression;
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *inputMinExpression;
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *outputMaxExpression;
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *outputMinExpression;

+ (id)description;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id /* block */)_buildPullExpressionWithOverrideBuilder:(id /* block */)arg1 error:(out id*)arg2;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)inputExpression;
- (id)inputMaxExpression;
- (id)inputMinExpression;
- (bool)isEqual:(id)arg1;
- (id)outputMaxExpression;
- (id)outputMinExpression;
- (id)redactedDescription;

@end

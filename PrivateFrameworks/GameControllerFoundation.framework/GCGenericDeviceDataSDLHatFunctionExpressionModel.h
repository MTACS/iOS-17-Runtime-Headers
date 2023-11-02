
@interface GCGenericDeviceDataSDLHatFunctionExpressionModel : GCGenericDeviceDataProcessorExpressionModel {
    GCGenericDeviceDataProcessorExpressionModel * _falseExpression;
    GCGenericDeviceDataProcessorExpressionModel * _inputExpression;
    GCGenericDeviceDataProcessorExpressionModel * _inputMaxExpression;
    GCGenericDeviceDataProcessorExpressionModel * _inputMinExpression;
    GCGenericDeviceDataProcessorExpressionModel * _maskExpression;
    GCGenericDeviceDataProcessorExpressionModel * _trueExpression;
}

@property (readonly) GCGenericDeviceDataProcessorExpressionModel *falseExpression;
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *inputExpression;
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *inputMaxExpression;
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *inputMinExpression;
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *maskExpression;
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *trueExpression;

+ (id)description;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)falseExpression;
- (id)initWithCoder:(id)arg1;
- (id)inputExpression;
- (id)inputMaxExpression;
- (id)inputMinExpression;
- (bool)isEqual:(id)arg1;
- (id)maskExpression;
- (id)redactedDescription;
- (id)trueExpression;

@end

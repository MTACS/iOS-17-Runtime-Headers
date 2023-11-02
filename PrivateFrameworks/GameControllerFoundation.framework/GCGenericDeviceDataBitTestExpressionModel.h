
@interface GCGenericDeviceDataBitTestExpressionModel : GCGenericDeviceDataProcessorExpressionModel {
    GCGenericDeviceDataProcessorExpressionModel * _falseExpression;
    GCGenericDeviceDataProcessorExpressionModel * _inputExpression;
    GCGenericDeviceDataProcessorExpressionModel * _maskExpression;
    bool  _partialMatch;
    GCGenericDeviceDataProcessorExpressionModel * _trueExpression;
}

@property (readonly) GCGenericDeviceDataProcessorExpressionModel *falseExpression;
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *inputExpression;
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *maskExpression;
@property (readonly) bool partialMatch;
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *trueExpression;

+ (id)description;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id /* block */)_buildPullExpressionWithOverrideBuilder:(id /* block */)arg1 error:(out id*)arg2;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)falseExpression;
- (id)initWithCoder:(id)arg1;
- (id)inputExpression;
- (bool)isEqual:(id)arg1;
- (id)maskExpression;
- (bool)partialMatch;
- (id)redactedDescription;
- (id)trueExpression;

@end

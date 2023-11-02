
@interface GCGenericDeviceDataMultiplyExpressionModel : GCGenericDeviceDataProcessorExpressionModel {
    GCGenericDeviceDataProcessorExpressionModel * _leftExpression;
    GCGenericDeviceDataProcessorExpressionModel * _rightExpression;
}

@property (readonly) GCGenericDeviceDataProcessorExpressionModel *leftExpression;
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *rightExpression;

+ (id)description;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id /* block */)_buildPullExpressionWithOverrideBuilder:(id /* block */)arg1 error:(out id*)arg2;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)leftExpression;
- (id)redactedDescription;
- (id)rightExpression;

@end

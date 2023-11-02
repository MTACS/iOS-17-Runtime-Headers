
@interface GCGenericDeviceDataSDLHatFunctionExpressionModelBuilder : GCGenericDeviceDataProcessorExpressionModelBuilder {
    GCGenericDeviceDataProcessorExpressionModel * _falseExpression;
    GCGenericDeviceDataProcessorExpressionModel * _inputExpression;
    GCGenericDeviceDataProcessorExpressionModel * _inputMaxExpression;
    GCGenericDeviceDataProcessorExpressionModel * _inputMinExpression;
    GCGenericDeviceDataProcessorExpressionModel * _maskExpression;
    GCGenericDeviceDataProcessorExpressionModel * _trueExpression;
}

@property (nonatomic, copy) GCGenericDeviceDataProcessorExpressionModel *falseExpression;
@property (nonatomic, copy) GCGenericDeviceDataProcessorExpressionModel *inputExpression;
@property (nonatomic, copy) GCGenericDeviceDataProcessorExpressionModel *inputMaxExpression;
@property (nonatomic, copy) GCGenericDeviceDataProcessorExpressionModel *inputMinExpression;
@property (nonatomic, copy) GCGenericDeviceDataProcessorExpressionModel *maskExpression;
@property (nonatomic, copy) GCGenericDeviceDataProcessorExpressionModel *trueExpression;

+ (Class)modelClass;

- (void).cxx_destruct;
- (id)build;
- (id)falseExpression;
- (id)initWithDictionaryRepresentation:(id)arg1 error:(out id*)arg2;
- (void)initializeWithModel:(id)arg1;
- (id)inputExpression;
- (id)inputMaxExpression;
- (id)inputMinExpression;
- (id)maskExpression;
- (void)reset;
- (void)setFalseExpression:(id)arg1;
- (void)setInputExpression:(id)arg1;
- (void)setInputMaxExpression:(id)arg1;
- (void)setInputMinExpression:(id)arg1;
- (void)setMaskExpression:(id)arg1;
- (void)setTrueExpression:(id)arg1;
- (id)trueExpression;

@end

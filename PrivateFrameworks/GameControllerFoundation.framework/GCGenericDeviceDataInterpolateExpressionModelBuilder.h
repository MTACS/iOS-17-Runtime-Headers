
@interface GCGenericDeviceDataInterpolateExpressionModelBuilder : GCGenericDeviceDataProcessorExpressionModelBuilder {
    GCGenericDeviceDataProcessorExpressionModel * _inputExpression;
    GCGenericDeviceDataProcessorExpressionModel * _inputMaxExpression;
    GCGenericDeviceDataProcessorExpressionModel * _inputMinExpression;
    GCGenericDeviceDataProcessorExpressionModel * _outputMaxExpression;
    GCGenericDeviceDataProcessorExpressionModel * _outputMinExpression;
}

@property (nonatomic, copy) GCGenericDeviceDataProcessorExpressionModel *inputExpression;
@property (nonatomic, copy) GCGenericDeviceDataProcessorExpressionModel *inputMaxExpression;
@property (nonatomic, copy) GCGenericDeviceDataProcessorExpressionModel *inputMinExpression;
@property (nonatomic, copy) GCGenericDeviceDataProcessorExpressionModel *outputMaxExpression;
@property (nonatomic, copy) GCGenericDeviceDataProcessorExpressionModel *outputMinExpression;

+ (Class)modelClass;

- (void).cxx_destruct;
- (id)build;
- (id)initWithDictionaryRepresentation:(id)arg1 error:(out id*)arg2;
- (void)initializeWithModel:(id)arg1;
- (id)inputExpression;
- (id)inputMaxExpression;
- (id)inputMinExpression;
- (id)outputMaxExpression;
- (id)outputMinExpression;
- (void)reset;
- (void)setInputExpression:(id)arg1;
- (void)setInputMaxExpression:(id)arg1;
- (void)setInputMinExpression:(id)arg1;
- (void)setOutputMaxExpression:(id)arg1;
- (void)setOutputMinExpression:(id)arg1;

@end

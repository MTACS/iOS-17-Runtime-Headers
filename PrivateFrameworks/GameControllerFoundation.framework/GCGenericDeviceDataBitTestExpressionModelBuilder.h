
@interface GCGenericDeviceDataBitTestExpressionModelBuilder : GCGenericDeviceDataProcessorExpressionModelBuilder {
    GCGenericDeviceDataProcessorExpressionModel * _falseExpression;
    GCGenericDeviceDataProcessorExpressionModel * _inputExpression;
    GCGenericDeviceDataProcessorExpressionModel * _maskExpression;
    bool  _partialMatch;
    GCGenericDeviceDataProcessorExpressionModel * _trueExpression;
}

@property (nonatomic, copy) GCGenericDeviceDataProcessorExpressionModel *falseExpression;
@property (nonatomic, copy) GCGenericDeviceDataProcessorExpressionModel *inputExpression;
@property (nonatomic, copy) GCGenericDeviceDataProcessorExpressionModel *maskExpression;
@property (nonatomic) bool partialMatch;
@property (nonatomic, copy) GCGenericDeviceDataProcessorExpressionModel *trueExpression;

+ (Class)modelClass;

- (void).cxx_destruct;
- (id)build;
- (id)falseExpression;
- (id)initWithDictionaryRepresentation:(id)arg1 error:(out id*)arg2;
- (void)initializeWithModel:(id)arg1;
- (id)inputExpression;
- (id)maskExpression;
- (bool)partialMatch;
- (void)reset;
- (void)setFalseExpression:(id)arg1;
- (void)setInputExpression:(id)arg1;
- (void)setMaskExpression:(id)arg1;
- (void)setPartialMatch:(bool)arg1;
- (void)setTrueExpression:(id)arg1;
- (id)trueExpression;

@end

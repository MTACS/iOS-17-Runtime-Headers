
@interface GCGenericDeviceDataAddExpressionModelBuilder : GCGenericDeviceDataProcessorExpressionModelBuilder {
    GCGenericDeviceDataProcessorExpressionModel * _leftExpression;
    GCGenericDeviceDataProcessorExpressionModel * _rightExpression;
}

@property (nonatomic, copy) GCGenericDeviceDataProcessorExpressionModel *leftExpression;
@property (nonatomic, copy) GCGenericDeviceDataProcessorExpressionModel *rightExpression;

+ (Class)modelClass;

- (void).cxx_destruct;
- (id)build;
- (id)initWithDictionaryRepresentation:(id)arg1 error:(out id*)arg2;
- (void)initializeWithModel:(id)arg1;
- (id)leftExpression;
- (void)reset;
- (id)rightExpression;
- (void)setLeftExpression:(id)arg1;
- (void)setRightExpression:(id)arg1;

@end

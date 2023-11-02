
@interface GCGenericDeviceRumbleOutputFieldModelBuilder : NSObject {
    GCGenericDeviceDataProcessorExpressionModel * _offsetExpression;
    GCGenericDeviceDataProcessorExpressionModel * _sizeExpression;
    GCGenericDeviceDataProcessorExpressionModel * _valueExpression;
}

@property (nonatomic, copy) GCGenericDeviceDataProcessorExpressionModel *offsetExpression;
@property (nonatomic, copy) GCGenericDeviceDataProcessorExpressionModel *sizeExpression;
@property (nonatomic, copy) GCGenericDeviceDataProcessorExpressionModel *valueExpression;

+ (Class)modelClass;

- (void).cxx_destruct;
- (id)build;
- (unsigned long long)hash;
- (id)init;
- (void)initializeWithModel:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)offsetExpression;
- (void)reset;
- (void)setOffsetExpression:(id)arg1;
- (void)setSizeExpression:(id)arg1;
- (void)setValueExpression:(id)arg1;
- (id)sizeExpression;
- (id)valueExpression;

@end

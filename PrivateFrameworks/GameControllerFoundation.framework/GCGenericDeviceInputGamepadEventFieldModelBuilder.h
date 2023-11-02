
@interface GCGenericDeviceInputGamepadEventFieldModelBuilder : NSObject {
    long long  _extendedIndex;
    GCGenericDeviceDataProcessorExpressionModel * _sourceExpression;
}

@property (nonatomic) long long extendedIndex;
@property (nonatomic, copy) GCGenericDeviceDataProcessorExpressionModel *sourceExpression;

+ (Class)modelClass;

- (void).cxx_destruct;
- (id)build;
- (long long)extendedIndex;
- (unsigned long long)hash;
- (id)init;
- (void)initializeWithModel:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)reset;
- (void)setExtendedIndex:(long long)arg1;
- (void)setSourceExpression:(id)arg1;
- (id)sourceExpression;

@end

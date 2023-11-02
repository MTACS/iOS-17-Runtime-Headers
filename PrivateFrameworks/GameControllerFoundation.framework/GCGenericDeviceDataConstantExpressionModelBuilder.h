
@interface GCGenericDeviceDataConstantExpressionModelBuilder : GCGenericDeviceDataProcessorExpressionModelBuilder {
    double  _value;
}

@property (nonatomic) double value;

+ (Class)modelClass;

- (id)build;
- (id)initWithDictionaryRepresentation:(id)arg1 error:(out id*)arg2;
- (void)initializeWithModel:(id)arg1;
- (void)reset;
- (void)setValue:(double)arg1;
- (double)value;

@end

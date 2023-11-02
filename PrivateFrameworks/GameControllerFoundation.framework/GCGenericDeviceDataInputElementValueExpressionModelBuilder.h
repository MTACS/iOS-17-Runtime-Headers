
@interface GCGenericDeviceDataInputElementValueExpressionModelBuilder : GCGenericDeviceDataProcessorExpressionModelBuilder {
    NSString * _elementIdentifier;
    long long  _scaleType;
}

@property (nonatomic, copy) NSString *elementIdentifier;
@property (nonatomic) long long scaleType;

+ (Class)modelClass;

- (void).cxx_destruct;
- (id)build;
- (id)elementIdentifier;
- (id)initWithDictionaryRepresentation:(id)arg1 error:(out id*)arg2;
- (void)initializeWithModel:(id)arg1;
- (void)reset;
- (long long)scaleType;
- (void)setElementIdentifier:(id)arg1;
- (void)setScaleType:(long long)arg1;

@end

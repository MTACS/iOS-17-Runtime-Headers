
@interface GCGenericDeviceDataInputElementAttributeExpressionModelBuilder : GCGenericDeviceDataProcessorExpressionModelBuilder {
    NSString * _attribute;
    NSString * _elementIdentifier;
}

@property (nonatomic, copy) NSString *attribute;
@property (nonatomic, copy) NSString *elementIdentifier;

+ (Class)modelClass;

- (void).cxx_destruct;
- (id)attribute;
- (id)build;
- (id)elementIdentifier;
- (id)initWithDictionaryRepresentation:(id)arg1 error:(out id*)arg2;
- (void)initializeWithModel:(id)arg1;
- (void)reset;
- (void)setAttribute:(id)arg1;
- (void)setElementIdentifier:(id)arg1;

@end

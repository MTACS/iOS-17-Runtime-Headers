
@interface GCGenericDeviceDataProcessorExpressionModelBuilder : NSObject

+ (Class)modelClass;

- (id)build;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1 error:(out id*)arg2;
- (void)initializeWithModel:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)reset;

@end

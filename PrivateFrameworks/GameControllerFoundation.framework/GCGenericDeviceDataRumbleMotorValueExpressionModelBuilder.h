
@interface GCGenericDeviceDataRumbleMotorValueExpressionModelBuilder : GCGenericDeviceDataProcessorExpressionModelBuilder {
    NSString * _motorName;
}

@property (nonatomic, copy) NSString *motorName;

+ (Class)modelClass;

- (void).cxx_destruct;
- (id)build;
- (id)initWithDictionaryRepresentation:(id)arg1 error:(out id*)arg2;
- (void)initializeWithModel:(id)arg1;
- (id)motorName;
- (void)reset;
- (void)setMotorName:(id)arg1;

@end

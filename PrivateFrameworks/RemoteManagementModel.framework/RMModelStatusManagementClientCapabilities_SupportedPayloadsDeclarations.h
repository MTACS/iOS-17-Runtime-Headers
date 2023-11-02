
@interface RMModelStatusManagementClientCapabilities_SupportedPayloadsDeclarations : RMModelPayloadBase {
    NSArray * _statusActivations;
    NSArray * _statusAssets;
    NSArray * _statusConfigurations;
    NSArray * _statusManagement;
}

@property (nonatomic, copy) NSArray *statusActivations;
@property (nonatomic, copy) NSArray *statusAssets;
@property (nonatomic, copy) NSArray *statusConfigurations;
@property (nonatomic, copy) NSArray *statusManagement;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithActivations:(id)arg1 assets:(id)arg2 configurations:(id)arg3 management:(id)arg4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)serializeWithType:(short)arg1;
- (void)setStatusActivations:(id)arg1;
- (void)setStatusAssets:(id)arg1;
- (void)setStatusConfigurations:(id)arg1;
- (void)setStatusManagement:(id)arg1;
- (id)statusActivations;
- (id)statusAssets;
- (id)statusConfigurations;
- (id)statusManagement;

@end

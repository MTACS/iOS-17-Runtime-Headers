
@interface RMModelStatusManagementDeclarations : RMModelStatusBase {
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
+ (id)buildRequiredOnlyWithActivations:(id)arg1 configurations:(id)arg2 assets:(id)arg3 management:(id)arg4;
+ (id)buildWithActivations:(id)arg1 configurations:(id)arg2 assets:(id)arg3 management:(id)arg4;
+ (bool)isArrayValue;
+ (id)statusItemType;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)serializePayloadWithType:(short)arg1;
- (void)setStatusActivations:(id)arg1;
- (void)setStatusAssets:(id)arg1;
- (void)setStatusConfigurations:(id)arg1;
- (void)setStatusManagement:(id)arg1;
- (id)statusActivations;
- (id)statusAssets;
- (id)statusConfigurations;
- (id)statusManagement;

@end


@interface RMModelStatusManagementClientCapabilities_SupportedPayloads : RMModelPayloadBase {
    RMModelStatusManagementClientCapabilities_SupportedPayloadsDeclarations * _statusDeclarations;
    NSArray * _statusStatusItems;
}

@property (nonatomic, copy) RMModelStatusManagementClientCapabilities_SupportedPayloadsDeclarations *statusDeclarations;
@property (nonatomic, copy) NSArray *statusStatusItems;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnlyWithDeclarations:(id)arg1 statusItems:(id)arg2;
+ (id)buildWithDeclarations:(id)arg1 statusItems:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)serializeWithType:(short)arg1;
- (void)setStatusDeclarations:(id)arg1;
- (void)setStatusStatusItems:(id)arg1;
- (id)statusDeclarations;
- (id)statusStatusItems;

@end

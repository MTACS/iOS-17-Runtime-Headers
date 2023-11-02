
@interface RMProtocolDeclarationItemsResponse_Declarations : RMModelPayloadBase {
    NSArray * _responseActivations;
    NSArray * _responseAssets;
    NSArray * _responseConfigurations;
    NSArray * _responseManagement;
}

@property (nonatomic, copy) NSArray *responseActivations;
@property (nonatomic, copy) NSArray *responseAssets;
@property (nonatomic, copy) NSArray *responseConfigurations;
@property (nonatomic, copy) NSArray *responseManagement;

+ (id)allowedResponseKeys;
+ (id)buildRequiredOnlyWithActivations:(id)arg1 configurations:(id)arg2 assets:(id)arg3 management:(id)arg4;
+ (id)buildWithActivations:(id)arg1 configurations:(id)arg2 assets:(id)arg3 management:(id)arg4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)responseActivations;
- (id)responseAssets;
- (id)responseConfigurations;
- (id)responseManagement;
- (id)serializeWithType:(short)arg1;
- (void)setResponseActivations:(id)arg1;
- (void)setResponseAssets:(id)arg1;
- (void)setResponseConfigurations:(id)arg1;
- (void)setResponseManagement:(id)arg1;

@end

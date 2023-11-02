
@interface RMModelDeclarationBase : RMModelPayloadBase {
    NSString * _declarationIdentifier;
    RMModelAnyPayload * _declarationPayload;
    NSString * _declarationServerToken;
    NSString * _declarationType;
}

@property (readonly, copy) NSString *declarationClassType;
@property (nonatomic, copy) NSString *declarationIdentifier;
@property (nonatomic, copy) RMModelAnyPayload *declarationPayload;
@property (nonatomic, copy) NSString *declarationServerToken;
@property (nonatomic, copy) NSString *declarationType;

+ (bool)isDeclarationTypeKnown:(id)arg1;
+ (id)load:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)declarationClassType;
- (id)declarationIdentifier;
- (id)declarationPayload;
- (id)declarationServerToken;
- (id)declarationType;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)serializePayloadWithType:(short)arg1;
- (id)serializeWithType:(short)arg1;
- (void)setDeclarationIdentifier:(id)arg1;
- (void)setDeclarationPayload:(id)arg1;
- (void)setDeclarationServerToken:(id)arg1;
- (void)setDeclarationType:(id)arg1;
- (void)updateServerToken;

@end

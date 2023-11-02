
@interface RMModelAnyDeclaration : RMModelDeclarationBase {
    NSDictionary * _payload;
}

@property (nonatomic, copy) NSDictionary *payload;

+ (id)buildWithType:(id)arg1 identifier:(id)arg2 payload:(id)arg3;
+ (id)load:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)declarationClassType;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payload;
- (id)serializePayloadWithType:(short)arg1;
- (void)setPayload:(id)arg1;

@end


@interface RMProtocolDeclarationItemsResponse : RMModelPayloadBase {
    RMProtocolDeclarationItemsResponse_Declarations * _responseDeclarations;
    NSString * _responseDeclarationsToken;
}

@property (nonatomic, copy) RMProtocolDeclarationItemsResponse_Declarations *responseDeclarations;
@property (nonatomic, copy) NSString *responseDeclarationsToken;

+ (id)requestWithDeclarations:(id)arg1 declarationsToken:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)responseDeclarations;
- (id)responseDeclarationsToken;
- (id)serializeWithType:(short)arg1;
- (void)setResponseDeclarations:(id)arg1;
- (void)setResponseDeclarationsToken:(id)arg1;

@end

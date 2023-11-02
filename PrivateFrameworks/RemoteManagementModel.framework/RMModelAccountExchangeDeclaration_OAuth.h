
@interface RMModelAccountExchangeDeclaration_OAuth : RMModelPayloadBase {
    NSNumber * _payloadEnabled;
    NSString * _payloadSignInURL;
    NSString * _payloadTokenRequestURL;
}

@property (nonatomic, copy) NSNumber *payloadEnabled;
@property (nonatomic, copy) NSString *payloadSignInURL;
@property (nonatomic, copy) NSString *payloadTokenRequestURL;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithEnabled:(id)arg1;
+ (id)buildWithEnabled:(id)arg1 signInURL:(id)arg2 tokenRequestURL:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadEnabled;
- (id)payloadSignInURL;
- (id)payloadTokenRequestURL;
- (id)serializeWithType:(short)arg1;
- (void)setPayloadEnabled:(id)arg1;
- (void)setPayloadSignInURL:(id)arg1;
- (void)setPayloadTokenRequestURL:(id)arg1;

@end

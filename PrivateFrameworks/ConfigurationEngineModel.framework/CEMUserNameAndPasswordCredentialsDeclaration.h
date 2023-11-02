
@interface CEMUserNameAndPasswordCredentialsDeclaration : CEMPayloadBase {
    NSString * _payloadPassword;
    NSString * _payloadUserName;
}

@property (nonatomic, copy) NSString *payloadPassword;
@property (nonatomic, copy) NSString *payloadUserName;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithUserName:(id)arg1 withPassword:(id)arg2;
+ (id)buildWithUserName:(id)arg1 withPassword:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadPassword;
- (id)payloadUserName;
- (id)serializePayload;
- (void)setPayloadPassword:(id)arg1;
- (void)setPayloadUserName:(id)arg1;

@end

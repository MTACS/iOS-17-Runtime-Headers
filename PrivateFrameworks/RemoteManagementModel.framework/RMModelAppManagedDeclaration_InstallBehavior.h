
@interface RMModelAppManagedDeclaration_InstallBehavior : RMModelPayloadBase {
    NSNumber * _payloadAccountPromptAllowed;
    NSString * _payloadInstall;
}

@property (nonatomic, copy) NSNumber *payloadAccountPromptAllowed;
@property (nonatomic, copy) NSString *payloadInstall;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithInstall:(id)arg1 accountPromptAllowed:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadAccountPromptAllowed;
- (id)payloadInstall;
- (id)serializeWithType:(short)arg1;
- (void)setPayloadAccountPromptAllowed:(id)arg1;
- (void)setPayloadInstall:(id)arg1;

@end


@interface CEMClassroomUnlockUserAccountCommand : CEMCommandBase <CEMRegisteredTypeProtocol> {
    NSString * _payloadUserName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadUserName;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withUserName:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withUserName:(id)arg2;
+ (id)registeredClassName;
+ (id)registeredIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)executionLevel;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (bool)mustBeSupervised;
- (id)payloadUserName;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadUserName:(id)arg1;

@end


@interface CEMApplicationInviteToProgramCommand : CEMCommandBase <CEMRegisteredTypeProtocol> {
    NSString * _payloadInvitationURL;
    NSString * _payloadProgramID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadInvitationURL;
@property (nonatomic, copy) NSString *payloadProgramID;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withProgramID:(id)arg2 withInvitationURL:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 withProgramID:(id)arg2 withInvitationURL:(id)arg3;
+ (id)registeredClassName;
+ (id)registeredIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)executionLevel;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (bool)mustBeSupervised;
- (id)payloadInvitationURL;
- (id)payloadProgramID;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadInvitationURL:(id)arg1;
- (void)setPayloadProgramID:(id)arg1;

@end

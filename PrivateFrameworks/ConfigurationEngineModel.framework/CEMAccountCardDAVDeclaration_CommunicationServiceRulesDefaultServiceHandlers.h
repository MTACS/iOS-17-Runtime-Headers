
@interface CEMAccountCardDAVDeclaration_CommunicationServiceRulesDefaultServiceHandlers : CEMPayloadBase {
    NSString * _payloadAudioCall;
}

@property (nonatomic, copy) NSString *payloadAudioCall;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithAudioCall:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadAudioCall;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAudioCall:(id)arg1;

@end

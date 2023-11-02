
@interface CEMNetworkWiFiDeclaration_QoSMarkingPolicy : CEMPayloadBase {
    NSNumber * _payloadQoSMarkingAppleAudioVideoCalls;
    NSNumber * _payloadQoSMarkingEnabled;
    NSArray * _payloadQoSMarkingWhitelistedAppIdentifiers;
}

@property (nonatomic, copy) NSNumber *payloadQoSMarkingAppleAudioVideoCalls;
@property (nonatomic, copy) NSNumber *payloadQoSMarkingEnabled;
@property (nonatomic, copy) NSArray *payloadQoSMarkingWhitelistedAppIdentifiers;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithQoSMarkingWhitelistedAppIdentifiers:(id)arg1 withQoSMarkingAppleAudioVideoCalls:(id)arg2 withQoSMarkingEnabled:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadQoSMarkingAppleAudioVideoCalls;
- (id)payloadQoSMarkingEnabled;
- (id)payloadQoSMarkingWhitelistedAppIdentifiers;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadQoSMarkingAppleAudioVideoCalls:(id)arg1;
- (void)setPayloadQoSMarkingEnabled:(id)arg1;
- (void)setPayloadQoSMarkingWhitelistedAppIdentifiers:(id)arg1;

@end

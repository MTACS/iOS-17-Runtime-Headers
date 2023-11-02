
@interface RMModelNetworkWiFiDeclaration_QoSMarkingPolicy : RMModelPayloadBase {
    NSArray * _payloadAllowListAppIdentifiers;
    NSNumber * _payloadAppleAudioVideoCalls;
    NSNumber * _payloadEnabled;
}

@property (nonatomic, copy) NSArray *payloadAllowListAppIdentifiers;
@property (nonatomic, copy) NSNumber *payloadAppleAudioVideoCalls;
@property (nonatomic, copy) NSNumber *payloadEnabled;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithAllowListAppIdentifiers:(id)arg1 appleAudioVideoCalls:(id)arg2 enabled:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadAllowListAppIdentifiers;
- (id)payloadAppleAudioVideoCalls;
- (id)payloadEnabled;
- (id)serializeWithType:(short)arg1;
- (void)setPayloadAllowListAppIdentifiers:(id)arg1;
- (void)setPayloadAppleAudioVideoCalls:(id)arg1;
- (void)setPayloadEnabled:(id)arg1;

@end

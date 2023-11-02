
@interface CEMApplicationUpdateApplicationCommand : CEMCommandBase <CEMRegisteredTypeProtocol> {
    NSString * _payloadBundleIdentifier;
    NSNumber * _payloadImmediate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadBundleIdentifier;
@property (nonatomic, copy) NSNumber *payloadImmediate;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withBundleIdentifier:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withBundleIdentifier:(id)arg2 withImmediate:(id)arg3;
+ (id)registeredClassName;
+ (id)registeredIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)executionLevel;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (bool)mustBeSupervised;
- (id)payloadBundleIdentifier;
- (id)payloadImmediate;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadBundleIdentifier:(id)arg1;
- (void)setPayloadImmediate:(id)arg1;

@end

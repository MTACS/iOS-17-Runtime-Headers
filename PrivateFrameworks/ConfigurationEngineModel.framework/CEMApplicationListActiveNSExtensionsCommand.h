
@interface CEMApplicationListActiveNSExtensionsCommand : CEMCommandBase <CEMRegisteredTypeProtocol> {
    NSArray * _payloadFilterExtensionPoints;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *payloadFilterExtensionPoints;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withFilterExtensionPoints:(id)arg2;
+ (id)registeredClassName;
+ (id)registeredIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)executionLevel;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (bool)mustBeSupervised;
- (id)payloadFilterExtensionPoints;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadFilterExtensionPoints:(id)arg1;

@end

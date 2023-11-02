
@interface CEMApplicationAppStoreDeclaration : CEMAssetBase <CEMRegisteredTypeProtocol> {
    NSString * _payloadBundleIdentifier;
    CEMAssetBaseDescriptor * _payloadDescriptor;
    NSNumber * _payloadITunesStoreID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadBundleIdentifier;
@property (nonatomic, copy) CEMAssetBaseDescriptor *payloadDescriptor;
@property (nonatomic, copy) NSNumber *payloadITunesStoreID;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withBundleIdentifier:(id)arg3 withITunesStoreID:(id)arg4;
+ (id)buildWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withBundleIdentifier:(id)arg3 withITunesStoreID:(id)arg4;
+ (id)registeredClassName;
+ (id)registeredIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadBundleIdentifier;
- (id)payloadDescriptor;
- (id)payloadITunesStoreID;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadBundleIdentifier:(id)arg1;
- (void)setPayloadDescriptor:(id)arg1;
- (void)setPayloadITunesStoreID:(id)arg1;

@end

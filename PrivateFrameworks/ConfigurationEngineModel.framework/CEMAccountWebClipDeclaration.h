
@interface CEMAccountWebClipDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadFullScreen;
    NSString * _payloadIcon;
    NSNumber * _payloadIsRemovable;
    NSString * _payloadLabel;
    NSNumber * _payloadPrecomposed;
    NSString * _payloadURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadFullScreen;
@property (nonatomic, copy) NSString *payloadIcon;
@property (nonatomic, copy) NSNumber *payloadIsRemovable;
@property (nonatomic, copy) NSString *payloadLabel;
@property (nonatomic, copy) NSNumber *payloadPrecomposed;
@property (nonatomic, copy) NSString *payloadURL;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withURL:(id)arg2 withLabel:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 withPrecomposed:(id)arg2 withFullScreen:(id)arg3 withURL:(id)arg4 withIsRemovable:(id)arg5 withLabel:(id)arg6 withIcon:(id)arg7;
+ (id)profileType;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;

- (void).cxx_destruct;
- (int)activationLevel;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (bool)multipleAllowed;
- (bool)mustBeSupervised;
- (id)payloadFullScreen;
- (id)payloadIcon;
- (id)payloadIsRemovable;
- (id)payloadLabel;
- (id)payloadPrecomposed;
- (id)payloadURL;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadFullScreen:(id)arg1;
- (void)setPayloadIcon:(id)arg1;
- (void)setPayloadIsRemovable:(id)arg1;
- (void)setPayloadLabel:(id)arg1;
- (void)setPayloadPrecomposed:(id)arg1;
- (void)setPayloadURL:(id)arg1;

@end

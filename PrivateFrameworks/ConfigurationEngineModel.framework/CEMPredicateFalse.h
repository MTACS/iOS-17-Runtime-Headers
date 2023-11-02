
@interface CEMPredicateFalse : CEMPredicateBase <CEMRegisteredTypeProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)build;
+ (id)buildRequiredOnly;
+ (id)registeredClassName;
+ (id)registeredIdentifier;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end

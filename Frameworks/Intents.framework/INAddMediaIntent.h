
@interface INAddMediaIntent : INIntent <CMSCoding, INAddMediaIntentExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) INMediaDestination *mediaDestination;
@property (nonatomic, readonly, copy) NSArray *mediaItems;
@property (nonatomic, readonly, copy) INMediaSearch *mediaSearch;
@property (nonatomic, copy) INPrivateAddMediaIntentData *privateAddMediaIntentData;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Intents.framework/Intents

- (id)_dictionaryRepresentation;
- (bool)_intents_isExemptFromMulitWindowRequirementForInAppHandling;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)domain;
- (id)initWithMediaItems:(id)arg1 mediaSearch:(id)arg2 mediaDestination:(id)arg3;
- (id)mediaDestination;
- (id)mediaItems;
- (id)mediaSearch;
- (id)parametersByName;
- (id)privateAddMediaIntentData;
- (void)setDomain:(id)arg1;
- (void)setMediaDestination:(id)arg1;
- (void)setMediaItems:(id)arg1;
- (void)setMediaSearch:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setPrivateAddMediaIntentData:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

// Image: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit

+ (id)instanceFromCMSCoded:(id)arg1;

- (id)cmsCoded;

@end

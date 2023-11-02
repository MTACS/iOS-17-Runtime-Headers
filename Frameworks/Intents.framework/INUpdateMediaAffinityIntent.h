
@interface INUpdateMediaAffinityIntent : INIntent <CMSCoding, INUpdateMediaAffinityIntentExport>

@property (nonatomic, readonly) long long affinityType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *mediaItems;
@property (nonatomic, readonly, copy) INMediaSearch *mediaSearch;
@property (nonatomic, copy) INPrivateUpdateMediaAffinityIntentData *privateUpdateMediaAffinityIntentData;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Intents.framework/Intents

- (id)_dictionaryRepresentation;
- (bool)_intents_isExemptFromMulitWindowRequirementForInAppHandling;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (long long)affinityType;
- (id)domain;
- (id)initWithMediaItems:(id)arg1 mediaSearch:(id)arg2 affinityType:(long long)arg3;
- (id)mediaItems;
- (id)mediaSearch;
- (id)parametersByName;
- (id)privateUpdateMediaAffinityIntentData;
- (void)setAffinityType:(long long)arg1;
- (void)setDomain:(id)arg1;
- (void)setMediaItems:(id)arg1;
- (void)setMediaSearch:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setPrivateUpdateMediaAffinityIntentData:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

// Image: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit

+ (id)instanceFromCMSCoded:(id)arg1;

- (id)cmsCoded;

@end

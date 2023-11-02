
@interface INPlayMediaIntent : INIntent <CMSCoding, INPlayMediaIntentExport>

@property (nonatomic, copy) NSArray *alternativeResults;
@property (nonatomic, copy) NSArray *audioSearchResults;
@property (nonatomic, copy) NSArray *buckets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *hashedRouteUIDs;
@property (nonatomic, readonly, copy) INMediaItem *mediaContainer;
@property (nonatomic, readonly, copy) NSArray *mediaItems;
@property (nonatomic, readonly, copy) INMediaSearch *mediaSearch;
@property (nonatomic) long long parsecCategory;
@property (nonatomic, readonly, copy) NSNumber *playShuffled;
@property (nonatomic, readonly) long long playbackQueueLocation;
@property (nonatomic, readonly) long long playbackRepeatMode;
@property (nonatomic, readonly, copy) NSNumber *playbackSpeed;
@property (nonatomic, copy) INPrivatePlayMediaIntentData *privatePlayMediaIntentData;
@property (nonatomic, copy) NSString *proxiedBundleIdentifier;
@property (nonatomic, copy) NSString *recoID;
@property (nonatomic, readonly, copy) NSNumber *resumePlayback;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_ignoredParameters;

- (id)_categoryVerb;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (id)_intents_backgroundHandlingAssertionForBundleIdentifier:(id)arg1 context:(unsigned long long)arg2 error:(id*)arg3;
- (bool)_intents_isExemptFromMulitWindowRequirementForInAppHandling;
- (struct { double x1; double x2; })_intents_preferredScaledImageSize;
- (id)_keyCodableAttributes;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_spotlightContentType;
- (id)_titleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2;
- (id)_typedBackingStore;
- (id)_validParameterCombinationsWithSchema:(id)arg1;
- (id)alternativeResults;
- (id)audioSearchResults;
- (id)buckets;
- (id)domain;
- (id)expirationDate;
- (id)hashedRouteUIDs;
- (id)initWithMediaItems:(id)arg1 mediaContainer:(id)arg2 playShuffled:(id)arg3 playbackRepeatMode:(long long)arg4 resumePlayback:(id)arg5;
- (id)initWithMediaItems:(id)arg1 mediaContainer:(id)arg2 playShuffled:(id)arg3 playbackRepeatMode:(long long)arg4 resumePlayback:(id)arg5 playbackQueueLocation:(long long)arg6 playbackSpeed:(id)arg7 mediaSearch:(id)arg8;
- (id)mediaContainer;
- (id)mediaItems;
- (id)mediaSearch;
- (id)parametersByName;
- (long long)parsecCategory;
- (id)playShuffled;
- (long long)playbackQueueLocation;
- (long long)playbackRepeatMode;
- (id)playbackSpeed;
- (id)privatePlayMediaIntentData;
- (id)proxiedBundleIdentifier;
- (id)recoID;
- (id)resumePlayback;
- (void)setAlternativeResults:(id)arg1;
- (void)setAudioSearchResults:(id)arg1;
- (void)setBuckets:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setHashedRouteUIDs:(id)arg1;
- (void)setMediaContainer:(id)arg1;
- (void)setMediaItems:(id)arg1;
- (void)setMediaSearch:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setParsecCategory:(long long)arg1;
- (void)setPlayShuffled:(id)arg1;
- (void)setPlaybackQueueLocation:(long long)arg1;
- (void)setPlaybackRepeatMode:(long long)arg1;
- (void)setPlaybackSpeed:(id)arg1;
- (void)setPrivatePlayMediaIntentData:(id)arg1;
- (void)setProxiedBundleIdentifier:(id)arg1;
- (void)setRecoID:(id)arg1;
- (void)setResumePlayback:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

// Image: /System/Library/PrivateFrameworks/AssistantCardServiceSupport.framework/AssistantCardServiceSupport

- (void)requestCard:(id)arg1 reply:(id /* block */)arg2;
- (unsigned long long)servicePriorityForCardRequest:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit

+ (id)instanceFromCMSCoded:(id)arg1;

- (id)cmsCoded;

// Image: /System/Library/PrivateFrameworks/ContextualSuggestionClient.framework/ContextualSuggestionClient

- (id)atx_nonNilParametersByName;

// Image: /System/Library/PrivateFrameworks/IntentsServices.framework/IntentsServices

- (bool)ins_shouldPrepareAudioSession;
- (bool)ins_shouldPrewarmApp;

@end

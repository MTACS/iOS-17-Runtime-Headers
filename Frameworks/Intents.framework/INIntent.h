
@interface INIntent : NSObject <ACSCardRequesting, CMSCoding, CRContent, INEnumerable, INGenericIntent, INImageProxyInjecting, INIntentExport, INIntentSlotComposing, INKeyImageProducing, INRuntimeObject, NSCopying, NSSecureCoding, REIntentProperties> {
    long long  __preferredInteractionDirection;
    unsigned int  _audioSessionID;
    PBCodable * _backingStore;
    NSDictionary * _configurableParameterCombinations;
    INIntentDonationMetadata * _donationMetadata;
    bool  _hasLoadedKeyParameter;
    NSString * _identifier;
    long long  _indexingHash;
    NSMutableDictionary * _intentInstanceDescriptionMapping;
    INIntentKeyParameter * _keyParameter;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _keyParameterLock;
    NSDictionary * _parameterCombinations;
    INParameterContexts * _parameterContexts;
    NSArray * _parameterImages;
    NSString * _recordDeviceIdentifier;
    NSUUID * _recordDeviceUID;
    NSString * _recordRoute;
    bool  _shouldForwardToAppOnSucccess;
}

@property (nonatomic, readonly) NSDictionary *_JSONDictionaryRepresentation;
@property (nonatomic, readonly) INAppIntent *_asMigratedAppIntent;
@property (nonatomic, readonly) NSString *_categoryVerb;
@property (nonatomic, readonly) NSString *_className;
@property (nonatomic, readonly) NSArray *_codableAttributes;
@property (nonatomic, readonly) INIntentCodableDescription *_codableDescription;
@property (getter=_isConfigurable, nonatomic, readonly) bool _configurable;
@property (setter=_setConfigurableParameterCombinations:, nonatomic, retain) NSDictionary *_configurableParameterCombinations;
@property (setter=_setDefaultImage:, nonatomic, retain) INImage *_defaultImage;
@property (nonatomic, readonly) NSOrderedSet *_displayOrderedAttributes;
@property (getter=_isEligibleForSuggestions, nonatomic, readonly) bool _eligibleForSuggestions;
@property (nonatomic, readonly) NSString *_endpointId;
@property (setter=_setEndpointMediaPlaybackEnabled:, nonatomic, retain) NSNumber *_endpointMediaPlaybackEnabled;
@property (setter=_setExecutionContext:, nonatomic) long long _executionContext;
@property (nonatomic, readonly) bool _hasTitle;
@property (setter=_setIdiom:, nonatomic) long long _idiom;
@property (nonatomic, readonly) long long _indexingHash;
@property (nonatomic, readonly) long long _intentCategory;
@property (getter=_intents_isExemptFromMulitWindowRequirementForInAppHandling, nonatomic, readonly) bool _intents_exemptFromMulitWindowRequirementForInAppHandling;
@property (nonatomic, readonly) bool _intents_hasSystemIntentHandler;
@property (nonatomic, readonly) struct { double x1; double x2; } _intents_preferredScaledImageSize;
@property (readonly) long long _intents_toggleState;
@property (setter=_setIsOwnedByCurrentUser:, nonatomic, retain) NSNumber *_isOwnedByCurrentUser;
@property (readonly) INImage *_keyImage;
@property (nonatomic, readonly) INIntentKeyParameter *_keyParameter;
@property (nonatomic, readonly, copy) NSString *_localizedVerb;
@property (nonatomic, readonly) NSString *_mediaRouteId;
@property (setter=_setMetadata:, nonatomic, retain) _INPBIntentMetadata *_metadata;
@property (setter=_setMSLimitReached:, nonatomic, retain) NSNumber *_msLimitReached;
@property (nonatomic, readonly) NSString *_nanoLaunchId;
@property (setter=_setNanoLaunchId:, nonatomic, retain) NSString *_nanoLaunchId;
@property (setter=_setOriginatingDeviceIdsIdentifier:, nonatomic, retain) NSString *_originatingDeviceIDSIdentifier;
@property (setter=_setOriginatingDeviceRapportEffectiveIdentifier:, nonatomic, retain) NSString *_originatingDeviceRapportEffectiveIdentifier;
@property (setter=_setOriginatingDeviceRapportMediaSystemIdentifier:, nonatomic, retain) NSString *_originatingDeviceRapportMediaSystemIdentifier;
@property (setter=_setParameterCombinations:, nonatomic, retain) NSDictionary *_parameterCombinations;
@property (setter=_setParameterContexts:, nonatomic, retain) INParameterContexts *_parameterContexts;
@property (setter=_setParametersForcedToNeedsValue:, nonatomic, copy) NSArray *_parametersForcedToNeedsValue;
@property (nonatomic, readonly) NSString *_preferredAudioOutputRouteId;
@property (nonatomic, readonly) long long _preferredInteractionDirection;
@property (getter=_isPrimaryDisplayDisabled, setter=_setPrimaryDisplayDisabled:, nonatomic) bool _primaryDisplayDisabled;
@property (nonatomic, readonly) NSDictionary *_resolvableParameterCombinations;
@property (setter=_setShouldForwardToAppOnSuccess:, nonatomic) bool _shouldForwardToAppOnSucccess;
@property (nonatomic, readonly, copy) NSString *_subtitle;
@property (nonatomic, readonly) bool _supportsBackgroundExecution;
@property (nonatomic, readonly, copy) NSString *_title;
@property (nonatomic, readonly) long long _type;
@property (setter=_setUiExtensionBundleId:, nonatomic, retain) NSString *_uiExtensionBundleId;
@property (getter=_isUserConfirmationRequired, setter=_setUserConfirmationRequired:, nonatomic) bool _userConfirmationRequired;
@property (nonatomic, readonly) NSDictionary *_validParameterCombinations;
@property (setter=_setAirPlayRouteIds:, nonatomic, retain) NSArray *airPlayRouteIds;
@property (nonatomic, readonly, copy) NSString *atx_intentType;
@property (setter=_setAudioSessionID:, nonatomic) unsigned int audioSessionID;
@property (nonatomic, copy) PBCodable *backingStore;
@property (nonatomic, readonly) NSString *car_action;
@property (nonatomic, readonly) NSArray *car_people;
@property (nonatomic, readonly) bool car_valid;
@property (readonly, copy) NSString *cd_derivedIntentIdentifier;
@property (readonly) NSString *cd_groupName;
@property (readonly) long long cd_interactionMechanism;
@property (readonly) NSArray *cd_recipients;
@property (readonly) bool cd_saveToKnowledgeStore;
@property (readonly) bool cd_saveToPeopleStore;
@property (readonly) INPerson *cd_sender;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *domain;
@property (nonatomic, copy) INIntentDonationMetadata *donationMetadata;
@property (setter=_setExtensionBundleId:, nonatomic, retain) NSString *extensionBundleId;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *intentDescription;
@property (nonatomic, readonly) NSString *intentId;
@property (nonatomic, readonly) NSString *launchId;
@property (setter=_setLaunchId:, nonatomic, retain) NSString *launchId;
@property (getter=_parameterImages, setter=_setParameterImages:, nonatomic, copy) NSArray *parameterImages;
@property (nonatomic, copy) NSDictionary *parametersByName;
@property (setter=_setRecordDeviceIdentifier:, nonatomic, retain) NSString *recordDeviceIdentifier;
@property (setter=_setRecordDeviceUID:, nonatomic, retain) NSUUID *recordDeviceUID;
@property (setter=_setRecordRoute:, nonatomic, copy) NSString *recordRoute;
@property (nonatomic) unsigned long long shortcutAvailability;
@property (getter=_sortedParameterImages, nonatomic, readonly, copy) NSArray *sortedParameterImages;
@property (nonatomic, copy) NSString *suggestedInvocationPhrase;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long triggerMethod;
@property (nonatomic, readonly) NSString *typeName;
@property (nonatomic, readonly) NSString *utteranceString;
@property (nonatomic, copy) NSString *verb;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_ignoredParameters;
+ (void)_setSharedExtensionContextUUID:(id)arg1 forIntentClassName:(id)arg2;
+ (id)_sharedExtensionContextUUIDForIntentClassName:(id)arg1;
+ (void)initialize;
+ (id)intentDescription;
+ (id)makeFromWidgetPlistableRepresentation:(id)arg1 error:(id*)arg2;
+ (bool)resolveInstanceMethod:(SEL)arg1;
+ (bool)shouldSkipDefaultSchemaCheck;
+ (bool)supportsSecureCoding;
+ (id)typeName;

- (void).cxx_destruct;
- (id)_JSONDictionaryRepresentation;
- (id)_JSONDictionaryRepresentationWithConfiguration:(id)arg1;
- (id)_asMigratedAppIntent;
- (id)_backingStoreData;
- (id)_categoryVerb;
- (id)_className;
- (id)_codableAttributes;
- (id)_codableDescription;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
- (id)_configurableParameterCombinations;
- (id)_copyApplyingNewBackingStoreData:(id)arg1 error:(id*)arg2;
- (id)_copyWithoutBackingStoreData:(id*)arg1;
- (id)_currentParameterCombination;
- (id)_defaultImage;
- (id)_defaultImageName;
- (id)_dictionaryRepresentation;
- (id)_displayOrderedAttributes;
- (id)_displayOrderedNonNilParameters;
- (id)_emptyCopy;
- (id)_endpointId;
- (id)_endpointMediaPlaybackEnabled;
- (bool)_enumerateWithValueProcessingBlock:(id /* block */)arg1;
- (long long)_executionContext;
- (bool)_hasMatchingIntentHandlerIncludingRemoteExecution:(bool)arg1;
- (bool)_hasTitle;
- (long long)_idiom;
- (id)_imageForParameter:(id)arg1;
- (id)_inCodable;
- (long long)_indexingHash;
- (id)_init;
- (id)_initWithIdentifier:(id)arg1 backingStore:(id)arg2 schema:(id)arg3 error:(id*)arg4;
- (id)_initWithIdentifier:(id)arg1 schema:(id)arg2 name:(id)arg3 data:(id)arg4;
- (void)_injectProxiesForImages:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)_injectProxiesForImagesUsingCustomCodableStrategy:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)_injectProxiesForImagesUsingIntentSlotDescriptionStrategy:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)_injectProxiesForParameterImages:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)_injectProxyForDefaultImage:(id /* block */)arg1 completion:(id /* block */)arg2;
- (long long)_intentCategory;
- (id)_intentInstanceDescription;
- (void)_intents_allowAppToInitiatePlaybackForBundleIdentifier:(id)arg1 context:(unsigned long long)arg2 error:(id*)arg3;
- (id)_intents_backgroundHandlingAssertionForBundleIdentifier:(id)arg1 context:(unsigned long long)arg2 error:(id*)arg3;
- (id)_intents_bestBundleIdentifier;
- (id)_intents_bundleIdForDisplay;
- (id)_intents_bundleIdForLaunching;
- (bool)_intents_enumerateObjectsOfClass:(Class)arg1 withBlock:(id /* block */)arg2;
- (bool)_intents_hasSystemIntentHandler;
- (bool)_intents_isExemptFromMulitWindowRequirementForInAppHandling;
- (id)_intents_launchIdForCurrentPlatform;
- (struct { double x1; double x2; })_intents_preferredScaledImageSize;
- (long long)_intents_toggleState;
- (bool)_isConfigurable;
- (bool)_isEligibleForSuggestions;
- (id)_isOwnedByCurrentUser;
- (bool)_isPrimaryDisplayDisabled;
- (bool)_isUserConfirmationRequired;
- (bool)_isValidKey:(id)arg1;
- (bool)_isValueValidForKey:(id)arg1 unsupportedReason:(id*)arg2;
- (id)_keyCodableAttributes;
- (id)_keyImage;
- (id)_keyImageWithIntentDescriptionStrategy;
- (id)_keyParameter;
- (id)_localizedCombinationStringForKey:(id)arg1 value:(id)arg2 localizationTable:(id)arg3 bundleURL:(id)arg4 localizer:(id)arg5;
- (id)_localizedVerb;
- (id)_mediaRouteId;
- (id)_metadata;
- (id)_msLimitReached;
- (id)_nanoLaunchId;
- (id)_nonNilParameters;
- (id)_originatingDeviceIDSIdentifier;
- (id)_originatingDeviceRapportEffectiveIdentifier;
- (id)_originatingDeviceRapportMediaSystemIdentifier;
- (id)_parameterCombinations;
- (id)_parameterContexts;
- (id)_parameterImages;
- (id)_parametersForcedToNeedsValue;
- (id)_preferredAudioOutputRouteId;
- (long long)_preferredInteractionDirection;
- (id)_querySchemaWithBlock:(id /* block */)arg1 contentOptions:(unsigned long long)arg2;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_redactedDictionaryRepresentation;
- (id)_resolvableParameterCombinations;
- (void)_setAirPlayRouteIds:(id)arg1;
- (void)_setAudioSessionID:(unsigned int)arg1;
- (void)_setCategoryVerb:(id)arg1;
- (void)_setConfigurableParameterCombinations:(id)arg1;
- (void)_setDefaultImage:(id)arg1;
- (void)_setEndpointMediaPlaybackEnabled:(id)arg1;
- (void)_setExecutionContext:(long long)arg1;
- (void)_setExtensionBundleId:(id)arg1;
- (void)_setIdiom:(long long)arg1;
- (void)_setImage:(id)arg1 forParameter:(id)arg2;
- (void)_setIntentCategory:(long long)arg1;
- (void)_setIsOwnedByCurrentUser:(id)arg1;
- (void)_setLaunchId:(id)arg1;
- (void)_setMSLimitReached:(id)arg1;
- (void)_setMetadata:(id)arg1;
- (void)_setNanoLaunchId:(id)arg1;
- (void)_setOriginatingDeviceIdsIdentifier:(id)arg1;
- (void)_setOriginatingDeviceRapportEffectiveIdentifier:(id)arg1;
- (void)_setOriginatingDeviceRapportMediaSystemIdentifier:(id)arg1;
- (void)_setParameterCombinations:(id)arg1;
- (void)_setParameterContexts:(id)arg1;
- (void)_setParameterImages:(id)arg1;
- (void)_setParametersForcedToNeedsValue:(id)arg1;
- (void)_setPrimaryDisplayDisabled:(bool)arg1;
- (void)_setRecordDeviceIdentifier:(id)arg1;
- (void)_setRecordDeviceUID:(id)arg1;
- (void)_setRecordRoute:(id)arg1;
- (void)_setShouldForwardToAppOnSuccess:(bool)arg1;
- (void)_setUiExtensionBundleId:(id)arg1;
- (void)_setUserConfirmationRequired:(bool)arg1;
- (bool)_shouldForwardToAppOnSucccess;
- (id)_sortedParameterImages;
- (id)_spotlightContentType;
- (id)_subtitle;
- (id)_subtitleForLanguage:(id)arg1;
- (id)_subtitleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2;
- (bool)_supportsBackgroundExecution;
- (bool)_supportsBackgroundExecutionWithOptions:(unsigned long long)arg1;
- (id)_title;
- (id)_titleForLanguage:(id)arg1;
- (id)_titleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2;
- (long long)_type;
- (id)_typedBackingStore;
- (id)_uiExtensionBundleId;
- (void)_updateWithJSONDictionary:(id)arg1;
- (id)_validParameterCombinations;
- (id)_validParameterCombinationsWithSchema:(id)arg1;
- (id)airPlayRouteIds;
- (unsigned int)audioSessionID;
- (id)backingStore;
- (bool)configureAttributeSet:(id)arg1 includingData:(bool)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)domain;
- (id)donationMetadata;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionBundleId;
- (unsigned long long)hash;
- (id)identifier;
- (id)imageForParameterNamed:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;
- (id)intentDescription;
- (id)intentId;
- (id)intentSlotDescriptions;
- (bool)isEqual:(id)arg1;
- (bool)isGenericIntent;
- (id)keyImage;
- (id)launchId;
- (id)localizeValueOfSlotDescription:(id)arg1 withLocalizer:(id)arg2;
- (id)parametersByName;
- (id)recordDeviceIdentifier;
- (id)recordDeviceUID;
- (id)recordRoute;
- (void)setBackingStore:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setDonationMetadata:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(id)arg1 forParameterNamed:(id)arg2;
- (void)setParametersByName:(id)arg1;
- (void)setShortcutAvailability:(unsigned long long)arg1;
- (void)setSuggestedInvocationPhrase:(id)arg1;
- (bool)setValue:(id)arg1 forProperty:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setVerb:(id)arg1;
- (unsigned long long)shortcutAvailability;
- (id)suggestedInvocationPhrase;
- (long long)triggerMethod;
- (void)trimDataAgainstTCCForAuditToken:(struct { unsigned int x1[8]; })arg1 bundle:(id)arg2;
- (id)typeName;
- (id)utteranceString;
- (id)valueForKey:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (id)verb;
- (id)widgetPlistableRepresentation:(id*)arg1;
- (id)widgetPlistableRepresentationWithParameters:(id)arg1 error:(id*)arg2;

// Image: /System/Library/Frameworks/WidgetKit.framework/WidgetKit

- (id)_wk_asMigratedAppIntent;

// Image: /System/Library/PrivateFrameworks/AppPredictionFoundation.framework/AppPredictionFoundation

+ (id)atx_createEventIntentWithStartDate:(id)arg1 endDate:(id)arg2;
+ (id)atx_createIntentWithIntentType:(id)arg1 intentData:(id)arg2;
+ (bool)shouldDenyConnectionForCurrentProcess;

- (long long)atx_indexingHash;
- (bool)atx_isEligibleForWidgets;
- (id)atx_subtitleWithEfficientLocalization;
- (bool)atx_supportsBackgroundExecution;
- (unsigned long long)atx_titleLengthWithoutLocalizing;
- (id)atx_titleWithEfficientLocalization;
- (id)atx_titleWithoutLocalizing;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (void)atx_getArgsInto:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI

+ (bool)apui_isSupportedForCardRequests;

- (id)apui_intent;
- (id)apui_keyPeople;

// Image: /System/Library/PrivateFrameworks/AssistantCardServiceSupport.framework/AssistantCardServiceSupport

- (bool)acs_needsTitleCardSection;
- (id)acs_utteranceForCardService;
- (void)requestCard:(id)arg1 reply:(id /* block */)arg2;
- (unsigned long long)servicePriorityForCardRequest:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Cards.framework/Cards

- (id)underlyingInteraction;

// Image: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit

+ (id)instanceFromCMSCoded:(id)arg1;

- (id)cmsCoded;

// Image: /System/Library/PrivateFrameworks/ContextualSuggestionClient.framework/ContextualSuggestionClient

- (id)_atx_intentsForAllParameterCombinations;
- (bool)_atx_matchesParameterIdentifiersWithIntent:(id)arg1;
- (unsigned long long)atx_backingStoreDataHash;
- (id)atx_hashApproximately;
- (id)atx_intentType;
- (bool)atx_isEqualToIntent:(id)arg1;
- (id)atx_nonNilParametersByName;

// Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet

- (id)cd_derivedIntentIdentifier;
- (id)cd_groupName;
- (long long)cd_interactionMechanism;
- (id)cd_recipients;
- (bool)cd_saveToKnowledgeStore;
- (bool)cd_saveToPeopleStore;
- (id)cd_sender;

// Image: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext

- (id)contextMetadata;

// Image: /System/Library/PrivateFrameworks/DashBoard.framework/DashBoard

- (id)car_action;
- (id)car_people;
- (bool)car_valid;

// Image: /System/Library/PrivateFrameworks/IntentsServices.framework/IntentsServices

- (void)ins_recordPreInteractionSignals;
- (bool)ins_shouldPrepareAudioSession;
- (bool)ins_shouldPrewarmApp;

// Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer

+ (void)mt_deleteDonationsForAlarm:(id)arg1 completion:(id /* block */)arg2;
+ (id)mt_intentForAlarmCreate:(id)arg1;
+ (id)mt_intentForAlarmDisable:(id)arg1;
+ (id)mt_intentForAlarmEnable:(id)arg1;
+ (id)mt_intentForAlarmUpdate:(id)arg1;
+ (id)mt_nanoAlarmBundleIDForAlarm:(id)arg1;

- (id)mt_initWithAlarm:(id)arg1 verb:(id)arg2;

// Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor

- (id)vcui_displayImage;
- (bool)vcui_isIntentFromSystemApp;
- (id)vcui_keyPeople;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (void)wf_updateIdiomIfNeeded:(long long)arg1;

@end

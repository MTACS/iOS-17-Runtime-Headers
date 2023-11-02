
@interface INStartVideoCallIntent : INIntent <INStartVideoCallIntentExport>

@property (nonatomic) long long audioRoute;
@property (nonatomic, copy) INStartCallRequestMetadata *callRequestMetadata;
@property (nonatomic, readonly, copy) NSArray *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Intents.framework/Intents

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_spotlightContentType;
- (id)_titleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2;
- (id)_typedBackingStore;
- (long long)audioRoute;
- (id)callRequestMetadata;
- (bool)configureAttributeSet:(id)arg1 includingData:(bool)arg2;
- (id)contacts;
- (id)domain;
- (id)initWithContacts:(id)arg1;
- (id)parametersByName;
- (void)setAudioRoute:(long long)arg1;
- (void)setCallRequestMetadata:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (void)atx_getArgsInto:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI

- (id)apui_keyPeople;

// Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet

- (id)cd_groupName;
- (long long)cd_interactionMechanism;
- (id)cd_recipients;
- (bool)cd_saveToPeopleStore;
- (id)cd_sender;

// Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor

- (id)vcui_keyPeople;

@end

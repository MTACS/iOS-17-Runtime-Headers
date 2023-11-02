
@interface INStartCallIntent : INIntent <INStartCallIntentExport, UNNotificationContentProviding>

@property (nonatomic, readonly) long long audioRoute;
@property (nonatomic, readonly) long long callCapability;
@property (nonatomic, copy) NSArray *callGroups;
@property (nonatomic, readonly, copy) INCallRecordFilter *callRecordFilter;
@property (nonatomic, readonly, copy) INCallRecord *callRecordToCallBack;
@property (nonatomic, copy) INStartCallRequestMetadata *callRequestMetadata;
@property (nonatomic, readonly, copy) NSArray *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long destinationType;
@property (nonatomic, copy) NSString *faceTimeLink;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *isGroupCall;
@property (nonatomic, copy) NSString *notificationThreadIdentifier;
@property (nonatomic) long long preferredCallProvider;
@property (nonatomic, readonly) long long recordTypeForRedialing;
@property (nonatomic) long long recordTypeForRedialing;
@property (readonly) Class superclass;
@property (setter=setTTYType:, nonatomic) long long ttyType;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_ignoredParameters;

- (id)_categoryVerb;
- (id)_currentParameterCombination;
- (id)_dictionaryRepresentation;
- (id)_emptyCopy;
- (long long)_intentCategory;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_spotlightContentType;
- (id)_subtitleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2;
- (id)_titleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2;
- (id)_typedBackingStore;
- (id)_validParameterCombinationsWithSchema:(id)arg1;
- (long long)audioRoute;
- (long long)callCapability;
- (id)callGroups;
- (id)callRecordFilter;
- (id)callRecordToCallBack;
- (id)callRequestMetadata;
- (bool)configureAttributeSet:(id)arg1 includingData:(bool)arg2;
- (id)contacts;
- (long long)destinationType;
- (id)domain;
- (id)faceTimeLink;
- (id)initWithAudioRoute:(long long)arg1 destinationType:(long long)arg2 contacts:(id)arg3 callCapability:(long long)arg4;
- (id)initWithAudioRoute:(long long)arg1 destinationType:(long long)arg2 contacts:(id)arg3 recordTypeForRedialing:(long long)arg4 callCapability:(long long)arg5;
- (id)initWithAudioRoute:(long long)arg1 destinationType:(long long)arg2 preferredCallProvider:(long long)arg3 contacts:(id)arg4 recordTypeForRedialing:(long long)arg5 ttyType:(long long)arg6 callCapability:(long long)arg7;
- (id)initWithCallRecordFilter:(id)arg1 callRecordToCallBack:(id)arg2 audioRoute:(long long)arg3 destinationType:(long long)arg4 contacts:(id)arg5 callCapability:(long long)arg6;
- (id)initWithCallRecordFilter:(id)arg1 callRecordToCallBack:(id)arg2 audioRoute:(long long)arg3 destinationType:(long long)arg4 preferredCallProvider:(long long)arg5 contacts:(id)arg6 ttyType:(long long)arg7 callCapability:(long long)arg8;
- (id)initWithDestinationType:(long long)arg1 contacts:(id)arg2 callCapability:(long long)arg3;
- (id)isGroupCall;
- (id)notificationThreadIdentifier;
- (id)parametersByName;
- (long long)preferredCallProvider;
- (long long)recordTypeForRedialing;
- (void)setAudioRoute:(long long)arg1;
- (void)setCallCapability:(long long)arg1;
- (void)setCallGroups:(id)arg1;
- (void)setCallRecordFilter:(id)arg1;
- (void)setCallRecordToCallBack:(id)arg1;
- (void)setCallRequestMetadata:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)setDestinationType:(long long)arg1;
- (void)setDomain:(id)arg1;
- (void)setFaceTimeLink:(id)arg1;
- (void)setIsGroupCall:(id)arg1;
- (void)setNotificationThreadIdentifier:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setPreferredCallProvider:(long long)arg1;
- (void)setRecordTypeForRedialing:(long long)arg1;
- (void)setTTYType:(long long)arg1;
- (void)setVerb:(id)arg1;
- (long long)ttyType;
- (id)verb;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (void)atx_getArgsInto:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI

- (id)apui_keyPeople;

// Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet

- (id)cd_derivedIntentIdentifier;
- (id)cd_groupName;
- (long long)cd_interactionMechanism;
- (id)cd_recipients;
- (bool)cd_saveToPeopleStore;
- (id)cd_sender;

// Image: /System/Library/PrivateFrameworks/DashBoard.framework/DashBoard

- (id)car_action;
- (id)car_people;
- (bool)car_valid;

// Image: /System/Library/PrivateFrameworks/IntentsServices.framework/IntentsServices

- (bool)ins_shouldPrepareAudioSession;

// Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor

- (id)vcui_keyPeople;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (void)wf_updateIdiomIfNeeded:(long long)arg1;

@end

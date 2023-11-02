
@interface INSendMessageIntent : INIntent <INSendMessageIntentExport, UNNotificationContentProviding>

@property (nonatomic, copy) NSString *alternativeConversationIdentifier;
@property (nonatomic, readonly, copy) NSArray *attachments;
@property (nonatomic, readonly, copy) NSString *content;
@property (nonatomic, readonly, copy) NSString *conversationIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long effect;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *notificationThreadIdentifier;
@property (nonatomic, readonly) long long outgoingMessageType;
@property (nonatomic, readonly, copy) NSArray *recipients;
@property (nonatomic, readonly, copy) INPerson *sender;
@property (nonatomic, readonly, copy) NSString *serviceName;
@property (nonatomic, readonly, copy) INSpeakableString *speakableGroupName;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_ignoredParameters;

- (id)_categoryVerb;
- (id)_currentParameterCombination;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (void)_intents_resolveOutgoingMessageTypeWithCompletionHandler:(id /* block */)arg1;
- (bool)_isUserConfirmationRequired;
- (bool)_isValidSubProducer:(id)arg1;
- (id)_keyCodableAttributes;
- (id)_metadata;
- (long long)_preferredInteractionDirection;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_redactedDictionaryRepresentation;
- (void)_setMetadata:(id)arg1;
- (id)_spotlightContentType;
- (id)_typedBackingStore;
- (id)_validParameterCombinationsWithSchema:(id)arg1;
- (id)alternativeConversationIdentifier;
- (id)attachments;
- (bool)configureAttributeSet:(id)arg1 includingData:(bool)arg2;
- (id)content;
- (id)conversationIdentifier;
- (id)domain;
- (long long)effect;
- (id)groupName;
- (id)initWithRecipients:(id)arg1 content:(id)arg2 groupName:(id)arg3 serviceName:(id)arg4 sender:(id)arg5;
- (id)initWithRecipients:(id)arg1 content:(id)arg2 serviceName:(id)arg3 sender:(id)arg4;
- (id)initWithRecipients:(id)arg1 content:(id)arg2 speakableGroupName:(id)arg3 conversationIdentifier:(id)arg4 serviceName:(id)arg5 sender:(id)arg6;
- (id)initWithRecipients:(id)arg1 outgoingMessageType:(long long)arg2 content:(id)arg3 speakableGroupName:(id)arg4 conversationIdentifier:(id)arg5 serviceName:(id)arg6 sender:(id)arg7;
- (id)initWithRecipients:(id)arg1 outgoingMessageType:(long long)arg2 content:(id)arg3 speakableGroupName:(id)arg4 conversationIdentifier:(id)arg5 serviceName:(id)arg6 sender:(id)arg7 attachments:(id)arg8;
- (id)notificationThreadIdentifier;
- (long long)outgoingMessageType;
- (id)parametersByName;
- (id)recipients;
- (id)sender;
- (id)serviceName;
- (void)setAlternativeConversationIdentifier:(id)arg1;
- (void)setAttachments:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setConversationIdentifier:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setEffect:(long long)arg1;
- (void)setGroupName:(id)arg1;
- (void)setNotificationThreadIdentifier:(id)arg1;
- (void)setOutgoingMessageType:(long long)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSender:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setSpeakableGroupName:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)speakableGroupName;
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

// Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor

- (id)vcui_keyPeople;

@end

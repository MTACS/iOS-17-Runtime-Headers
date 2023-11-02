
@interface IMAssistantMessageHandler : NSObject <IMAssistantINMessageConverterPersonProvider, IMAssistantIdentifiableIntentHandler> {
    NSString * _intentIdentifier;
    NSArray * _keysToFetch;
    <IMAssistantMessageHandlerDataSource> * _messageHandlerDataSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *intentIdentifier;
@property (nonatomic, retain) NSArray *keysToFetch;
@property (nonatomic, retain) <IMAssistantMessageHandlerDataSource> *messageHandlerDataSource;
@property (readonly) Class superclass;

+ (id)connectToIMDaemonController;

- (void).cxx_destruct;
- (id)_initWithDataSource:(id)arg1 contactKeysToFetch:(id)arg2 intentIdentifier:(id)arg3;
- (id)contactIdentifiersForParticipantsInChat:(id)arg1;
- (id)contactIdentifiersMatchingHandle:(id)arg1;
- (id)contactIdentifiersMatchingHandleID:(id)arg1 handleType:(long long)arg2;
- (id)contactIdentifiersMatchingINPersonHandle:(id)arg1;
- (id)contactIdentifiersMatchingSPIHandle:(id)arg1;
- (id)contactPredicateFromHandle:(id)arg1 handleType:(long long)arg2;
- (id)contactWithIdentifier:(id)arg1;
- (id)contactsMatchingINPerson:(id)arg1;
- (id)contactsMatchingPredicate:(id)arg1 forPerson:(id)arg2;
- (void)forceTriggerResumeNotification;
- (id)initWithDataSource:(id)arg1 intentIdentifier:(id)arg2;
- (id)initWithDataSource:(id)arg1 keysToFetch:(id)arg2 intentIdentifier:(id)arg3;
- (id)initWithIntentIdentifier:(id)arg1;
- (id)intentIdentifier;
- (id)keysToFetch;
- (id)meContactIdentifier;
- (id)messageHandlerDataSource;
- (id)personFromSPIHandle:(id)arg1;
- (void)setIntentIdentifier:(id)arg1;
- (void)setKeysToFetch:(id)arg1;
- (void)setMessageHandlerDataSource:(id)arg1;
- (id)unifiedContactIdentifierForContactIdentifier:(id)arg1;

@end

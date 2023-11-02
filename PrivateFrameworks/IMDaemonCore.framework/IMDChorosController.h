
@interface IMDChorosController : NSObject <CTStewieDataClientDelegate> {
    CTStewieDataClient * _coreTelephonyStewieClient;
    bool  _stewieActive;
}

@property (nonatomic, retain) CTStewieDataClient *coreTelephonyStewieClient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isStewieActive, nonatomic) bool stewieActive;
@property (readonly) Class superclass;

+ (id)chatIdentifierForEmergency;
+ (id)chatIdentifierForRoadside:(long long)arg1;
+ (id)chatSubjectForService:(long long)arg1;
+ (id)conversationIDDefaultsKeyForService:(long long)arg1;
+ (id)conversationIDToUUIDsDefaultsKeyForService:(long long)arg1;
+ (id)generateCTStewieStartMessage:(id)arg1 forService:(long long)arg2 error:(id*)arg3;
+ (id)generatePresentationForEmergencyQuestionnaire:(id)arg1;
+ (id)generatePresentationForRoadsideQuestionnaire:(id)arg1;
+ (id)generatePresentationForStewieQuestionnaire:(id)arg1 forService:(long long)arg2;
+ (id)incomingSequenceNumberDefaultsKeyForService:(long long)arg1;
+ (id)nameForService:(long long)arg1;
+ (bool)needToOpenChatForService:(long long)arg1 questionnaireDictionary:(id)arg2;
+ (id)outgoingSequenceNumberDefaultsKeyForService:(long long)arg1;
+ (id)reportTypeKey;
+ (id)roadsideProviderIDFromChatIdentifier:(id)arg1;
+ (long long)serviceFromChatIdentifier:(id)arg1;
+ (id)serviceTypeKey;
+ (id)sharedController;
+ (long long)supportedServices;
+ (bool)supportsService:(long long)arg1;

- (void).cxx_destruct;
- (bool)_createChatIfNecessary:(id)arg1 chatIdentifier:(id)arg2 service:(long long)arg3;
- (id)_generateLocationUpdateSentStatusItemForChat:(id)arg1;
- (id)_generateStopTranscriptSharingStatusItemForChat:(id)arg1;
- (bool)_isMessageStewieCompatible:(id)arg1;
- (void)_openStewieChatWithChatIdentifier:(id)arg1;
- (void)_processMessageSendFailure:(id)arg1 forSession:(id)arg2;
- (void)_processMessageSent:(id)arg1 forSession:(id)arg2;
- (void)_processReceivedTextMessageForService:(long long)arg1 chatIdentifier:(id)arg2 conversationID:(long long)arg3 sequenceNum:(long long)arg4 text:(id)arg5;
- (id)_simNumber;
- (id)_stringKeyForConversationID:(long long)arg1;
- (void)connectedServicesChanged:(long long)arg1;
- (id)conversationIDToConversationUUIDMapForService:(long long)arg1;
- (id)conversationUUIDForConversationID:(long long)arg1 service:(long long)arg2;
- (id)coreTelephonyStewieClient;
- (id)init;
- (bool)isStewieActive;
- (void)locationUpdateDelivered:(id)arg1;
- (void)locationUpdateSent;
- (void)messageReceived:(id)arg1 withMetadata:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)openStewieChatWithContext:(id)arg1;
- (void)processReceivedEmergencyMessageFromIMTool:(long long)arg1 message:(id)arg2;
- (id)roadsideProviderForChatIdentifier:(id)arg1;
- (id)roadsideProviderForProviderId:(long long)arg1;
- (void)sendEmergencyQuestionnaire:(id)arg1;
- (void)sendQuestionnaire:(id)arg1;
- (void)sendStewieMessage:(id)arg1 forChat:(id)arg2;
- (void)setConversationIDToConversationUUIDMap:(id)arg1 forService:(long long)arg2;
- (void)setConversationUUID:(id)arg1 forConversationID:(long long)arg2 service:(long long)arg3;
- (void)setCoreTelephonyStewieClient:(id)arg1;
- (void)setStewieActive:(bool)arg1;
- (void)stateChanged:(id)arg1;
- (void)stopTranscriptSharingWithChat:(id)arg1;
- (void)updateChatPropertiesIfRequiredForChat:(id)arg1 service:(long long)arg2;
- (void)updateChatPropertiesIfRequiredForEmergencyChat:(id)arg1;
- (void)updateChatPropertiesIfRequiredForRoadsideChat:(id)arg1;

@end


@interface TIResponseKitManager : NSObject <TIResponseKitManaging> {
    NSMutableArray * _conversationTurns;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)rewriteMoneyAttributes:(id)arg1;
+ (id)sharedTIResponseKitManager;
+ (id)singletonInstance;

- (void).cxx_destruct;
- (void)addNewConversationTurnToHistory:(id)arg1;
- (id)cannedResponsesForString:(id)arg1 withLanguageID:(id)arg2 withClientID:(id)arg3 withRecipientID:(id)arg4 withAdditionalPredictions:(id)arg5 desiredCandidateCount:(unsigned long long)arg6 shouldDisableAutoCaps:(bool)arg7 isBlacklisted:(bool)arg8;
- (void)generateResponseKitSuggestionsForString:(id)arg1 withLanguage:(id)arg2 withClientID:(id)arg3 withRecipientID:(id)arg4 withAdditionalPredictions:(id)arg5 desiredCandidateCount:(unsigned long long)arg6 shouldDisableAutoCaps:(bool)arg7 stringIsBlacklisted:(bool)arg8 async:(bool)arg9 completionHandler:(id /* block */)arg10;
- (id)indexesOfDuplicatesInCandidates:(id)arg1;
- (id)init;
- (void)persistResponseKitDynamicDataToDisk;
- (void)registerResponseKitResponse:(id)arg1 forMessage:(id)arg2 withLanguage:(id)arg3 withClientID:(id)arg4 withSenderID:(id)arg5 withRecipientID:(id)arg6 withTimestamp:(id)arg7 shouldUpdateConversationHistory:(bool)arg8;
- (void)resetResponseKit;
- (void)resetResponseKitConversationHistory;
- (id)responseKitResponseCandidatesForString:(id)arg1 withLanguageID:(id)arg2 withClientID:(id)arg3 withRecipientID:(id)arg4 shouldDisableAutoCaps:(bool)arg5;
- (void)updateResponseKitConversationHistoryWithMessage:(id)arg1 withSenderID:(id)arg2 withTimestamp:(id)arg3;

@end

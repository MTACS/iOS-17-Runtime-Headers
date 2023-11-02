
@protocol TIResponseKitManaging <NSObject>

@required

- (void)generateResponseKitSuggestionsForString:(void *)arg1 withLanguage:(void *)arg2 withClientID:(void *)arg3 withRecipientID:(void *)arg4 withAdditionalPredictions:(void *)arg5 desiredCandidateCount:(void *)arg6 shouldDisableAutoCaps:(void *)arg7 stringIsBlacklisted:(void *)arg8 async:(void *)arg9 completionHandler:(void *)arg10; // needs 10 arg types, found 15: NSString *, NSString *, NSString *, NSString *, TIAutocorrectionList *, unsigned long long, bool, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TIAutocorrectionList *, void*
- (void)persistResponseKitDynamicDataToDisk;
- (void)registerResponseKitResponse:(NSString *)arg1 forMessage:(NSString *)arg2 withLanguage:(NSString *)arg3 withClientID:(NSString *)arg4 withSenderID:(NSString *)arg5 withRecipientID:(NSString *)arg6 withTimestamp:(NSDate *)arg7 shouldUpdateConversationHistory:(bool)arg8;
- (void)resetResponseKit;
- (void)resetResponseKitConversationHistory;
- (void)updateResponseKitConversationHistoryWithMessage:(NSString *)arg1 withSenderID:(NSString *)arg2 withTimestamp:(NSDate *)arg3;

@end

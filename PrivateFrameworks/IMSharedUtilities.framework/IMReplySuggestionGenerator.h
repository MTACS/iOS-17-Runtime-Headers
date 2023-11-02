
@interface IMReplySuggestionGenerator : NSObject

+ (void)_annotatedRepliesForMessages:(id)arg1 senderMessages:(id)arg2 recipientHandles:(id)arg3 languageCode:(id)arg4 languageCodeChangeDate:(id)arg5 loadAsync:(bool)arg6 completion:(id /* block */)arg7;
+ (void)_contextualRepliesForMessages:(id)arg1 senderMessages:(id)arg2 recipientHandles:(id)arg3 languageCode:(id)arg4 languageCodeChangeDate:(id)arg5 loadAsync:(bool)arg6 includeDynamicSuggestions:(bool)arg7 completion:(id /* block */)arg8;
+ (void)_repliesForMessages:(id)arg1 senderMessages:(id)arg2 recipientHandles:(id)arg3 languageCode:(id)arg4 languageCodeChangeDate:(id)arg5 loadAsync:(bool)arg6 completion:(id /* block */)arg7;
+ (long long)_tintColorForMetadata:(id)arg1;
+ (void)annotatedRepliesForMessages:(id)arg1 senderMessages:(id)arg2 recipientHandles:(id)arg3 languageCode:(id)arg4 languageCodeChangeDate:(id)arg5 completion:(id /* block */)arg6;
+ (id)combinedPlainTextOfMessageItem:(id)arg1;
+ (void)primeResponseKitIfNeeded;
+ (id)recentIncomingMessagesWithTextContentForReplySuggestions:(id)arg1;
+ (id)recentOugoingMessagesWithTextContentForReplySuggestions:(id)arg1;
+ (id)repliesForMessages:(id)arg1 senderMessages:(id)arg2 recipientHandles:(id)arg3 languageCode:(id)arg4 languageCodeChangeDate:(id)arg5;
+ (void)repliesForMessages:(id)arg1 senderMessages:(id)arg2 recipientHandles:(id)arg3 languageCode:(id)arg4 languageCodeChangeDate:(id)arg5 completion:(id /* block */)arg6;
+ (id)textMessageItemsFilteredByIsOutgoing:(id)arg1 isOutgoingContent:(bool)arg2;

@end

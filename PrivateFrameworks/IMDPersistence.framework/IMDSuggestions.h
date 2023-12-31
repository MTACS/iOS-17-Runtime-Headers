
@interface IMDSuggestions : NSObject <SGMessagesSuggestionsServiceDelegate> {
    <NSObject><SGSuggestionsServiceMessagesProtocol> * _sgService;
}

@property (retain) <NSObject><SGSuggestionsServiceMessagesProtocol> *sgService;

- (void).cxx_destruct;
- (id)init;
- (void)setSgService:(id)arg1;
- (id)sgService;
- (void)suggestionsFromMessage:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)suggestionsService:(id)arg1 needsContextForConversationIdentifier:(id)arg2 numberOfMessagesNeeded:(unsigned long long)arg3;

@end


@protocol SGMessagesSuggestionsServiceDelegate

@required

- (NSArray *)suggestionsService:(NSObject<SGSuggestionsServiceMessagesProtocol> *)arg1 needsContextForConversationIdentifier:(NSString *)arg2 numberOfMessagesNeeded:(unsigned long long)arg3;

@end

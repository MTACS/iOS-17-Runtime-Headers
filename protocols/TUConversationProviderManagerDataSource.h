
@protocol TUConversationProviderManagerDataSource <NSObject>

@required

- (TUConversationProvider *)conversationProviderForIdentifier:(NSString *)arg1;
- (void)conversationProviderForIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TUConversationProvider *, void*
- (void)doesHandle:(void *)arg1 correspondToConversationProvider:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: TUHandle *, TUConversationProvider *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)generatePseudonymHandleForConversationProvider:(void *)arg1 expiryDuration:(void *)arg2 URI:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 11: TUConversationProvider *, double, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TUHandle *, NSDate *, NSError *, void*
- (void)invalidate;
- (void)registerConversationProvider:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: TUConversationProvider *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)registerForCallbacksForProvider:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)renewPseudonymHandle:(void *)arg1 forConversationProvider:(void *)arg2 expirationDate:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 11: TUHandle *, TUConversationProvider *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSDate *, NSError *, void*
- (void)revokePseudonymHandle:(void *)arg1 forConversationProvider:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: TUHandle *, TUConversationProvider *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end

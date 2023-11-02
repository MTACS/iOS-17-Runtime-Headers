
@interface TUConversationProviderManager : NSObject {
    <TUConversationProviderManagerDataSource> * _dataSource;
}

@property (nonatomic, readonly) <TUConversationProviderManagerDataSource> *dataSource;

- (void).cxx_destruct;
- (void)conversationProviderForIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)dataSource;
- (void)dealloc;
- (void)doesHandle:(id)arg1 correspondToConversationProvider:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)generatePseudonymHandleForConversationProvider:(id)arg1 expiryDuration:(double)arg2 URI:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)init;
- (id)initWithDataSource:(id)arg1;
- (void)registerConversationProviderForConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)registerForCallbacksForProvider:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)renewPseudonymHandle:(id)arg1 forConversationProvider:(id)arg2 expirationDate:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)revokePseudonymHandle:(id)arg1 forConversationProvider:(id)arg2 completionHandler:(id /* block */)arg3;

@end

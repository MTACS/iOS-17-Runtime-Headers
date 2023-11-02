
@interface NCMutingRemoteSuggestionContentProvider : NCRemoteSuggestionContentProvider {
    unsigned long long  _scope;
}

- (id)auxiliaryOptionActions;
- (void)handleAcceptAction:(id)arg1;
- (void)handleRejectAction:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1 bundleDisplayName:(id)arg2 managementDelegate:(id)arg3 suggestionDelegate:(id)arg4 uuid:(id)arg5 scope:(unsigned long long)arg6;
- (void)logSuggestionEvent:(long long)arg1;

@end

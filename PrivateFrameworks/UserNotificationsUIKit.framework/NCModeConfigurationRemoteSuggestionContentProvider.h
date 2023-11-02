
@interface NCModeConfigurationRemoteSuggestionContentProvider : NCRemoteSuggestionContentProvider {
    DNDModeConfiguration * _modeConfiguration;
    unsigned long long  _scope;
    unsigned long long  _suggestionType;
}

+ (id)_localizedSummaryStringForSuggestionType:(unsigned long long)arg1 configurationType:(unsigned long long)arg2 scope:(unsigned long long)arg3 semanticType:(long long)arg4 modeName:(id)arg5 bundleDisplayName:(id)arg6 preferredSenderSummary:(id)arg7 localizedStringForKeyBlock:(id /* block */)arg8;

- (void).cxx_destruct;
- (id)auxiliaryOptionActions;
- (void)handleAcceptAction:(id)arg1;
- (void)handleRejectAction:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1 bundleDisplayName:(id)arg2 managementDelegate:(id)arg3 suggestionDelegate:(id)arg4 uuid:(id)arg5 suggestionType:(unsigned long long)arg6 scope:(unsigned long long)arg7 modeConfiguration:(id)arg8;

@end

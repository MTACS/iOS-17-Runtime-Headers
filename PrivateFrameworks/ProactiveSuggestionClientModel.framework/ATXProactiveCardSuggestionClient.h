
@interface ATXProactiveCardSuggestionClient : NSObject {
    ATXProactiveSuggestionClientModel * _clientModel;
    NSString * _sourceId;
}

- (void).cxx_destruct;
- (void)clearSuggestions;
- (void)clearSuggestionsWithCompletionHandler:(id /* block */)arg1;
- (id)createSuggestionWithAppBundleIdentifier:(id)arg1 widgetBundleIdentifier:(id)arg2 widgetKind:(id)arg3 criterion:(id)arg4 applicableLayouts:(unsigned long long)arg5 suggestionIdentifier:(id)arg6 startDate:(id)arg7 endDate:(id)arg8 intent:(id)arg9 metadata:(id)arg10;
- (id)initWithSourceId:(id)arg1;
- (void)retrieveCurrentSuggestionsWithReply:(id /* block */)arg1;
- (void)updateSuggestions:(id)arg1;
- (void)updateSuggestions:(id)arg1 completionHandler:(id /* block */)arg2;

@end

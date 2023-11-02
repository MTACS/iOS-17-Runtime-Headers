
@protocol FCActivitySuggestionFeedbackAccepting <NSObject>

@required

- (void)didShowSuggestedActivity:(id <FCActivityDescribing>)arg1 location:(long long)arg2;
- (void)userDidAcceptSuggestedActivity:(id <FCActivityDescribing>)arg1 location:(long long)arg2;
- (void)userDidRejectSuggestedActivity:(id <FCActivityDescribing>)arg1 location:(long long)arg2;
- (void)userDidSeeSuggestedActivity:(id <FCActivityDescribing>)arg1 location:(long long)arg2;

@end

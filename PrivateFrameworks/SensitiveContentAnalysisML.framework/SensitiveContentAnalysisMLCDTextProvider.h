
@interface SensitiveContentAnalysisMLCDTextProvider : SCMLTextProvider

- (void)provideTextItemsWithConversationIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 progressHandler:(id /* block */)arg4;
- (id)queryForConversationIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;

@end

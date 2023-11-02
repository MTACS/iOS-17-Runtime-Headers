
@protocol SBProactiveHomeScreenSuggestionProviderObserver

@required

- (void)proactiveHomeScreenSuggestionProvider:(SBProactiveHomeScreenSuggestionProvider *)arg1 willUseTemporaryIntent:(INIntent *)arg2 forIconWithIdentifier:(NSString *)arg3 widgetUniqueIdentifier:(NSString *)arg4;
- (void)proactiveHomeScreenSuggestionProviderDidUpdatePrediction:(SBProactiveHomeScreenSuggestionProvider *)arg1;

@end

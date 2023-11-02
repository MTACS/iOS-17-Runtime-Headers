
@protocol AMUIProactiveSuggestionsProviderDelegate

@required

- (void)proactiveSuggestionsProvider:(AMUIProactiveSuggestionsProvider *)arg1 willUseIntent:(INIntent *)arg2 forIconWithIdentifier:(NSString *)arg3 widgetUniqueIdentifier:(NSString *)arg4;

@end

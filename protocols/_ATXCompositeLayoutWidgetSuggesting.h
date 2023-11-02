
@protocol _ATXCompositeLayoutWidgetSuggesting <_ATXWidgetSuggesting>

@required

- (bool)addSuggestion:(ATXProactiveSuggestion *)arg1 asMainSuggestion:(bool)arg2;
- (bool)canAddSuggestion:(ATXProactiveSuggestion *)arg1;
- (bool)isLayoutComplete;
- (long long)layoutType;

@end

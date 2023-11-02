
@interface CSTokenScopeParser : NSObject

- (long long)indexForScopeKey:(id)arg1;
- (id)init;
- (void)loadDefaultScopeKeyMapTable;
- (void)loadScopeKeyMapTableForCurrentLocale;
- (id)messageSuggestionTokenForString:(id)arg1;
- (id)scopeKeyMapTable;
- (id)suggestionTokenForString:(id)arg1;
- (id)tokenFromConfiguration:(id)arg1 userString:(id)arg2 displayString:(id)arg3 handle:(id)arg4;
- (id)tokenScopeConfigurationForKey:(id)arg1;
- (id)tokenScopeConfigurationTable;
- (void)updateScopeKeyMapTableIfNeeded;

@end

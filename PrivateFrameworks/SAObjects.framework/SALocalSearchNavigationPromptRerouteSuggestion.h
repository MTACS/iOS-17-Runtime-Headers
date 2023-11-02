
@interface SALocalSearchNavigationPromptRerouteSuggestion : SADomainCommand

+ (id)navigationPromptRerouteSuggestion;
+ (id)navigationPromptRerouteSuggestionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end

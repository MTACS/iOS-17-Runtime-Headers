
@interface SALocalSearchAnswerRerouteSuggestion : SADomainCommand

@property (nonatomic, copy) NSString *response;

+ (id)answerRerouteSuggestion;
+ (id)answerRerouteSuggestionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (id)response;
- (void)setResponse:(id)arg1;

@end


@interface SAUISetSuggestedUtterances : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSArray *utterances;

+ (id)setSuggestedUtterances;
+ (id)setSuggestedUtterancesWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)language;
- (bool)requiresResponse;
- (void)setLanguage:(id)arg1;
- (void)setUtterances:(id)arg1;
- (id)utterances;

@end

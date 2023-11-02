
@interface SAGuidanceSuggestedUtterances : SADomainObject

@property (nonatomic, copy) NSArray *utterances;

+ (id)suggestedUtterances;
+ (id)suggestedUtterancesWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setUtterances:(id)arg1;
- (id)utterances;

@end

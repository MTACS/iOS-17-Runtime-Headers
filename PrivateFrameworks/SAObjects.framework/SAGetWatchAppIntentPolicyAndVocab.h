
@interface SAGetWatchAppIntentPolicyAndVocab : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *clientIdentifiers;

+ (id)getWatchAppIntentPolicyAndVocab;
+ (id)getWatchAppIntentPolicyAndVocabWithDictionary:(id)arg1 context:(id)arg2;

- (id)clientIdentifiers;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setClientIdentifiers:(id)arg1;

@end

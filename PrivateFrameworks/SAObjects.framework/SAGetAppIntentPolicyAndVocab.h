
@interface SAGetAppIntentPolicyAndVocab : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *clientIdentifiers;

+ (id)getAppIntentPolicyAndVocab;
+ (id)getAppIntentPolicyAndVocabWithDictionary:(id)arg1 context:(id)arg2;

- (id)clientIdentifiers;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setClientIdentifiers:(id)arg1;

@end

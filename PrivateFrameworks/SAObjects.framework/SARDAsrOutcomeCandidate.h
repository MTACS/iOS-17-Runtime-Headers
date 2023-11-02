
@interface SARDAsrOutcomeCandidate : SASResultCandidate

+ (id)asrOutcomeCandidate;
+ (id)asrOutcomeCandidateWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end

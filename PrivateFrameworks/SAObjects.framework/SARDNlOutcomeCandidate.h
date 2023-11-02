
@interface SARDNlOutcomeCandidate : SABaseClientBoundCommand

@property (nonatomic, copy) NSData *nlIntentHierarchyContainerProto;
@property (nonatomic, copy) NSString *resultCandidateId;

+ (id)nlOutcomeCandidate;
+ (id)nlOutcomeCandidateWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)nlIntentHierarchyContainerProto;
- (bool)requiresResponse;
- (id)resultCandidateId;
- (void)setNlIntentHierarchyContainerProto:(id)arg1;
- (void)setResultCandidateId:(id)arg1;

@end

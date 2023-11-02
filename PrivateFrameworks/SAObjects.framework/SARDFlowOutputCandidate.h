
@interface SARDFlowOutputCandidate : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *payload;
@property (nonatomic, copy) NSString *resultCandidateId;
@property (nonatomic, retain) SARDServerContextUpdateCandidate *serverContextUpdateCandidate;
@property (nonatomic) bool shouldNotMitigateAsFalseTrigger;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)payload;
- (bool)requiresResponse;
- (id)resultCandidateId;
- (id)serverContextUpdateCandidate;
- (void)setPayload:(id)arg1;
- (void)setResultCandidateId:(id)arg1;
- (void)setServerContextUpdateCandidate:(id)arg1;
- (void)setShouldNotMitigateAsFalseTrigger:(bool)arg1;
- (bool)shouldNotMitigateAsFalseTrigger;

@end

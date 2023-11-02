
@interface SASMUXResultCandidate : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *rcID;
@property (nonatomic, copy) NSDictionary *resultCandidates;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (id)rcID;
- (bool)requiresResponse;
- (id)resultCandidates;
- (void)setRcID:(id)arg1;
- (void)setResultCandidates:(id)arg1;

@end

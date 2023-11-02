
@interface SARDServerContextUpdateCandidate : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *mappedDomainEntities;
@property (nonatomic, copy) NSData *nlContextUpdatePayload;
@property (nonatomic, copy) NSData *pegasusConversationContext;
@property (nonatomic, copy) NSString *resultCandidateId;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)mappedDomainEntities;
- (id)nlContextUpdatePayload;
- (id)pegasusConversationContext;
- (bool)requiresResponse;
- (id)resultCandidateId;
- (void)setMappedDomainEntities:(id)arg1;
- (void)setNlContextUpdatePayload:(id)arg1;
- (void)setPegasusConversationContext:(id)arg1;
- (void)setResultCandidateId:(id)arg1;

@end

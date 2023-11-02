
@interface SAReplayRequestFromDMHypothesis : SAStartRequest

@property (nonatomic, copy) NSData *dmHypothesis;

- (id)dmHypothesis;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setDmHypothesis:(id)arg1;

@end

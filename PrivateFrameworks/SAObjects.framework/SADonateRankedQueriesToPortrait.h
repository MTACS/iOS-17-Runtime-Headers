
@interface SADonateRankedQueriesToPortrait : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *queryDonations;
@property (nonatomic, copy) NSString *resultCandidateId;
@property (nonatomic, copy) NSString *utterance;

+ (id)donateRankedQueriesToPortrait;
+ (id)donateRankedQueriesToPortraitWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)queryDonations;
- (bool)requiresResponse;
- (id)resultCandidateId;
- (void)setQueryDonations:(id)arg1;
- (void)setResultCandidateId:(id)arg1;
- (void)setUtterance:(id)arg1;
- (id)utterance;

@end

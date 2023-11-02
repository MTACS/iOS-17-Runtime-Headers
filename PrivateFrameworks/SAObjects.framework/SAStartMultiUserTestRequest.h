
@interface SAStartMultiUserTestRequest : SAStartRequest

@property (nonatomic, copy) NSString *expectedSelectedSharedUserId;
@property (nonatomic, retain) SAConfidenceScores *voiceIDConfidenceScores;

+ (id)startMultiUserTestRequest;
+ (id)startMultiUserTestRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)expectedSelectedSharedUserId;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setExpectedSelectedSharedUserId:(id)arg1;
- (void)setVoiceIDConfidenceScores:(id)arg1;
- (id)voiceIDConfidenceScores;

@end

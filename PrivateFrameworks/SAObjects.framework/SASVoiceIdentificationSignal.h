
@interface SASVoiceIdentificationSignal : SABaseClientBoundCommand

@property (nonatomic) bool recordUserAudio;
@property (nonatomic, copy) NSString *resultCandidateId;
@property (nonatomic, copy) NSString *selectedSharedUserId;

+ (id)voiceIdentificationSignal;
+ (id)voiceIdentificationSignalWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)recordUserAudio;
- (bool)requiresResponse;
- (id)resultCandidateId;
- (id)selectedSharedUserId;
- (void)setRecordUserAudio:(bool)arg1;
- (void)setResultCandidateId:(id)arg1;
- (void)setSelectedSharedUserId:(id)arg1;

@end

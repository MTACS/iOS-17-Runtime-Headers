
@interface SARDRunNLXRequest : SABaseClientBoundCommand

@property (nonatomic, retain) SASRecognition *asrOutput;
@property (nonatomic, copy) NSNumber *processedAudioDuration;
@property (nonatomic, copy) NSString *userId;

- (id)asrOutput;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)processedAudioDuration;
- (bool)requiresResponse;
- (void)setAsrOutput:(id)arg1;
- (void)setProcessedAudioDuration:(id)arg1;
- (void)setUserId:(id)arg1;
- (id)userId;

@end

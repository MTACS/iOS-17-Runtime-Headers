
@interface SASExtractSpeechData : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *audioOutputType;
@property (nonatomic, copy) NSNumber *endTime;
@property (nonatomic, copy) NSString *speechRequestId;
@property (nonatomic, copy) NSNumber *startTime;

+ (id)extractSpeechData;
+ (id)extractSpeechDataWithDictionary:(id)arg1 context:(id)arg2;

- (id)audioOutputType;
- (id)encodedClassName;
- (id)endTime;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAudioOutputType:(id)arg1;
- (void)setEndTime:(id)arg1;
- (void)setSpeechRequestId:(id)arg1;
- (void)setStartTime:(id)arg1;
- (id)speechRequestId;
- (id)startTime;

@end

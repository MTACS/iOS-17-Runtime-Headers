
@interface SARDStartServerRequest : SAStartRequest

@property (nonatomic, copy) NSString *audioDestination;
@property (nonatomic, copy) NSString *audioSource;
@property (nonatomic, copy) NSArray *bargeInModes;
@property (nonatomic, copy) NSString *deviceModel;
@property (nonatomic, copy) NSNumber *durationSincePreviousTTSFinish;
@property (nonatomic, copy) NSNumber *durationSincePreviousTTSStart;
@property (nonatomic) bool textRequest;
@property (nonatomic, copy) NSDictionary *voiceTriggerEventInfo;

- (id)audioDestination;
- (id)audioSource;
- (id)bargeInModes;
- (id)deviceModel;
- (id)durationSincePreviousTTSFinish;
- (id)durationSincePreviousTTSStart;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAudioDestination:(id)arg1;
- (void)setAudioSource:(id)arg1;
- (void)setBargeInModes:(id)arg1;
- (void)setDeviceModel:(id)arg1;
- (void)setDurationSincePreviousTTSFinish:(id)arg1;
- (void)setDurationSincePreviousTTSStart:(id)arg1;
- (void)setTextRequest:(bool)arg1;
- (void)setVoiceTriggerEventInfo:(id)arg1;
- (bool)textRequest;
- (id)voiceTriggerEventInfo;

@end


@protocol VCAudioIOControllerControl <VCBasebandCodecNotifications>

@required

- (void)startClient:(VCAudioIOControllerClient *)arg1;
- (void)stopClient:(VCAudioIOControllerClient *)arg1;
- (bool)supportsVoiceActivityDetection;
- (void)updateClient:(VCAudioIOControllerClient *)arg1 settings:(const struct tagVCAudioIOControllerClientSettings { unsigned char x1; bool x2; bool x3; bool x4; }*)arg2;

@optional

- (void)invalidate;
- (void)refreshInputMetering;
- (void)refreshOutputMetering;
- (void)refreshRemoteCodecType:(unsigned int)arg1 sampleRate:(double)arg2;
- (NSDictionary *)reportingStats;
- (void)setMute:(bool)arg1 forClient:(VCAudioIOControllerClient *)arg2;

@end


@interface FTMutableClientSetupInfo : FTClientSetupInfo

@property (nonatomic) bool endpoint_extra_delay;
@property (nonatomic) float endpoint_threshold;
@property (nonatomic, copy) NSString *speech_id;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)endpoint_extra_delay;
- (float)endpoint_threshold;
- (id)init;
- (void)setEndpoint_extra_delay:(bool)arg1;
- (void)setEndpoint_threshold:(float)arg1;
- (void)setSpeech_id:(id)arg1;
- (id)speech_id;

@end

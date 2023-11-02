
@interface FTMutableFinishAudio : FTFinishAudio

@property (nonatomic, copy) NSArray *features_at_endpoint;
@property (nonatomic) int packet_count;
@property (nonatomic, copy) NSArray *server_feature_latency_distribution;
@property (nonatomic) float total_audio_recorded_seconds;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)features_at_endpoint;
- (id)init;
- (int)packet_count;
- (id)server_feature_latency_distribution;
- (void)setFeatures_at_endpoint:(id)arg1;
- (void)setPacket_count:(int)arg1;
- (void)setServer_feature_latency_distribution:(id)arg1;
- (void)setTotal_audio_recorded_seconds:(float)arg1;
- (float)total_audio_recorded_seconds;

@end

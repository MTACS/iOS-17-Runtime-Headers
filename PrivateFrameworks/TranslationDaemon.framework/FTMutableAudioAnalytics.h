
@interface FTMutableAudioAnalytics : FTAudioAnalytics

@property (nonatomic, copy) NSArray *acoustic_features;
@property (nonatomic, copy) NSArray *speech_recognition_features;

- (id)acoustic_features;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setAcoustic_features:(id)arg1;
- (void)setSpeech_recognition_features:(id)arg1;
- (id)speech_recognition_features;

@end

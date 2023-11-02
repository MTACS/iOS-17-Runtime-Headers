
@interface QSSMutableErrorBlamerRequest : QSSErrorBlamerRequest

@property (nonatomic, copy) NSArray *audio_packets;
@property (nonatomic, copy) NSArray *contextual_text;
@property (nonatomic) double latitude;
@property (nonatomic, copy) NSString *left_context;
@property (nonatomic) double longitude;
@property (nonatomic, copy) NSString *ref_transcript;
@property (nonatomic, copy) NSString *right_context;
@property (nonatomic, copy) QSSStartSpeechRequest *start_speech_request;
@property (nonatomic, copy) QSSUserAcousticProfile *user_acoustic_profile;
@property (nonatomic, copy) QSSUserLanguageProfile *user_language_profile;

- (id)audio_packets;
- (id)contextual_text;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (double)latitude;
- (id)left_context;
- (double)longitude;
- (id)ref_transcript;
- (id)right_context;
- (void)setAudio_packets:(id)arg1;
- (void)setContextual_text:(id)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLeft_context:(id)arg1;
- (void)setLongitude:(double)arg1;
- (void)setRef_transcript:(id)arg1;
- (void)setRight_context:(id)arg1;
- (void)setStart_speech_request:(id)arg1;
- (void)setUser_acoustic_profile:(id)arg1;
- (void)setUser_language_profile:(id)arg1;
- (id)start_speech_request;
- (id)user_acoustic_profile;
- (id)user_language_profile;

@end

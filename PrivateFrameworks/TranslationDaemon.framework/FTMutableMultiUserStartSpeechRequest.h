
@interface FTMutableMultiUserStartSpeechRequest : FTMultiUserStartSpeechRequest

@property (nonatomic, copy) NSString *primary_speech_id;
@property (nonatomic, copy) FTStartSpeechRequest *start_speech_request;
@property (nonatomic, copy) NSArray *user_parameters;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)primary_speech_id;
- (void)setPrimary_speech_id:(id)arg1;
- (void)setStart_speech_request:(id)arg1;
- (void)setUser_parameters:(id)arg1;
- (id)start_speech_request;
- (id)user_parameters;

@end

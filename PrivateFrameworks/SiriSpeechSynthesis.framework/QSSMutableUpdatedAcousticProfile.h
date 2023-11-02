
@interface QSSMutableUpdatedAcousticProfile : QSSUpdatedAcousticProfile

@property (nonatomic) int return_code;
@property (nonatomic, copy) NSString *return_str;
@property (nonatomic, copy) NSString *session_id;
@property (nonatomic, copy) NSString *speech_id;
@property (nonatomic, copy) QSSUserAcousticProfile *updated_acoustic_profile;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (int)return_code;
- (id)return_str;
- (id)session_id;
- (void)setReturn_code:(int)arg1;
- (void)setReturn_str:(id)arg1;
- (void)setSession_id:(id)arg1;
- (void)setSpeech_id:(id)arg1;
- (void)setUpdated_acoustic_profile:(id)arg1;
- (id)speech_id;
- (id)updated_acoustic_profile;

@end


@interface QSSMutableStartBatchRecoverRequest : QSSStartBatchRecoverRequest

@property (nonatomic, copy) NSArray *apg_ids;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *session_id;
@property (nonatomic, copy) NSString *speech_id;

- (id)apg_ids;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)language;
- (id)session_id;
- (void)setApg_ids:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setSession_id:(id)arg1;
- (void)setSpeech_id:(id)arg1;
- (id)speech_id;

@end

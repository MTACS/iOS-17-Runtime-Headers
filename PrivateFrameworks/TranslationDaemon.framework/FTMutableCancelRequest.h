
@interface FTMutableCancelRequest : FTCancelRequest

@property (nonatomic, copy) NSString *reason;
@property (nonatomic, copy) NSString *session_id;
@property (nonatomic, copy) NSString *speech_id;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)reason;
- (id)session_id;
- (void)setReason:(id)arg1;
- (void)setSession_id:(id)arg1;
- (void)setSpeech_id:(id)arg1;
- (id)speech_id;

@end

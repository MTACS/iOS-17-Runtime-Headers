
@interface FTMutableBatchRecoverFinalResponse : FTBatchRecoverFinalResponse

@property (nonatomic) int error_code;
@property (nonatomic, copy) NSString *error_str;
@property (nonatomic) int num_of_processed;
@property (nonatomic) int num_of_requested;
@property (nonatomic) int num_of_succeeded;
@property (nonatomic, copy) NSString *session_id;
@property (nonatomic, copy) NSString *speech_id;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)error_code;
- (id)error_str;
- (id)init;
- (int)num_of_processed;
- (int)num_of_requested;
- (int)num_of_succeeded;
- (id)session_id;
- (void)setError_code:(int)arg1;
- (void)setError_str:(id)arg1;
- (void)setNum_of_processed:(int)arg1;
- (void)setNum_of_requested:(int)arg1;
- (void)setNum_of_succeeded:(int)arg1;
- (void)setSession_id:(id)arg1;
- (void)setSpeech_id:(id)arg1;
- (id)speech_id;

@end

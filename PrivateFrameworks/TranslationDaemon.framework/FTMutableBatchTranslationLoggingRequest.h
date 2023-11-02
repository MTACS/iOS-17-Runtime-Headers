
@interface FTMutableBatchTranslationLoggingRequest : FTBatchTranslationLoggingRequest

@property (nonatomic, copy) NSString *session_id;
@property (nonatomic) int time_to_first_response;
@property (nonatomic) int time_to_page_complete;
@property (nonatomic) int time_to_viewport_complete;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)session_id;
- (void)setSession_id:(id)arg1;
- (void)setTime_to_first_response:(int)arg1;
- (void)setTime_to_page_complete:(int)arg1;
- (void)setTime_to_viewport_complete:(int)arg1;
- (int)time_to_first_response;
- (int)time_to_page_complete;
- (int)time_to_viewport_complete;

@end

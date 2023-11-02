
@interface FTMutableBatchTranslationRequest : FTBatchTranslationRequest

@property (nonatomic, copy) NSString *app_id;
@property (nonatomic) bool is_partial;
@property (nonatomic) long long opt_in_status;
@property (nonatomic, copy) FTTranslationOptions *options;
@property (nonatomic, copy) NSArray *paragraphs;
@property (nonatomic, copy) NSString *request_id;
@property (nonatomic, copy) NSString *session_id;
@property (nonatomic, copy) NSString *source_language;
@property (nonatomic, copy) NSString *target_language;
@property (nonatomic, copy) NSString *task;
@property (nonatomic, copy) NSString *url;

- (id)app_id;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (bool)is_partial;
- (long long)opt_in_status;
- (id)options;
- (id)paragraphs;
- (id)request_id;
- (id)session_id;
- (void)setApp_id:(id)arg1;
- (void)setIs_partial:(bool)arg1;
- (void)setOpt_in_status:(long long)arg1;
- (void)setOptions:(id)arg1;
- (void)setParagraphs:(id)arg1;
- (void)setRequest_id:(id)arg1;
- (void)setSession_id:(id)arg1;
- (void)setSource_language:(id)arg1;
- (void)setTarget_language:(id)arg1;
- (void)setTask:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)source_language;
- (id)target_language;
- (id)task;
- (id)url;

@end


@interface QSSMutableBatchTranslationFeedbackRequest : QSSBatchTranslationFeedbackRequest

@property (nonatomic, copy) NSString *app_id;
@property (nonatomic, copy) NSString *device_type;
@property (nonatomic, copy) NSString *errors;
@property (nonatomic, copy) NSString *os_version;
@property (nonatomic, copy) NSString *safari_version;
@property (nonatomic, copy) NSString *session_id;
@property (nonatomic, copy) NSString *source_content;
@property (nonatomic, copy) NSString *source_language;
@property (nonatomic, copy) NSString *target_language;
@property (nonatomic, copy) NSString *translated_content;
@property (nonatomic, copy) NSString *url;

- (id)app_id;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)device_type;
- (id)errors;
- (id)init;
- (id)os_version;
- (id)safari_version;
- (id)session_id;
- (void)setApp_id:(id)arg1;
- (void)setDevice_type:(id)arg1;
- (void)setErrors:(id)arg1;
- (void)setOs_version:(id)arg1;
- (void)setSafari_version:(id)arg1;
- (void)setSession_id:(id)arg1;
- (void)setSource_content:(id)arg1;
- (void)setSource_language:(id)arg1;
- (void)setTarget_language:(id)arg1;
- (void)setTranslated_content:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)source_content;
- (id)source_language;
- (id)target_language;
- (id)translated_content;
- (id)url;

@end

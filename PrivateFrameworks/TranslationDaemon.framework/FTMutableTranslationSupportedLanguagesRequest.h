
@interface FTMutableTranslationSupportedLanguagesRequest : FTTranslationSupportedLanguagesRequest

@property (nonatomic, copy) NSString *request_id;
@property (nonatomic, copy) NSString *task;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)request_id;
- (void)setRequest_id:(id)arg1;
- (void)setTask:(id)arg1;
- (id)task;

@end


@interface FTMutableTranslationSupportedLanguagesResponse : FTTranslationSupportedLanguagesResponse

@property (nonatomic, copy) NSArray *language_pairs;
@property (nonatomic, copy) NSString *request_id;
@property (nonatomic) int return_code;
@property (nonatomic, copy) NSString *return_string;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)language_pairs;
- (id)request_id;
- (int)return_code;
- (id)return_string;
- (void)setLanguage_pairs:(id)arg1;
- (void)setRequest_id:(id)arg1;
- (void)setReturn_code:(int)arg1;
- (void)setReturn_string:(id)arg1;

@end

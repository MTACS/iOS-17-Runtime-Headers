
@interface QSSMutableBatchTranslationResponse : QSSBatchTranslationResponse

@property (nonatomic, copy) NSString *paragraph_id;
@property (nonatomic, copy) NSString *request_id;
@property (nonatomic) int return_code;
@property (nonatomic, copy) NSString *return_string;
@property (nonatomic, copy) NSArray *span;
@property (nonatomic, copy) NSArray *translated_sentences;
@property (nonatomic, copy) NSString *translated_text;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)paragraph_id;
- (id)request_id;
- (int)return_code;
- (id)return_string;
- (void)setParagraph_id:(id)arg1;
- (void)setRequest_id:(id)arg1;
- (void)setReturn_code:(int)arg1;
- (void)setReturn_string:(id)arg1;
- (void)setSpan:(id)arg1;
- (void)setTranslated_sentences:(id)arg1;
- (void)setTranslated_text:(id)arg1;
- (id)span;
- (id)translated_sentences;
- (id)translated_text;

@end

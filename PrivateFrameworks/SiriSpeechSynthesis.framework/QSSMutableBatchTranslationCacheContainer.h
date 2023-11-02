
@interface QSSMutableBatchTranslationCacheContainer : QSSBatchTranslationCacheContainer

@property (nonatomic, copy) NSString *request_id;
@property (nonatomic) int sentence_count;
@property (nonatomic, copy) NSArray *spans;
@property (nonatomic, copy) NSString *translated_text;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)request_id;
- (int)sentence_count;
- (void)setRequest_id:(id)arg1;
- (void)setSentence_count:(int)arg1;
- (void)setSpans:(id)arg1;
- (void)setTranslated_text:(id)arg1;
- (id)spans;
- (id)translated_text;

@end

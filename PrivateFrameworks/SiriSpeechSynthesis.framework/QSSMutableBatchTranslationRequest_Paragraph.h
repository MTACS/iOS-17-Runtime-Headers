
@interface QSSMutableBatchTranslationRequest_Paragraph : QSSBatchTranslationRequest_Paragraph

@property (nonatomic, copy) NSString *paragraph_id;
@property (nonatomic, copy) NSArray *span;
@property (nonatomic, copy) NSString *text;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)paragraph_id;
- (void)setParagraph_id:(id)arg1;
- (void)setSpan:(id)arg1;
- (void)setText:(id)arg1;
- (id)span;
- (id)text;

@end

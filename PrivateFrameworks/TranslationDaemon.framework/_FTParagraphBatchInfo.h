
@interface _FTParagraphBatchInfo : NSObject {
    id /* block */  _completion;
    _LTTranslationParagraph * _paragraph;
    FTMutableBatchTranslationRequest_Paragraph * _requestParagraph;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) _LTTranslationParagraph *paragraph;
@property (nonatomic, retain) FTMutableBatchTranslationRequest_Paragraph *requestParagraph;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)paragraph;
- (id)requestParagraph;
- (void)setCompletion:(id /* block */)arg1;
- (void)setParagraph:(id)arg1;
- (void)setRequestParagraph:(id)arg1;

@end


@interface _LTBatchTextTranslationRequest : _LTTranslationRequest {
    NSArray * _paragraphs;
    id /* block */  _textHandler;
    id /* block */  _translationHandler;
}

@property (nonatomic, copy) NSArray *paragraphs;
@property (nonatomic, copy) id /* block */ textHandler;
@property (nonatomic, copy) id /* block */ translationHandler;

- (void).cxx_destruct;
- (void)_startTranslationWithService:(id)arg1 done:(id /* block */)arg2;
- (void)_translationFailedWithError:(id)arg1;
- (id)loggingType;
- (id)paragraphs;
- (void)setParagraphs:(id)arg1;
- (void)setTextHandler:(id /* block */)arg1;
- (void)setTranslationHandler:(id /* block */)arg1;
- (id /* block */)textHandler;
- (id /* block */)translationHandler;

@end

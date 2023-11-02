
@interface _LTParagraphTranslationRequest : _LTTranslationRequest {
    id /* block */  _completionHandler;
    NSArray * _ranges;
    NSString * _text;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) NSArray *ranges;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (bool)_canUseTextService;
- (void)_startTranslationWithService:(id)arg1 done:(id /* block */)arg2;
- (void)_startTranslationWithTextService:(id)arg1 done:(id /* block */)arg2;
- (void)_translationFailedWithError:(id)arg1;
- (id /* block */)completionHandler;
- (id)loggingType;
- (id)ranges;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setRanges:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (id)translationParagraph;

@end


@interface _LTTextTranslationRequest : _LTTranslationRequest <_LTSpeechTranslationDelegate> {
    id /* block */  _completionHandler;
    id /* block */  _done;
    bool  _hasCalledCompletionHandler;
    NSArray * _ignoringAttributes;
    unsigned long long  _outstandingCount;
    NSArray * _paragraphOrder;
    NSMutableDictionary * _receivedParagraphs;
    _LTTextToSpeechTranslationRequest * _request;
    NSMutableDictionary * _savedAttributes;
    NSString * _sentence;
    _LTTranslationSession * _session;
    NSAttributedString * _text;
    id /* block */  _textHandler;
    id /* block */  _textTranslationHandler;
    bool  _translationFinished;
    id /* block */  _translationHandler;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *ignoringAttributes;
@property (nonatomic, copy) NSString *sentence;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSAttributedString *text;
@property (nonatomic, copy) id /* block */ textHandler;
@property (nonatomic, copy) id /* block */ textTranslationHandler;
@property (nonatomic, copy) id /* block */ translationHandler;

- (void).cxx_destruct;
- (void)_addAlignmentAttributesToResult:(id)arg1 requestIdentifier:(id)arg2;
- (id)_alignmentAttributeKeyFromRequestIdentifier:(id)arg1 alignmentIdentifier:(id)arg2;
- (void)_callCompletionHandlersWithResult:(id)arg1 error:(id)arg2;
- (void)_constructFinalParagraphResult;
- (id)_getStoredAttributesForRequestIdentifier:(id)arg1 alignmentIdentifier:(id)arg2;
- (void)_handleParagraphResponse:(id)arg1 error:(id)arg2;
- (id)_paragraphRequestForText:(id)arg1;
- (void)_saveAttributes:(id)arg1 forRequestUniqueID:(id)arg2 alignmentIdentifier:(id)arg3;
- (void)_startTranslationWithService:(id)arg1 done:(id /* block */)arg2;
- (void)_translationFailedWithError:(id)arg1;
- (id /* block */)completionHandler;
- (id)ignoringAttributes;
- (id)loggingType;
- (id)sentence;
- (id)serviceDelegate;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setIgnoringAttributes:(id)arg1;
- (void)setSentence:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextHandler:(id /* block */)arg1;
- (void)setTextTranslationHandler:(id /* block */)arg1;
- (void)setTranslationHandler:(id /* block */)arg1;
- (id)text;
- (id /* block */)textHandler;
- (id /* block */)textTranslationHandler;
- (void)translationDidFinishWithError:(id)arg1;
- (id /* block */)translationHandler;
- (void)translatorDidTranslate:(id)arg1;

@end

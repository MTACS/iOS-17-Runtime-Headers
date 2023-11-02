
@interface _LTTextToSpeechTranslationRequest : _LTTranslationRequest <_LTSpeechTranslationDelegate> {
    <_LTSpeechTranslationDelegate> * _delegate;
    id /* block */  _done;
    NSObject<OS_dispatch_queue> * _queue;
    <_LTTranslationService> * _service;
    NSString * _text;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_LTSpeechTranslationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (void)_startTranslationWithService:(id)arg1 done:(id /* block */)arg2;
- (void)_translationFailedWithError:(id)arg1;
- (id)delegate;
- (id)initWithLocalePair:(id)arg1;
- (id)initWithLocalePair:(id)arg1 suggestedUniqueID:(id)arg2;
- (id)initWithSourceLocale:(id)arg1 targetLocale:(id)arg2;
- (id)initWithSourceLocale:(id)arg1 targetLocale:(id)arg2 suggestedUniqueID:(id)arg3;
- (id)loggingType;
- (id)nativeAudioFormat;
- (id)requestContext;
- (void)setDelegate:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (void)translationDidFinishWithError:(id)arg1;
- (void)translatorDidTranslate:(id)arg1;

@end

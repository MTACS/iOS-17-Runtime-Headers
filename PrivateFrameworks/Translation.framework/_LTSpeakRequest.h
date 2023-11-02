
@interface _LTSpeakRequest : _LTTranslationRequest {
    id /* block */  _completionHandler;
    NSString * _text;
    double  _ttsPlaybackRate;
    id /* block */  _ttsProgressHandler;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) NSString *text;
@property (nonatomic) double ttsPlaybackRate;
@property (nonatomic, copy) id /* block */ ttsProgressHandler;

- (void).cxx_destruct;
- (void)_startTranslationWithService:(id)arg1 done:(id /* block */)arg2;
- (id /* block */)completionHandler;
- (id)initWithLocalePair:(id)arg1;
- (id)requestContext;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setText:(id)arg1;
- (void)setTtsPlaybackRate:(double)arg1;
- (void)setTtsProgressHandler:(id /* block */)arg1;
- (id)text;
- (double)ttsPlaybackRate;
- (id /* block */)ttsProgressHandler;
- (void)ttsProgressed:(id)arg1;

@end

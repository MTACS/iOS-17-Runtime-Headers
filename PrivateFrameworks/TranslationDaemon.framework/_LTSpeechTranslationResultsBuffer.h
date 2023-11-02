
@interface _LTSpeechTranslationResultsBuffer : NSObject <_LTSpeechTranslationDelegate> {
    <_LTSpeechTranslationDelegate> * _delegate;
    bool  _didFinish;
    NSError * _error;
    bool  _isBuffering;
    NSMutableDictionary * _lastASRResults;
    _LTTranslationResult * _translationResult;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_LTSpeechTranslationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (bool)hasFailed;
- (bool)hasResults;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)speechRecognitionResult:(id)arg1;
- (void)stopBuffering;
- (void)translationDidFinishWithError:(id)arg1;
- (void)translatorDidTranslate:(id)arg1;

@end

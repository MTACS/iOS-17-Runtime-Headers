
@interface _LTCombinedEngine : NSObject <_LTSpeechTranslationDelegate, _LTTranslationEngine> {
    <_LTSpeechTranslationDelegate> * _delegate;
    _LTSpeechTranslationResultsBuffer * _offlineDelegateBuffer;
    <_LTTranslationEngine> * _offlineEngine;
    <_LTTranslationEngine> * _onlineEngine;
    bool  _onlineTranslationStarted;
    bool  _serverCompleted;
    bool  _translationEnded;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _LTSpeechTranslationResultsBuffer *offlineDelegateBuffer;
@property (nonatomic, retain) <_LTTranslationEngine> *offlineEngine;
@property (nonatomic, retain) <_LTTranslationEngine> *onlineEngine;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addSpeechAudioData:(id)arg1;
- (void)cancelSpeechTranslation;
- (void)endAudio;
- (void)endpoint;
- (void)hybridEndpointerFoundEndpoint;
- (id)init;
- (id)offlineDelegateBuffer;
- (id)offlineEngine;
- (id)onlineEngine;
- (void)preheatAsynchronously:(bool)arg1 withContext:(id)arg2;
- (void)serverEndpointerFeatures:(id)arg1 locale:(id)arg2;
- (void)setLanguagesRecognized:(id)arg1 context:(id)arg2;
- (void)setOfflineDelegateBuffer:(id)arg1;
- (void)setOfflineEngine:(id)arg1;
- (void)setOnlineEngine:(id)arg1;
- (void)speak:(id)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;
- (void)speechRecognitionResult:(id)arg1;
- (void)startSpeechTranslationWithContext:(id)arg1 delegate:(id)arg2;
- (void)startTextToSpeechTranslationWithContext:(id)arg1 text:(id)arg2 delegate:(id)arg3;
- (void)translate:(id)arg1 withContext:(id)arg2 paragraphResult:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)translateSentence:(id)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;
- (bool)translatesPair:(id)arg1;
- (void)translationDidFinishWithError:(id)arg1;
- (void)translatorDidTranslate:(id)arg1;

@end


@protocol _LTTranslationEngine <NSObject>

@required

- (void)addSpeechAudioData:(NSData *)arg1;
- (void)cancelSpeechTranslation;
- (void)endAudio;
- (void)endpoint;
- (void)preheatAsynchronously:(bool)arg1 withContext:(_LTTranslationContext *)arg2;
- (void)speak:(void *)arg1 withContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, _LTTranslationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _LTAudioData *, NSError *, void*
- (void)startSpeechTranslationWithContext:(_LTTranslationContext *)arg1 delegate:(id <_LTSpeechTranslationDelegate>)arg2;
- (void)translate:(void *)arg1 withContext:(void *)arg2 paragraphResult:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 16: NSArray *, _LTTranslationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, _LTTranslationResult *, NSError *, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (void)translateSentence:(void *)arg1 withContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, _LTTranslationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _LTTranslationResult *, NSError *, void*
- (bool)translatesPair:(_LTLocalePair *)arg1;

@optional

- (void)setLanguagesRecognized:(_LTLanguageDetectionResult *)arg1 context:(_LTTranslationContext *)arg2;
- (void)startTextToSpeechTranslationWithContext:(_LTTranslationContext *)arg1 text:(NSString *)arg2 delegate:(id <_LTSpeechTranslationDelegate>)arg3;

@end

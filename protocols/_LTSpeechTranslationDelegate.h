
@protocol _LTSpeechTranslationDelegate <NSObject>

@optional

- (void)assetResponseWithProgress:(NSArray *)arg1 finished:(bool)arg2 error:(NSError *)arg3;
- (void)cancel;
- (void)hybridEndpointerFoundEndpoint;
- (void)languageDetectionCompleted;
- (void)languageDetectionResult:(_LTLanguageDetectionResult *)arg1;
- (void)languageInstallProgressed:(NSArray *)arg1 error:(NSError *)arg2;
- (void)paragraphTranslation:(NSString *)arg1 result:(_LTTranslationResult *)arg2 error:(NSError *)arg3;
- (void)serverEndpointerFeatures:(_LTServerEndpointerFeatures *)arg1 locale:(NSLocale *)arg2;
- (void)speechActivityDetected;
- (void)speechRecognitionResult:(_LTSpeechRecognitionResult *)arg1;
- (void)translationDidFinishWithError:(NSError *)arg1;
- (void)translatorDidTranslate:(_LTTranslationResult *)arg1;
- (void)ttsProgressed:(_LTWordTimingInfo *)arg1;

@end


@protocol AFSpeechParametersMutating <NSObject>

@required

- (void)setApplicationName:(NSString *)arg1;
- (void)setCensorSpeech:(bool)arg1;
- (void)setDetectUtterances:(bool)arg1;
- (void)setFarField:(bool)arg1;
- (void)setInputOrigin:(NSString *)arg1;
- (void)setInteractionIdentifier:(NSString *)arg1;
- (void)setJitGrammar:(NSArray *)arg1;
- (void)setLanguage:(NSString *)arg1;
- (void)setLocation:(CLLocation *)arg1;
- (void)setLoggingContext:(NSArray *)arg1;
- (void)setMaximumRecognitionDuration:(double)arg1;
- (void)setModelOverrideURL:(NSURL *)arg1;
- (void)setNarrowband:(bool)arg1;
- (void)setOriginalAudioFileURL:(NSURL *)arg1;
- (void)setOverrides:(NSDictionary *)arg1;
- (void)setProfile:(NSData *)arg1;
- (void)setSecureOfflineOnly:(bool)arg1;
- (void)setShouldStoreAudioOnDevice:(bool)arg1;
- (void)setTask:(NSString *)arg1;

@end

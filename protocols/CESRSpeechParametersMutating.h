
@protocol CESRSpeechParametersMutating <NSObject>

@required

- (void)setApplicationName:(NSString *)arg1;
- (void)setAsrId:(NSUUID *)arg1;
- (void)setCensorSpeech:(bool)arg1;
- (void)setCodec:(NSString *)arg1;
- (void)setContinuousListening:(bool)arg1;
- (void)setDeliverEagerPackage:(bool)arg1;
- (void)setDetectUtterances:(bool)arg1;
- (void)setDictationUIInteractionIdentifier:(NSString *)arg1;
- (void)setDisableDeliveringAsrFeatures:(bool)arg1;
- (void)setEnableAutoPunctuation:(bool)arg1;
- (void)setEnableEmojiRecognition:(bool)arg1;
- (void)setEnableVoiceCommands:(bool)arg1;
- (void)setEndpointStart:(double)arg1;
- (void)setFarField:(bool)arg1;
- (void)setInputOrigin:(NSString *)arg1;
- (void)setIsSpeechAPIRequest:(bool)arg1;
- (void)setJitGrammar:(NSArray *)arg1;
- (void)setLanguage:(NSString *)arg1;
- (void)setLocation:(CLLocation *)arg1;
- (void)setLoggingContext:(NSArray *)arg1;
- (void)setMaximumRecognitionDuration:(double)arg1;
- (void)setModelOverrideURL:(NSURL *)arg1;
- (void)setNarrowband:(bool)arg1;
- (void)setOriginalAudioFileURL:(NSURL *)arg1;
- (void)setOverrides:(NSDictionary *)arg1;
- (void)setPostfixText:(NSString *)arg1;
- (void)setPowerContext:(AFPowerContextPolicy *)arg1;
- (void)setPrefixText:(NSString *)arg1;
- (void)setProfile:(NSData *)arg1;
- (void)setRecognitionStart:(double)arg1;
- (void)setRequestIdentifier:(NSString *)arg1;
- (void)setSecureOfflineOnly:(bool)arg1;
- (void)setSelectedText:(NSString *)arg1;
- (void)setSharedUserInfos:(NSArray *)arg1;
- (void)setShouldGenerateVoiceCommandCandidates:(bool)arg1;
- (void)setShouldHandleCapitalization:(bool)arg1;
- (void)setShouldStoreAudioOnDevice:(bool)arg1;
- (void)setTask:(NSString *)arg1;

@end

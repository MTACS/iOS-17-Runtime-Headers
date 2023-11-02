
@protocol SUICVoiceSelectionDataProviding <NSObject>

@required

- (NSString *)recognitionLanguageCode;
- (void)setRecognitionLanguageCode:(NSString *)arg1;
- (void)setVoiceSelectionDataProviderObserver:(id <SUICVoiceSelectionDataProviderObserving>)arg1;
- (<SUICVoiceSelectionDataProviderObserving> *)voiceSelectionDataProviderObserver;
- (SUICVoiceSelectionVoiceCollection *)voiceSelectionVoiceCollection;

@end

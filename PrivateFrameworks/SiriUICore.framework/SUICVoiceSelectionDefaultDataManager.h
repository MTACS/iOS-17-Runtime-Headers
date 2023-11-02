
@interface SUICVoiceSelectionDefaultDataManager : NSObject <SUICVoiceSelectionDataManaging> {
    NSDictionary * _currentVoiceSelectionForOutputLanguage;
    NSString * _outputLanguage;
    NSString * _recognitionLanguageCode;
    <SUICVoiceSelectionDataProviderObserving> * _voiceSelectionDataProviderObserver;
    SUICVoiceSelectionVoiceCollection * _voiceSelectionVoiceCollection;
}

@property (nonatomic, copy) NSDictionary *currentVoiceSelectionForOutputLanguage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *outputLanguage;
@property (nonatomic, copy) NSString *recognitionLanguageCode;
@property (readonly) Class superclass;
@property (nonatomic) <SUICVoiceSelectionDataProviderObserving> *voiceSelectionDataProviderObserver;
@property (nonatomic, readonly, copy) SUICVoiceSelectionVoiceCollection *voiceSelectionVoiceCollection;

- (void).cxx_destruct;
- (void)changeSiriDialectLanguageToLanguageIdentifiedByLanguageCode:(id)arg1 completion:(id /* block */)arg2;
- (void)changeSiriVoiceToVoice:(id)arg1 completion:(id /* block */)arg2;
- (id)currentVoiceSelectionForOutputLanguage;
- (id)dialectLanguageCodeForLanguage:(id)arg1;
- (id)init;
- (bool)isVoiceSelected:(id)arg1;
- (id)outputLanguage;
- (id)recognitionLanguageCode;
- (void)regenerateVoiceCollectionForRecognitionLanguageCode:(id)arg1 outputLanguageCode:(id)arg2;
- (void)setCurrentVoiceSelectionForOutputLanguage:(id)arg1;
- (void)setOutputLanguage:(id)arg1;
- (void)setRecognitionLanguageCode:(id)arg1;
- (void)setVoiceSelectionDataProviderObserver:(id)arg1;
- (void)setVoiceSelectionVoiceCollection:(id)arg1;
- (id)voiceSelectionDataProviderObserver;
- (id)voiceSelectionVoiceCollection;
- (id)voicesForRecognitionLanguageCode:(id)arg1 outputLanguageCode:(id)arg2;

@end

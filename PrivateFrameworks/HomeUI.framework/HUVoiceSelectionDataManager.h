
@interface HUVoiceSelectionDataManager : SUICVoiceSelectionDefaultDataManager {
    NSString * _inputLanguageCode;
    NSArray * _listOfVoices;
}

@property (nonatomic, copy) NSString *inputLanguageCode;
@property (nonatomic, retain) NSArray *listOfVoices;

- (void).cxx_destruct;
- (id)initWithInputLanguageCode:(id)arg1 listOfVoices:(id)arg2;
- (id)inputLanguageCode;
- (id)listOfVoices;
- (void)setInputLanguageCode:(id)arg1;
- (void)setListOfVoices:(id)arg1;
- (id)voicesForRecognitionLanguageCode:(id)arg1 outputLanguageCode:(id)arg2;

@end

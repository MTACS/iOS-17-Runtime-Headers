
@interface AssistantVoiceViewModel : NSObject {
    AFVoiceInfo * _currentVoice;
    AFVoiceInfo * _inProgressVoice;
    NSString * _languageGroupFooterText;
    NSSet * _languageOptions;
    NSString * _selectedLanguage;
    bool  _shouldShowVoiceVariationGroup;
    bool  _spinningOnLanguage;
    NSString * _voiceVariationGroupFooterText;
    NSString * _voiceVariationToCheckMark;
    NSString * _voiceVariationToSpin;
}

@property (nonatomic, retain) AFVoiceInfo *currentVoice;
@property (nonatomic, retain) AFVoiceInfo *inProgressVoice;
@property (nonatomic, copy) NSString *languageGroupFooterText;
@property (nonatomic, copy) NSSet *languageOptions;
@property (nonatomic, copy) NSString *selectedLanguage;
@property (nonatomic) bool shouldShowVoiceVariationGroup;
@property (nonatomic) bool spinningOnLanguage;
@property (nonatomic, copy) NSString *voiceVariationGroupFooterText;
@property (nonatomic, copy) NSString *voiceVariationToCheckMark;
@property (nonatomic, copy) NSString *voiceVariationToSpin;

- (void).cxx_destruct;
- (id)currentVoice;
- (id)inProgressVoice;
- (id)languageGroupFooterText;
- (id)languageOptions;
- (id)selectedLanguage;
- (void)setCurrentVoice:(id)arg1;
- (void)setInProgressVoice:(id)arg1;
- (void)setLanguageGroupFooterText:(id)arg1;
- (void)setLanguageOptions:(id)arg1;
- (void)setSelectedLanguage:(id)arg1;
- (void)setShouldShowVoiceVariationGroup:(bool)arg1;
- (void)setSpinningOnLanguage:(bool)arg1;
- (void)setVoiceVariationGroupFooterText:(id)arg1;
- (void)setVoiceVariationToCheckMark:(id)arg1;
- (void)setVoiceVariationToSpin:(id)arg1;
- (bool)shouldShowVoiceVariationGroup;
- (bool)spinningOnLanguage;
- (id)voiceVariationGroupFooterText;
- (id)voiceVariationToCheckMark;
- (id)voiceVariationToSpin;

@end

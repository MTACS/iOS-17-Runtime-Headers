
@interface SUICVoiceSelectionVoiceCollection : NSObject <NSCopying> {
    NSSet * _alternativeVoices;
    AFVoiceInfo * _currentVoice;
    NSArray * _dialectLanguageCodes;
    NSString * _languageCode;
}

@property (nonatomic, readonly, copy) NSSet *alternativeVoices;
@property (nonatomic, readonly, copy) AFVoiceInfo *currentVoice;
@property (nonatomic, readonly, copy) NSArray *dialectLanguageCodes;
@property (nonatomic, readonly, copy) NSString *languageCode;

- (void).cxx_destruct;
- (id)alternativeVoices;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentVoice;
- (id)dialectLanguageCodes;
- (id)initWithLanguageCode:(id)arg1 dialectLanguageCodes:(id)arg2 currentVoice:(id)arg3 alternativeVoices:(id)arg4;
- (id)languageCode;
- (id)randomVoice;

@end

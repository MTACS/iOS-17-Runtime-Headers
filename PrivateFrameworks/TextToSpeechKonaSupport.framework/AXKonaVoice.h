
@interface AXKonaVoice : NSObject {
    long long  _eciVoiceNumber;
    unsigned long long  _konaLanguage;
    NSString * _languageCode;
    NSString * _name;
    AXKonaParameters * _parameters;
}

@property (nonatomic) long long eciVoiceNumber;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) unsigned long long konaLanguage;
@property (nonatomic, retain) NSString *languageCode;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) AXKonaParameters *parameters;

- (void).cxx_destruct;
- (long long)eciVoiceNumber;
- (id)identifier;
- (unsigned long long)konaLanguage;
- (id)languageCode;
- (id)name;
- (id)parameters;
- (void)setEciVoiceNumber:(long long)arg1;
- (void)setKonaLanguage:(unsigned long long)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setName:(id)arg1;
- (void)setParameters:(id)arg1;

@end


@interface TTSLocaleUtilities : NSObject {
    NSDictionary * _canonicalLanguageCodeVoiceNamesData;
    NSMutableDictionary * _fallbackSampleStringCache;
    NSDictionary * _generalLanguageCodeData;
    NSDictionary * _voiceIdSampleStringData;
}

@property (nonatomic, retain) NSDictionary *canonicalLanguageCodeVoiceNamesData;
@property (nonatomic, retain) NSMutableDictionary *fallbackSampleStringCache;
@property (nonatomic, retain) NSDictionary *generalLanguageCodeData;
@property (nonatomic, retain) NSDictionary *voiceIdSampleStringData;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)canonicalLanguageCodeVoiceNamesData;
- (id)defaultVoiceIdentifierForGeneralLanguageCode:(id)arg1;
- (id)defaultVoiceIdentifierForVoiceName:(id)arg1;
- (id)fallbackSampleStringCache;
- (id)generalLanguageCodeData;
- (id)init;
- (id)sampleStringForVoiceIdentifier:(id)arg1;
- (void)setCanonicalLanguageCodeVoiceNamesData:(id)arg1;
- (void)setFallbackSampleStringCache:(id)arg1;
- (void)setGeneralLanguageCodeData:(id)arg1;
- (void)setVoiceIdSampleStringData:(id)arg1;
- (id)voiceIdSampleStringData;

@end

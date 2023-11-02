
@interface TTSAlternativeVoices : NSObject

+ (bool)isCombinedVocalizerVoiceIdentifier:(id)arg1;
+ (bool)isCompactVocalizerVoiceIdentifier:(id)arg1;
+ (bool)isNeuralAXSiriVoiceIdentifier:(id)arg1;
+ (bool)isNeuralSiriVoiceIdentifier:(id)arg1;
+ (bool)isOldSiriVoiceIdentifier:(id)arg1;
+ (bool)isPersonalVoiceIdentifier:(id)arg1;
+ (bool)isSiriVoiceIdentifier:(id)arg1;
+ (bool)isVocalizerVoiceIdentifier:(id)arg1;
+ (id)nameForVoiceIdentifier:(id)arg1;

@end

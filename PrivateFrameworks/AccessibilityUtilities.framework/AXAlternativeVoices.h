
@interface AXAlternativeVoices : NSObject

+ (id)sharedInstance;

- (bool)isNeuralSiriVoiceIdentifier:(id)arg1;
- (bool)isOldSiriVoiceIdentifier:(id)arg1;
- (bool)isSiriVoiceIdentifier:(id)arg1;
- (id)nameForVoiceIdentifier:(id)arg1;

@end

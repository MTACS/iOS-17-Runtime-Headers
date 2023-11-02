
@interface TTSPhonemeSupport : NSObject

+ (id)_getPhonemeMapForSynth:(id)arg1 language:(id)arg2;
+ (id)_phonemesFromIPA:(id)arg1 language:(id)arg2 synth:(id)arg3;
+ (id)applebetPhonemesFromIPA:(id)arg1;
+ (id)applebetPhonemesFromLH:(id)arg1;
+ (id)eloquencePhonemesFromIPA:(id)arg1 language:(id)arg2;
+ (id)lhPhonemesFromIPA:(id)arg1 language:(id)arg2;
+ (id)phonemesFromIPA:(id)arg1 language:(id)arg2;
+ (id)supportedIPAPhonemeLanguages;

@end

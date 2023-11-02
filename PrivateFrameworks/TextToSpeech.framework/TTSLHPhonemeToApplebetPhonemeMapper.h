
@interface TTSLHPhonemeToApplebetPhonemeMapper : NSObject

+ (id /* block */)_acceptRule;
+ (id)_initializeRules;
+ (id /* block */)_leftRaisingContextRule;
+ (id)_phonemeArray:(id)arg1;
+ (id)_phonemeRules;
+ (id)_phonoMatch:(id)arg1 match:(id)arg2 matchpos:(int)arg3 count:(int)arg4;
+ (id)_phonoTranslation:(id)arg1;
+ (id)_retrieveRegularExpression:(id)arg1;
+ (id /* block */)_rightRaisingContextRule;
+ (id /* block */)_uberLeftRaisingContextRule;
+ (id /* block */)_uberRightRaisingContextRule;
+ (id /* block */)_uberUberRightRaisingContextRule;
+ (id /* block */)_uberUberUberRightRaisingContextRule;
+ (id)convertLHToApplebet:(id)arg1;

@end

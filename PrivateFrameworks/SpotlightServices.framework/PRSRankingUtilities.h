
@interface PRSRankingUtilities : NSObject

+ (bool)aToZInString:(id)arg1;
+ (id)bundleIDForCategory:(id)arg1;
+ (bool)caseAndDiacriticInsensitiveLocalizedString:(id)arg1 containsString:(id)arg2 locale:(id)arg3;
+ (bool)caseAndDiacriticInsensitiveLocalizedString:(id)arg1 hasPrefix:(id)arg2 locale:(id)arg3;
+ (bool)caseAndDiacriticInsensitiveLocalizedString:(id)arg1 isEqualToString:(id)arg2;
+ (id)categoryForBundleID:(id)arg1;
+ (void)computeDateCountsForDates:(id)arg1 countLastYear:(unsigned long long*)arg2 countLastMonth:(unsigned long long*)arg3 countLastWeek:(unsigned long long*)arg4 countLastDay:(unsigned long long*)arg5 currentTime:(double)arg6;
+ (bool)digitInString:(id)arg1;
+ (float)floatValue:(float)arg1 withSigFigs:(long long)arg2;
+ (id)hyphensCharacterSet;
+ (bool)multiWordString:(id)arg1 hasPrefix:(id)arg2;
+ (id)onlyPotentialPhoneNumbersInString:(id)arg1;
+ (bool)somePotentialPhoneNumbersInString:(id)arg1;
+ (bool)userQueryHasOnlySingleCharacterTerms:(id)arg1;
+ (bool)userQueryTermsHasOnlySingleCharacterTerms:(id)arg1;

@end

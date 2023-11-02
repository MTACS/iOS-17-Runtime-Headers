
@interface IRCandicateClassificationEligibility : NSObject

+ (long long)_eligibilityTypeFromEvent:(id)arg1;
+ (id)_generateSettingsStruct:(id)arg1;
+ (long long)classificationEligibilityForCandidate:(id)arg1 withHistoryEventsAsc:(id)arg2 systemState:(id)arg3;

@end

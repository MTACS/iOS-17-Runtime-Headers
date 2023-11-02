
@interface ATXHomeScreenLogUploaderUtilities : NSObject

+ (bool)_isDwellLongEnoughForPseudoTap:(id)arg1 endingEventTime:(double)arg2;
+ (id)_keyByConcatenatingAccumulatorKey:(id)arg1 withString:(id)arg2;
+ (id)abGroup;
+ (void)add:(unsigned long long)arg1 toDictionary:(id)arg2 forKey:(id)arg3;
+ (void)add:(unsigned long long)arg1 toTwoLevelDictionary:(id)arg2 forKey1:(id)arg3 key2:(id)arg4;
+ (id)countsForRotationEngagementStatusHistory:(id)arg1;
+ (void)incrementDictionary:(id)arg1 forKey:(id)arg2;
+ (void)incrementTwoLevelDictionary:(id)arg1 forKey1:(id)arg2 key2:(id)arg3;
+ (bool)isFirstPartyApp:(id)arg1;
+ (bool)isRotationSessionDueToProactive:(id)arg1;
+ (bool)isRotationSessionDueToUserScroll:(id)arg1;
+ (bool)isValidAppLaunch:(id)arg1;
+ (id)keyByConcatenatingAccumulatorKey:(id)arg1 withLocation:(unsigned long long)arg2;
+ (id)keyByConcatenatingAccumulatorKey:(id)arg1 withSize:(unsigned long long)arg2;
+ (id)stackShownEventsForPseudoTapIfPossible:(id)arg1 currentEvent:(id)arg2;
+ (int)suggestionReasonForSuggestionLayout:(id)arg1;

@end

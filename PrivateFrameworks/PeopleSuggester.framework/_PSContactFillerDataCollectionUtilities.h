
@interface _PSContactFillerDataCollectionUtilities : NSObject

+ (void)calculateNormContantsGivenInteractionStore:(id)arg1 normConstants:(id)arg2;
+ (id)calculateNormalizedCallingFrequencyForContactGivenContactIdPredicate:(id)arg1 totalFrequency:(id)arg2 numberOfDaysToLookBack:(long long)arg3 timeOfShareInteraction:(id)arg4 interactionStore:(id)arg5 direction:(id)arg6;
+ (id)calculateNormalizedShareFrequencyForContactGivenContactIdPredicate:(id)arg1 totalFrequency:(id)arg2 numberOfDaysToLookBack:(long long)arg3 timeOfShareInteraction:(id)arg4 interactionStore:(id)arg5;
+ (id)calculateNormalizedTextingFrequencyForContactGivenContactIdPredicate:(id)arg1 totalFrequency:(id)arg2 numberOfDaysToLookBack:(long long)arg3 timeOfShareInteraction:(id)arg4 interactionStore:(id)arg5 direction:(id)arg6;
+ (int)calculateTimeBucketGivenInteraction:(id)arg1 timeOfShareInteraction:(id)arg2;
+ (int)calculateTimeSinceLastCallForContactGivenContactIdPredicate:(id)arg1 direction:(id)arg2 timeOfShareInteraction:(id)arg3 interactionCache:(id)arg4;
+ (int)calculateTimeSinceLastShareForContactGivenContactIdPredicate:(id)arg1 timeOfShareInteraction:(id)arg2 interactionCache:(id)arg3;
+ (int)calculateTimeSinceLastTextForContactGivenContactIdPredicate:(id)arg1 direction:(id)arg2 timeOfShareInteraction:(id)arg3 interactionCache:(id)arg4;
+ (unsigned int)contactFillerBucketedValue:(unsigned long long)arg1;
+ (bool)doesSuggestionProxyMatch:(id)arg1 withInteraction:(id)arg2;
+ (bool)doesTheRecipientsMatchInInteraction1:(id)arg1 interaction2:(id)arg2;
+ (double)enforceOneSignificantFigureForDouble:(double)arg1;
+ (unsigned int)enforceOneSignificantFigureForSmallDouble:(double)arg1;
+ (void)extractFeaturesFromBehaviorRulesIntoPETMessage:(id)arg1 behaviorRules:(id)arg2 MLModelScores:(id)arg3;
+ (void)extractFeaturesFromBehaviorRulesIntoPETMessage:(id)arg1 behaviorRules:(id)arg2 contextItems:(id)arg3 ruleRankingModel:(id)arg4;
+ (void)extractFrequencyRecencyFeaturesIntoPETMessage:(id)arg1 recipientID:(id)arg2 interaction:(id)arg3 normConstants:(id)arg4 numberOfDaysToLookBack:(long long)arg5 interactionStore:(id)arg6 timeOfShareInteraction:(id)arg7 contactPropertyCache:(id)arg8 interactionCache:(id)arg9;
+ (void)extractUserFeaturesIntoPETMessage:(id)arg1 normConstants:(id)arg2 behaviorRetriever:(id)arg3;
+ (id)filterRulesBasedOnInteractionGivenRuleList:(id)arg1 interaction:(id)arg2;
+ (id)getBehaviorRulesGivenContext:(id)arg1 behaviorRetriever:(id)arg2;
+ (id)getInteractionModelScoreForEvent:(id)arg1 forInteractionRecipients:(id)arg2;
+ (id)getInteractionModelScoreForSuggestions:(id)arg1 forInteractionRecipients:(id)arg2;
+ (id)getInteractionRecipientFromInteraction:(id)arg1;
+ (id)getListOfContactsFromCashedMessagesInteraction:(id)arg1 cashedShareInteractions:(id)arg2;
+ (id)getListOfContactsInteractedInTheLastNumberOfDays:(int)arg1 interactionStore:(id)arg2 limit:(int)arg3;
+ (id)initContactPropertyCache:(id)arg1 timeOfShareInteraction:(id)arg2 interactionStore:(id)arg3;
+ (bool)recipientPredictedCorrectlyByRule:(id)arg1 interaction:(id)arg2 bundleId:(id)arg3;
+ (id)resolveUniqueContactIdGivenInteraction:(id)arg1;

@end


@interface ATXActionPredictionsProcessor : NSObject

+ (id)_contactIdentifiersReferencedByAction:(id)arg1;
+ (bool)actionPredictionsContainsAlarmAction:(id)arg1;
+ (void)addEligibleCreateAlarmIndexesToAcceptedIndexes:(id)arg1 currentDate:(id)arg2 enabledAlarms:(id)arg3 idx:(unsigned long long)arg4 params:(id)arg5 parameterCombinations:(id)arg6;
+ (void)addEligibleToggleAlarmIndexesToAcceptedIndexes:(id)arg1 currentDate:(id)arg2 disabledAlarms:(id)arg3 enabledAlarms:(id)arg4 idx:(unsigned long long)arg5 params:(id)arg6 parameterCombinations:(id)arg7;
+ (id)hourAndMinuteComponentsFromDateComponents:(id)arg1;
+ (id)indicesOfNonDuplicateScoredActions:(id)arg1;
+ (bool)isBlockedEmailAddressContainedInAddresses:(id)arg1;
+ (bool)isBlockedPhoneNumberContainedInNumbers:(id)arg1;
+ (id)removeAlarmActionsInconsistentWithAlarmAppState:(id)arg1;
+ (id)removeAlarmActionsInconsistentWithAlarmAppState:(id)arg1 enabledAlarms:(id)arg2 disabledAlarms:(id)arg3 currentDate:(id)arg4;
+ (id)removeDuplicateActionPredictions:(id)arg1;
+ (id)removeDuplicateTVActionPredictions:(id)arg1;
+ (id)removeMissingOrBlockedRecipientPredictions:(id)arg1;
+ (bool)scoredActionsAreDuplicatesWithScoredAction1:(id)arg1 scoredAction2:(id)arg2;
+ (id)userAlarms;
+ (bool)validTimeToSuggestAlarmForAlarmComponents:(id)arg1 currentDate:(id)arg2;

@end

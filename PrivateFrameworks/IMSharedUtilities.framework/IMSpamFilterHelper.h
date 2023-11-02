
@interface IMSpamFilterHelper : NSObject

+ (id)_cnRecordForAliases:(id)arg1;
+ (bool)accountCountryIsCandidateForHawking:(id)arg1;
+ (bool)accountCountryIsCandidateForSMSFilter:(id)arg1;
+ (bool)accountCountryIsCandidateForiMessageJunk:(id)arg1;
+ (bool)accountRegionIsCandidateForHawking:(id)arg1;
+ (id)accountRegionsEligibleForJunkFiltering;
+ (bool)anyParticipantIsCandidateForBlackhole:(id)arg1;
+ (bool)anyParticipantIsKnownContact:(id)arg1;
+ (id)defaultAccountRegionsEligibleForJunkFiltering;
+ (id)defaultTelephonyCountryCodesEligibleForJunkFiltering;
+ (id)internationalSpamFilterLearnMoreURL;
+ (bool)isBlackholeEnabledForEligibleAccounts:(bool)arg1;
+ (bool)isChineseSpamFilteringEnabled;
+ (bool)isFilterUnknownSendersEnabled;
+ (bool)isInternationalSpamFilteringEnabled;
+ (bool)isKnownContact:(id)arg1;
+ (bool)isiMessageJunkFilterEnabled;
+ (id)mapID:(id)arg1 usingKey:(id)arg2;
+ (void)participantsAreiMessagable:(id)arg1 completionBlock:(id /* block */)arg2;
+ (bool)receiverIsCandidateForAppleSMSFilterSubClassification:(id)arg1;
+ (bool)receiverIsCandidateForAppleSMSFilterSubClassificationWithSimSlot:(long long)arg1;
+ (bool)receiverIsCandidateForDefaultAppleSMSFilter:(id)arg1;
+ (bool)receiverIsCandidateForDefaultAppleSMSFilterWithSimSlot:(long long)arg1;
+ (bool)receiverIsCandidateForHawking:(id)arg1;
+ (bool)receiverIsCandidateForSMSFilter:(id)arg1;
+ (bool)receiverIsCandidateForSMSFilterWithSimSlot:(long long)arg1;
+ (bool)receiverIsCandidateForiMessageJunk:(id)arg1;
+ (bool)receiverIsEnabledForSMSFilter:(id)arg1;
+ (bool)receivingID:(id)arg1 isCountryCode:(id)arg2;
+ (id)sanitizeParticipants:(id)arg1 excludingHandles:(id)arg2;
+ (bool)senderIsCandidateForBlackhole:(id)arg1;
+ (bool)senderIsCandidateForSMSDowngrade:(id)arg1;
+ (bool)senderIsChinaHandle:(id)arg1;
+ (bool)senderIsKnownContact:(id)arg1;
+ (bool)shouldBlackholeGroupMessageFromSender:(id)arg1 toRecipient:(id)arg2 ifRecipientIsCandidate:(bool)arg3 withOtherParticipants:(id)arg4 givenHistory:(bool)arg5 forEligibleAccounts:(bool)arg6;
+ (bool)shouldBlackholeMessageFromSender:(id)arg1 toRecipient:(id)arg2 ifRecipientIsCandidate:(bool)arg3 givenHistory:(bool)arg4 forEligibleAccounts:(bool)arg5;
+ (bool)shouldDowngradeToRecipient:(id)arg1 fromSender:(id)arg2 ifCapableOfSMS:(bool)arg3 withConversationDowngradeState:(bool)arg4 andConversationHistoryState:(bool)arg5;
+ (bool)shouldShowSMSWarningForSender:(id)arg1 forRecipient:(id)arg2 withConversationHistory:(bool)arg3;
+ (id)telephonyCountryCodesEligibleForJunkFiltering;

@end

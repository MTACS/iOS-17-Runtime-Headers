
@interface _PSInteractionStoreUtils : NSObject

+ (id)allAirDropInteractionsFromStore:(id)arg1 fetchLimit:(unsigned long long)arg2;
+ (id)conversationIdFromInteraction:(id)arg1;
+ (id)conversationIdFromInteraction:(id)arg1 bundleIds:(id)arg2;
+ (id)conversationIdWithExactMatchWithContactHandles:(id)arg1 store:(id)arg2 bundleIds:(id)arg3 messageInteractionCache:(id)arg4;
+ (id)conversationIdWithMaximalIntersectionWithContactIdentifiers:(id)arg1 store:(id)arg2 bundleIds:(id)arg3 meContactIdentifier:(id)arg4;
+ (long long)getHandleTypeFromHandleString:(id)arg1;
+ (id)groupInteractionsContainingSearchStringInDisplayName:(id)arg1 excludingInteractionUUIDs:(id)arg2 account:(id)arg3 directions:(id)arg4 bundleIds:(id)arg5 excludedDomainIdentifiers:(id)arg6 startDate:(id)arg7 store:(id)arg8 fetchLimit:(unsigned long long)arg9 offset:(unsigned long long)arg10;
+ (id)interactionCacheFromStore:(id)arg1 size:(unsigned long long)arg2 queryPredicate:(id)arg3 filterBlock:(id /* block */)arg4;
+ (id)interactionsContainingSearchStringInDisplayName:(id)arg1 account:(id)arg2 directions:(id)arg3 bundleIds:(id)arg4 store:(id)arg5 fetchLimit:(unsigned long long)arg6;
+ (id)interactionsFromStore:(id)arg1 referenceDate:(id)arg2 withMechanisms:(id)arg3 withAccount:(id)arg4 withBundleIds:(id)arg5 withTargetBundleIds:(id)arg6 withDirections:(id)arg7 fetchLimit:(unsigned long long)arg8;
+ (id)interactionsFromStore:(id)arg1 referenceDate:(id)arg2 withMechanisms:(id)arg3 withAccount:(id)arg4 withBundleIds:(id)arg5 withTargetBundleIds:(id)arg6 withDirections:(id)arg7 singleRecipient:(bool)arg8 fetchLimit:(unsigned long long)arg9;
+ (id)interactionsFromStore:(id)arg1 startDate:(id)arg2 tillDate:(id)arg3 withMechanisms:(id)arg4 withAccount:(id)arg5 withBundleIds:(id)arg6 withTargetBundleIds:(id)arg7 withDirections:(id)arg8 singleRecipient:(bool)arg9 fetchLimit:(unsigned long long)arg10;
+ (id)interactionsFromStore:(id)arg1 startDate:(id)arg2 tillDate:(id)arg3 withMechanisms:(id)arg4 withAccount:(id)arg5 withBundleIds:(id)arg6 withTargetBundleIds:(id)arg7 withDirections:(id)arg8 withNsUserName:(id)arg9 singleRecipient:(bool)arg10 excludeAnonymousTemporaryRecipients:(bool)arg11 fetchLimit:(unsigned long long)arg12 fetchOffset:(unsigned long long)arg13 sortAscending:(bool)arg14;
+ (id)interactionsFromStore:(id)arg1 startDate:(id)arg2 tillDate:(id)arg3 withMechanisms:(id)arg4 withAccount:(id)arg5 withBundleIds:(id)arg6 withTargetBundleIds:(id)arg7 withDirections:(id)arg8 withNsUserName:(id)arg9 singleRecipient:(bool)arg10 fetchLimit:(unsigned long long)arg11;
+ (id)interactionsHyperRecentFromReferenceDate:(id)arg1 bundleIds:(id)arg2 recencyMargin:(double)arg3 store:(id)arg4;
+ (id)interactionsMatchingAnyHandles:(id)arg1 account:(id)arg2 directions:(id)arg3 mechanisms:(id)arg4 bundleIds:(id)arg5 store:(id)arg6 fetchLimit:(unsigned long long)arg7 messageInteractionCache:(id)arg8;
+ (id)interactionsMatchingAnyHandles:(id)arg1 directions:(id)arg2 mechanisms:(id)arg3 interactionDuration:(double)arg4 store:(id)arg5 fetchLimit:(unsigned long long)arg6;
+ (id)interactionsMatchingAnyHandlesOrContactIds:(id)arg1 identifiers:(id)arg2 account:(id)arg3 directions:(id)arg4 mechanisms:(id)arg5 bundleIds:(id)arg6 store:(id)arg7 fetchLimit:(unsigned long long)arg8 messageInteractionCache:(id)arg9;
+ (id)interactionsMatchingAnyHandlesOrDomainIds:(id)arg1 account:(id)arg2 directions:(id)arg3 bundleIds:(id)arg4 store:(id)arg5 fetchLimit:(unsigned long long)arg6 singleRecipientOnly:(bool)arg7;
+ (id)interactionsMatchingAnyHandlesOrDomainIds:(id)arg1 account:(id)arg2 directions:(id)arg3 mechanisms:(id)arg4 bundleIds:(id)arg5 store:(id)arg6 fetchLimit:(unsigned long long)arg7;
+ (id)interactionsMatchingAnyHandlesOrDomainIds:(id)arg1 store:(id)arg2 fetchLimit:(unsigned long long)arg3 messageInteractionCache:(id)arg4;
+ (id)interactionsMatchingAnySender:(id)arg1 store:(id)arg2 fetchLimit:(unsigned long long)arg3 messageInteractionCache:(id)arg4;
+ (id)interactionsMostRecentForBundleId:(id)arg1 store:(id)arg2 resultLimit:(unsigned long long)arg3 interactions:(id)arg4;
+ (id)interactionsWithContactIdentifiers:(id)arg1 store:(id)arg2 bundleIds:(id)arg3 meContactIdentifier:(id)arg4;
+ (id)mostRecentInteractionInvolvingMatchingIdentifier:(id)arg1 store:(id)arg2 bundleIds:(id)arg3;
+ (id)mostRecentInteractionWithExactMatchingIdentifiers:(id)arg1 store:(id)arg2 bundleIds:(id)arg3 meContactIdentifier:(id)arg4;
+ (id)mostRecentInteractionWithRecipientMatchingContactIdentifier:(id)arg1 bundleIds:(id)arg2 store:(id)arg3 singleRecipient:(bool)arg4;
+ (id)mostRecentInteractionWithSenderOrRecipientMatchingContactIdentifier:(id)arg1 bundleIds:(id)arg2 store:(id)arg3 singleRecipient:(bool)arg4;
+ (id)mostRecentInteractionWithSingleRecipientMatchingContactIdentifier:(id)arg1 store:(id)arg2;
+ (id)mostRecentInteractionWithSingleRecipientMatchingHandle:(id)arg1 store:(id)arg2;
+ (id)recentInteractionsFromStore:(id)arg1 bundleIDs:(id)arg2;
+ (id)someIMessageInteractionInvolvingContactIdentifier:(id)arg1 store:(id)arg2 contactType:(unsigned long long)arg3 afterStartDate:(id)arg4;
+ (id)someInteractionWithMatchingIdentifier:(id)arg1 store:(id)arg2 bundleIds:(id)arg3 afterStartDate:(id)arg4;

@end

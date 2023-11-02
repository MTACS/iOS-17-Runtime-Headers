
@interface EDMessageListItemPredicates : NSObject

+ (id)_objectIDsFromRightExpression:(id)arg1;
+ (id)_predicateForAnyMailboxWithPredicate:(id)arg1;
+ (id)_predicateForRecipientMessagesAddressesKey:(id)arg1 addresses:(id)arg2;
+ (id)expandedPredicateForFollowUpIsActivePredicate:(id)arg1;
+ (id)expandedPredicateForReadLaterIsActivePredicate:(id)arg1;
+ (id)predicateForAnyRecipientPredicate:(id)arg1;
+ (id)predicateForBody:(id)arg1;
+ (id)predicateForMailboxTypePredicate:(id)arg1 mailboxes:(id)arg2;
+ (id)predicateForMessageIDHeaderHashPredicate:(id)arg1;
+ (id)predicateForMessagesFromVIPs:(id)arg1;
+ (id)predicateForMessagesThatCCAddresses:(id)arg1;
+ (id)predicateForMessagesToAddresses:(id)arg1;
+ (id)predicateForMessagesWithObjectIDsPredicate:(id)arg1 objectIDConverter:(id)arg2;
+ (id)predicateForSenderPredicate:(id)arg1;
+ (id)predicateForSpotlightPredicate:(id)arg1;
+ (id)predicateForSubjectPredicate:(id)arg1;

@end


@interface EDPopulateSendersTableMigrationStep : NSObject

+ (id)_addressesForSenderIDs:(id)arg1 withConnection:(id)arg2;
+ (id)_allSenderAddressIDsWithConnection:(id)arg1 sentMailboxURLStrings:(id)arg2;
+ (bool)_clearSendersAddressesTableWithConnection:(id)arg1;
+ (bool)_clearSendersTableWithConnection:(id)arg1;
+ (id)_combineDictionary:(id)arg1 withDictionary:(id)arg2;
+ (bool)_insertGroupedSendersWithoutContact:(id)arg1 withConnection:(id)arg2;
+ (bool)_insertSenderWithAddresses:(id)arg1 contact:(id)arg2 connection:(id)arg3 error:(id*)arg4;
+ (bool)_insertSendersGroupedByContact:(id)arg1 withConnection:(id)arg2;
+ (id)_senderIDsGroupedByContactsForEmailAddressesByContact:(id)arg1 withConnection:(id)arg2;
+ (id)_senderIDsGroupedByContactsForSenderAddressesToIDs:(id)arg1 withContactStore:(id)arg2 unmatchedEmailAddresses:(id*)arg3 otherEmailAddressesByContact:(id*)arg4;
+ (id)_senderIDsGroupedBySimpleAddressForEmailAddresses:(id)arg1 senderIDsByEmailAddress:(id)arg2;
+ (bool)runWithConnection:(id)arg1 sentMailboxURLs:(id)arg2 contactStore:(id)arg3;

@end

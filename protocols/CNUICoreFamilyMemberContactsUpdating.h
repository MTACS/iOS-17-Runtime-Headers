
@protocol CNUICoreFamilyMemberContactsUpdating

@required

- (CNFuture *)updateContactListByAddingContacts:(NSArray *)arg1;
- (CNFuture *)updateContactListByRemovingContacts:(NSArray *)arg1;
- (CNFuture *)updateContactListByUpdatingContacts:(NSArray *)arg1;
- (CNFuture *)updateContactWhitelistByAddingContacts:(NSArray *)arg1;
- (CNFuture *)updateContactWhitelistByRemovingContacts:(NSArray *)arg1;

@end

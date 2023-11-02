
@interface CNUICoreFamilyMemberSaveRequestFactory : NSObject

+ (id)distinctCopiesOfContacts:(id)arg1;
+ (id)saveRequestToUpdateContactListByAddingContacts:(id)arg1;
+ (id)saveRequestToUpdateContactListByAddingContacts:(id)arg1 toContainer:(id)arg2;
+ (id)saveRequestToUpdateContactListByRemovingContacts:(id)arg1;
+ (id)saveRequestToUpdateContactListByUpdatingContacts:(id)arg1;
+ (id)saveRequestToUpdateContactWhitelistByRemovingContacts:(id)arg1;
+ (id)saveRequestToupdateContactWhitelistByAddingContacts:(id)arg1;

@end

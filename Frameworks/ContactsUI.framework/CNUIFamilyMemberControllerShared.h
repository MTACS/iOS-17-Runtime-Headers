
@interface CNUIFamilyMemberControllerShared : NSObject

+ (id)actionTitleAddNewContactForFamilyMember:(id)arg1;
+ (id)actionTitleChooseFromContactsForFamilyMember:(id)arg1;
+ (id)addContactsOptionsSheetForFamilyMember:(id)arg1 delegate:(id)arg2;
+ (id)addContactsToWhitelistOptionsSheetForFamilyMember:(id)arg1 offerChooseFromFamilyMemberContactsOption:(bool)arg2 delegate:(id)arg3;
+ (id)contactMatchingFamilyMemberContactItem:(id)arg1 fetchedFromContactStore:(id)arg2 schedulerProvider:(id)arg3;
+ (id)contactViewControllerForContact:(id)arg1 fromStore:(id)arg2;
+ (long long)contactsUIFetchStatusFromContactsUICoreFetchStatus:(long long)arg1;
+ (id)formattedNameOfFamilyMember:(id)arg1;

@end

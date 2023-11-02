
@protocol CTXPCServicePhonebookInterface

@required

- (void)fetchPhonebook:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CTXPCServiceSubscriptionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)getPhoneNumberWithCompletion:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CTXPCServiceSubscriptionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTPhoneNumberInfo *, NSError *, void*
- (void)getPhonebookEntryCountWithCompletion:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CTXPCServiceSubscriptionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSError *, void*
- (void)getPhonebookEntryWithCompletion:(void *)arg1 atIndex:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CTXPCServiceSubscriptionContext *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CTPhoneBookEntry *, NSError *, void*
- (void)savePhonebookEntry:(void *)arg1 atIndex:(void *)arg2 withContactName:(void *)arg3 contactNumber:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: CTXPCServiceSubscriptionContext *, int, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)selectPhonebook:(void *)arg1 forPhonebookName:(void *)arg2 withPassword:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: CTXPCServiceSubscriptionContext *, int, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end

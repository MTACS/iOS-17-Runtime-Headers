
@interface CNContactVCardSerialization : NSObject

+ (void)contactsWithData:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)contactsWithData:(id)arg1 error:(id*)arg2;
+ (id)contactsWithData:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (void)contactsWithData:(id)arg1 scheduler:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)contactsWithMECARDString:(id)arg1 error:(id*)arg2;
+ (id)dataWithContacts:(id)arg1 error:(id*)arg2;
+ (void)dataWithContacts:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)dataWithContacts:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)dataWithContacts:(id)arg1 options:(id)arg2 error:(id*)arg3 environment:(id)arg4;
+ (void)dataWithContacts:(id)arg1 options:(id)arg2 scheduler:(id)arg3 completionHandler:(id /* block */)arg4;
+ (id)descriptorForRequiredKeys;
+ (id)descriptorForRequiredKeysWithOptions:(id)arg1;
+ (id)descriptorForRequiredKeysWithOptions:(id)arg1 description:(id)arg2;
+ (void)logWritingContactsToVCard:(id)arg1 options:(id)arg2 logger:(id)arg3;
+ (id)summaryOfLocationVCard:(id)arg1 error:(id*)arg2;
+ (id)summaryOfVCard:(id)arg1 error:(id*)arg2;

@end

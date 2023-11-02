
@interface CNSaveRequestVerifier : NSObject

+ (bool)_areDirectPropertiesOfSaveRequest:(id)arg1 authorizedForSavingWithContext:(id)arg2 error:(id*)arg3;
+ (bool)_arePropertiesOfContacts:(id)arg1 inSaveRequest:(id)arg2 authorizedForSavingWithContext:(id)arg3 error:(id*)arg4;
+ (bool)_isEditingOfContacts:(id)arg1 inSaveRequest:(id)arg2 authorizedForSavingWithContext:(id)arg3 error:(id*)arg4;
+ (id)insertedAndUpdatedContactsForSaveRequest:(id)arg1;
+ (bool)isSaveRequest:(id)arg1 authorizedForSavingWithContext:(id)arg2 error:(id*)arg3;
+ (bool)isValidSaveRequest:(id)arg1 error:(id*)arg2;
+ (id)os_log;

@end

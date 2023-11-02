
@interface RMAccountHelper : NSObject

+ (id)_createAccountWithEnrollmentURL:(id)arg1 username:(id)arg2 personaID:(id)arg3 description:(id)arg4 error:(id*)arg5;
+ (bool)_removeAccount:(id)arg1 store:(id)arg2 error:(id*)arg3;
+ (id)createAccountWithEnrollmentURL:(id)arg1 username:(id)arg2 personaID:(id)arg3 description:(id)arg4 error:(id*)arg5;
+ (bool)removeAccountWithEnrollmentURL:(id)arg1 error:(id*)arg2;
+ (bool)removeAccountWithIdentifier:(id)arg1 error:(id*)arg2;
+ (bool)updateAccountWithIdentifier:(id)arg1 enrollmentURL:(id)arg2 personaID:(id)arg3 error:(id*)arg4;

@end

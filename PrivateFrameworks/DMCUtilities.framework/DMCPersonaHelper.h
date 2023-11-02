
@interface DMCPersonaHelper : NSObject

+ (id)createEnterprisePersonaWithDevicePasscode:(id)arg1 error:(id*)arg2;
+ (id)createEnterprisePersonaWithPasscodeData:(id)arg1 passcodeDataType:(unsigned long long)arg2 error:(id*)arg3;
+ (id)currentPersonaID;
+ (id)currentPersonaTypeString;
+ (id)enterprisePersonaDisplayName;
+ (id)enterprisePersonaIdentifier;
+ (id)fetchDirtyPersonaIDs;
+ (bool)isCurrentPersonaEnterprise;
+ (id)performBlockUnderPersona:(id)arg1 block:(id /* block */)arg2;
+ (id)performBlockUnderPersonalPersona:(id /* block */)arg1;
+ (bool)personaWithUniqueIdentifierExists:(id)arg1;
+ (bool)removePersona:(id)arg1 error:(id*)arg2;
+ (void)removePersonaAndAccountsWithPersonaID:(id)arg1;
+ (void)setPersonaIdentifierForApps:(id)arg1 personaID:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)trackDirtyPersona:(id)arg1;
+ (void)untrackAllDirtyPersonas;
+ (void)untrackDirtyPersona:(id)arg1;

@end


@interface SFRestrictionsPasscodeController : NSObject

+ (id)_generateSalt;
+ (id)_keychainPasswordForRestrictions;
+ (void)_migrateRestrictionsPasscodeIfNeeded;
+ (void)_removeKeychainPasswordForRestrictions;
+ (void)_setKeychainPasswordForRestrictions:(id)arg1;
+ (bool)hasHashAndSaltLegacyPassword;
+ (id)hashForHashAndSaltLegacyRestrictions;
+ (bool)legacyRestrictionsInEffect;
+ (void)migrateRestrictionsPasscode;
+ (id)newHashDataForPassword:(id)arg1 andSalt:(id)arg2;
+ (id)pinFromHashAndSaltLegacyPassword;
+ (void)removePasswordForHashAndSaltLegacyRestrictions;
+ (id)saltForHashAndSaltLegacyRestrictions;
+ (void)setPIN:(id)arg1;
+ (bool)settingEnabled;
+ (bool)validatePIN:(id)arg1;

@end

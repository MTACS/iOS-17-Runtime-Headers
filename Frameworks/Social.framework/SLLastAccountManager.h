
@interface SLLastAccountManager : NSObject

+ (id)_lastAccountOfTypeIdentifier:(id)arg1 inStore:(id)arg2 updatePrefs:(bool)arg3 prefKey:(id)arg4 prefAppID:(id)arg5;
+ (void)_setLastAccount:(id)arg1 prefKey:(id)arg2 prefAppID:(id)arg3;
+ (id)lastTwitterAccountInAccountStore:(id)arg1 updatePrefs:(bool)arg2;
+ (void)setLastTwitterAccount:(id)arg1;

@end

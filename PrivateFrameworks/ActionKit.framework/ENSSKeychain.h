
@interface ENSSKeychain : NSObject

+ (void*)accessibilityType;
+ (id)accountsForService:(id)arg1;
+ (id)allAccounts;
+ (bool)deletePasswordForService:(id)arg1 account:(id)arg2;
+ (bool)deletePasswordForService:(id)arg1 account:(id)arg2 error:(id*)arg3;
+ (id)passwordForService:(id)arg1 account:(id)arg2;
+ (id)passwordForService:(id)arg1 account:(id)arg2 error:(id*)arg3;
+ (void)setAccessibilityType:(void*)arg1;
+ (bool)setPassword:(id)arg1 forService:(id)arg2 account:(id)arg3;
+ (bool)setPassword:(id)arg1 forService:(id)arg2 account:(id)arg3 error:(id*)arg4;

@end

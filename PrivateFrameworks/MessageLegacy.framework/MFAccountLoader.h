
@interface MFAccountLoader : NSObject

+ (Class)_accountClassForString:(id)arg1 error:(id*)arg2;
+ (id)_accountClassStringWithPersistentAccount:(id)arg1 error:(id*)arg2;
+ (id)_bundlePathForAccountClassString:(id)arg1;
+ (Class)accountClassForPersistentAccount:(id)arg1 error:(id*)arg2;
+ (id)accountWithAccountTypeIdentifier:(id)arg1 error:(id*)arg2;
+ (id)accountWithPersistentAccount:(id)arg1 error:(id*)arg2;
+ (bool)loadBundleForAccountClassString:(id)arg1 error:(id*)arg2;

@end

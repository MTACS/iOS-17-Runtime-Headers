
@interface _BMWalletLibraryNode : _BMLibraryNode

+ (id)SettledTransaction;
+ (id)Transaction;
+ (id)configurationForSettledTransaction;
+ (id)configurationForTransaction;
+ (id)identifier;
+ (id)storeConfigurationForSettledTransaction;
+ (id)storeConfigurationForTransaction;
+ (id)streamNames;
+ (id)streamWithName:(id)arg1;
+ (id)sublibraries;
+ (id)syncPolicyForSettledTransaction;
+ (id)syncPolicyForTransaction;
+ (id)validKeyPaths;

@end

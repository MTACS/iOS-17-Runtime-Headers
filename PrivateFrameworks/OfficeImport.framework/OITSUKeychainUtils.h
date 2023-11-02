
@interface OITSUKeychainUtils : NSObject

+ (void)authenticateAndUpgradeKeychainResult:(id)arg1 localizedReason:(id)arg2 completionQueue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)cancelTouchIDIfNeeded;
+ (void)cryptoProcessData:(id)arg1 encrypt:(bool)arg2 localizedReason:(id)arg3 completionQueue:(id)arg4 completionHandler:(id /* block */)arg5;
+ (id)defaultDocumentPasswordDescriptionString;
+ (id)defaultServiceForGenericItem:(id)arg1;
+ (id)errorForStatus:(int)arg1;
+ (bool)lookupGenericItem:(id)arg1 account:(id*)arg2 passphrase:(id*)arg3 policy:(long long)arg4 error:(id*)arg5;
+ (void)lookupGenericItem:(id)arg1 localizedReason:(id)arg2 completionQueue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (bool)lookupGenericItem:(id)arg1 passphrase:(id*)arg2 policy:(long long)arg3 error:(id*)arg4;
+ (id)mutableQueryForGenericItem:(id)arg1 returnData:(bool)arg2;
+ (bool)removeGenericItem:(id)arg1 error:(id*)arg2;
+ (void)setPassphrase:(id)arg1 forGenericItem:(id)arg2 service:(id)arg3 description:(id)arg4 label:(id)arg5 account:(id)arg6 policy:(long long)arg7 completionQueue:(id)arg8 completionHandler:(id /* block */)arg9;
+ (bool)setPassphrase:(id)arg1 forGenericItem:(id)arg2 service:(id)arg3 description:(id)arg4 label:(id)arg5 account:(id)arg6 policy:(long long)arg7 error:(id*)arg8;
+ (bool)shouldUseTouchID;
+ (long long)touchIDAvailability;

@end


@interface PocketAPIKeychainUtils : NSObject

+ (bool)deleteItemForUsername:(id)arg1 andServiceName:(id)arg2 error:(id*)arg3;
+ (id)getPasswordForUsername:(id)arg1 andServiceName:(id)arg2 error:(id*)arg3;
+ (bool)storeUsername:(id)arg1 andPassword:(id)arg2 forServiceName:(id)arg3 updateExisting:(bool)arg4 error:(id*)arg5;

@end

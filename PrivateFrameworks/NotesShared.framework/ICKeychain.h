
@interface ICKeychain : NSObject

+ (id)accessControlObjectWithProtection:(void*)arg1 flags:(unsigned long long)arg2 error:(id*)arg3;
+ (bool)booleanForIdentifier:(id)arg1 account:(id)arg2;
+ (id)dataForIdentifier:(id)arg1 account:(id)arg2;
+ (id)dataForIdentifier:(id)arg1 account:(id)arg2 authenticationContext:(id)arg3;
+ (id)dataForIdentifier:(id)arg1 account:(id)arg2 isSynced:(bool)arg3 authenticationContext:(id)arg4;
+ (bool)deleteItemsForIdentifier:(id)arg1 account:(id)arg2 error:(id*)arg3;
+ (bool)deleteItemsForIdentifier:(id)arg1 account:(id)arg2 isSynced:(bool)arg3 error:(id*)arg4;
+ (bool)deleteItemsOfType:(unsigned long long)arg1 account:(id)arg2 error:(id*)arg3;
+ (bool)deleteItemsOfType:(unsigned long long)arg1 account:(id)arg2 isSynced:(bool)arg3 error:(id*)arg4;
+ (bool)hasItemForIdentifier:(id)arg1 account:(id)arg2;
+ (bool)isSyncAvailableForAccount:(id)arg1;
+ (id)itemsOfType:(unsigned long long)arg1 account:(id)arg2 authenticationContext:(id)arg3;
+ (id)itemsOfType:(unsigned long long)arg1 account:(id)arg2 isSynced:(bool)arg3 authenticationContext:(id)arg4;
+ (id)queryForItemClass:(id)arg1 forIdentifier:(id)arg2 account:(id)arg3 isSynced:(bool)arg4 type:(unsigned long long)arg5 authenticationContext:(id)arg6 returnData:(bool)arg7 limit:(id)arg8;
+ (bool)setBoolean:(bool)arg1 forIdentifier:(id)arg2 account:(id)arg3 shouldSync:(bool)arg4 error:(id*)arg5;
+ (bool)setData:(id)arg1 forIdentifier:(id)arg2 account:(id)arg3 error:(id*)arg4;
+ (bool)setData:(id)arg1 forIdentifier:(id)arg2 account:(id)arg3 shouldSync:(bool)arg4 error:(id*)arg5;
+ (bool)setData:(id)arg1 forIdentifier:(id)arg2 account:(id)arg3 type:(unsigned long long)arg4 shouldSync:(bool)arg5 accessFlags:(unsigned long long)arg6 accessGroup:(id)arg7 error:(id*)arg8;
+ (bool)setString:(id)arg1 forIdentifier:(id)arg2 account:(id)arg3 shouldSync:(bool)arg4 error:(id*)arg5;
+ (bool)setUnsignedInteger:(unsigned long long)arg1 forIdentifier:(id)arg2 account:(id)arg3 shouldSync:(bool)arg4 error:(id*)arg5;
+ (id)stringForIdentifier:(id)arg1 account:(id)arg2 isSynced:(bool)arg3;
+ (unsigned long long)unsignedIntegerForIdentifier:(id)arg1 account:(id)arg2;

@end

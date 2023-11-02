
@interface AAKeychainManager : NSObject

+ (void)initialize;
+ (id)passwordForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3;
+ (void)removePasswordForService:(id)arg1 username:(id)arg2 accessGroup:(id)arg3;
+ (void)setPassword:(id)arg1 forServiceName:(id)arg2 username:(id)arg3 accessGroup:(id)arg4;

@end

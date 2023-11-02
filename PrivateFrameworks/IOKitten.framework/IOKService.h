
@interface IOKService : IOKRegistryEntry

+ (id)addNotificationOfType:(id)arg1 forMatching:(id)arg2 usingNotificationPort:(id)arg3 error:(id*)arg4 withEnumerationBlock:(id /* block */)arg5;
+ (id)addNotificationOfType:(id)arg1 forMatching:(id)arg2 usingNotificationPort:(id)arg3 error:(id*)arg4 withHandler:(id /* block */)arg5;
+ (id)bsdNameMatching:(id)arg1;
+ (id)entryIDMatching:(unsigned long long)arg1;
+ (id)matchingService:(id)arg1;
+ (id)matchingServices:(id)arg1 error:(id*)arg2;
+ (id)nameMatching:(id)arg1;
+ (id)serviceMatching:(id)arg1;

- (id)addInterestNotifcationOfType:(id)arg1 usingNotificationPort:(id)arg2 error:(id*)arg3 withHandler:(id /* block */)arg4;
- (unsigned int)busyState;
- (id)connectToServiceOfType:(unsigned int)arg1;
- (id)initWithServiceEntry:(unsigned int)arg1;
- (bool)isServiceAuthorizedForOpenAllowInteraction:(bool)arg1;
- (bool)matchesPropertyTable:(id)arg1 error:(id*)arg2;
- (bool)requestProbeWithOptions:(unsigned int)arg1 error:(id*)arg2;

@end

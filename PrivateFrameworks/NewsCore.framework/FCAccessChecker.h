
@interface FCAccessChecker : NSObject

- (bool)canSynchronouslyCheckAccessToItem:(id)arg1;
- (void)checkAccessToItem:(id)arg1 withQualityOfService:(long long)arg2 completion:(id /* block */)arg3;
- (bool)hasAccessToItem:(id)arg1 blockedReason:(unsigned long long*)arg2 error:(id*)arg3;
- (id)init;

@end

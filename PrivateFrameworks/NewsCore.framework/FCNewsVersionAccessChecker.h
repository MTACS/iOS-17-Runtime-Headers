
@interface FCNewsVersionAccessChecker : FCAccessChecker

- (bool)canSynchronouslyCheckAccessToItem:(id)arg1;
- (bool)hasAccessToItem:(id)arg1 blockedReason:(unsigned long long*)arg2 error:(id*)arg3;
- (id)init;

@end

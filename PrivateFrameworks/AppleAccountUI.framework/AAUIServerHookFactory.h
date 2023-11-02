
@interface AAUIServerHookFactory : NSObject

- (id)_defaultHooks:(id)arg1;
- (id)_iCloudDataRecoveryServiceHooksFor:(id)arg1 accountManager:(id)arg2;
- (id)_passwordAndSecurityHooksForAccount:(id)arg1 accountManager:(id)arg2;
- (id)hooksFor:(unsigned long long)arg1 accountManager:(id)arg2;

@end

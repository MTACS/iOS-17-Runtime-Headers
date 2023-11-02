
@protocol UISApplicationSupportServiceDelegate <NSObject>

@optional

- (UISApplicationInitializationContext *)applicationInitializationContextForClient:(BSAuditToken *)arg1;
- (void)destroyScenesWithPersistentIdentifiers:(void *)arg1 animationType:(void *)arg2 destroySessions:(void *)arg3 forClient:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: NSArray *, unsigned long long, bool, BSAuditToken *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)requestPasscodeUnlockUIForClient:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: BSAuditToken *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (UISApplicationInitializationContext *)service:(UISApplicationSupportService *)arg1 initializeClient:(BSProcessHandle *)arg2;
- (void)service:(void *)arg1 initializeClient:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: UISApplicationSupportService *, BSProcessHandle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UISApplicationInitializationContext *, void*
- (UISApplicationInitializationContext *)service:(UISApplicationSupportService *)arg1 initializeClient:(BSProcessHandle *)arg2 withParameters:(UISApplicationInitializationContextParameters *)arg3;
- (bool)service:(UISApplicationSupportService *)arg1 overrideClientInitialization:(BSProcessHandle *)arg2;

@end

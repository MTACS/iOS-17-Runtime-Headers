
@interface SBApplicationSupportServiceDelegate : NSObject <UISApplicationSupportServiceDelegate> {
    UISApplicationSupportService * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_rebuildDefaultContext;
- (void)dealloc;
- (void)destroyScenesWithPersistentIdentifiers:(id)arg1 animationType:(unsigned long long)arg2 destroySessions:(bool)arg3 forClient:(id)arg4 completion:(id /* block */)arg5;
- (id)init;
- (void)requestPasscodeCheckUIForClient:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)requestPasscodeUnlockUIForClient:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)service:(id)arg1 initializeClient:(id)arg2;
- (bool)service:(id)arg1 overrideClientInitialization:(id)arg2;

@end

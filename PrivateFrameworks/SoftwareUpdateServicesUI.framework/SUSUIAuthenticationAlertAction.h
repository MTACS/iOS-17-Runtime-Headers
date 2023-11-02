
@interface SUSUIAuthenticationAlertAction : BSAction {
    unsigned long long  _alertType;
    SUAutoInstallOperation * _autoInstallOperation;
    BSAction * _baseAction;
    bool  _canDeferInstallation;
    SUDescriptor * _descriptor;
    bool  _forInstallTonight;
    bool  _loaded;
    SURollbackDescriptor * _rollbackDescriptor;
}

@property (nonatomic, readonly) unsigned long long alertType;
@property (nonatomic, readonly, retain) SUAutoInstallOperation *autoInstallOperation;
@property (nonatomic, retain) BSAction *baseAction;
@property (nonatomic, readonly) bool canDeferInstallation;
@property (nonatomic, readonly, retain) SUDescriptor *descriptor;
@property (nonatomic, readonly) bool forInstallTonight;
@property (nonatomic, readonly, retain) SURollbackDescriptor *rollbackDescriptor;

- (void).cxx_destruct;
- (void)_loadIfNecessary;
- (unsigned long long)alertType;
- (id)autoInstallOperation;
- (id)baseAction;
- (bool)canDeferInstallation;
- (id)descriptor;
- (Class)fallbackXPCEncodableClass;
- (void)fireCompletionIfNecessaryForResult:(bool)arg1;
- (bool)forInstallTonight;
- (id)initWithDescriptor:(id)arg1 autoInstallOperation:(id)arg2 forInstallTonight:(bool)arg3 canDeferInstallation:(bool)arg4 completionQueue:(id)arg5 completionBlock:(id /* block */)arg6;
- (id)initWithInfo:(id)arg1 forBaseAction:(id)arg2;
- (id)initWithRollbackDescriptor:(id)arg1 canDeferInstallation:(bool)arg2 completionQueue:(id)arg3 completionBlock:(id /* block */)arg4;
- (id)rollbackDescriptor;
- (void)setBaseAction:(id)arg1;

@end

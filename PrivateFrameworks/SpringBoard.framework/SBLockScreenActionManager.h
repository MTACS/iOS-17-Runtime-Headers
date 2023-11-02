
@interface SBLockScreenActionManager : NSObject {
    NSMutableDictionary * _actionProviders;
}

@property (nonatomic, retain) NSMutableDictionary *actionProviders;

- (void).cxx_destruct;
- (void)_clearActionOnAllProviders;
- (id)actionProviders;
- (id)currentLockScreenActionContext;
- (id)currentLockScreenActionContextActionSource:(unsigned long long*)arg1;
- (id)init;
- (void)registerLockScreenActionProvider:(id)arg1 forSource:(unsigned long long)arg2;
- (void)runUnlockAction;
- (void)setActionProviders:(id)arg1;

@end

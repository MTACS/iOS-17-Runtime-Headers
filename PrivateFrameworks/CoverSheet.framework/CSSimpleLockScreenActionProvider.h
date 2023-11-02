
@interface CSSimpleLockScreenActionProvider : NSObject <SBLockScreenActionProvider> {
    SBFLockScreenActionContext * _lockScreenActionContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBFLockScreenActionContext *lockScreenActionContext;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)invalidateLockScreenActionContext;
- (id)lockScreenActionContext;
- (void)setLockScreenActionContext:(id)arg1;

@end

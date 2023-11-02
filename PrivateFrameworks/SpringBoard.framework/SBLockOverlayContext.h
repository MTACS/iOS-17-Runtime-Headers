
@interface SBLockOverlayContext : NSObject {
    id /* block */  _activationBlock;
    id /* block */  _deactivationBlock;
    unsigned long long  _priority;
    SBLockOverlayViewController * _viewController;
}

@property (nonatomic, copy) id /* block */ activationBlock;
@property (nonatomic, copy) id /* block */ deactivationBlock;
@property (nonatomic, readonly) unsigned long long priority;
@property (nonatomic, readonly) SBLockOverlayViewController *viewController;

- (void).cxx_destruct;
- (id /* block */)activationBlock;
- (id /* block */)deactivationBlock;
- (id)initWithOverlayViewController:(id)arg1 priority:(unsigned long long)arg2;
- (unsigned long long)priority;
- (void)setActivationBlock:(id /* block */)arg1;
- (void)setDeactivationBlock:(id /* block */)arg1;
- (id)viewController;

@end

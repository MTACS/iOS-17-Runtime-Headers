
@interface SUStorePageRotationController : SURotationController {
    SURotationController * _childRotationController;
    SUViewController * _childViewController;
}

- (id)_childRotationController;
- (void)animateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)dealloc;
- (void)finishRotationFromInterfaceOrientation:(long long)arg1;
- (void)prepareToRotateToInterfaceOrientation:(long long)arg1;

@end


@interface EKUIAvailabilityNavigationController : EKUIManagedNavigationController {
    long long  _modalPresentationStyle;
}

- (bool)canManagePresentationStyle;
- (id)initWithRootViewController:(id)arg1;
- (long long)modalPresentationStyle;
- (bool)presentModally;
- (void)setModalPresentationStyle:(long long)arg1;
- (bool)wantsManagement;

@end

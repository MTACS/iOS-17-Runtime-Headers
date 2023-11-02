
@interface SBSBackgroundActivityCoordinator : NSObject {
    NSSet * _backgroundActivityIdentifiers;
    <SBSBackgroundActivityCoordinatorDelegate> * _delegate;
}

@property (nonatomic, readonly, copy) NSSet *backgroundActivityIdentifiers;
@property (nonatomic) <SBSBackgroundActivityCoordinatorDelegate> *delegate;

- (void).cxx_destruct;
- (void)_handleStatusBarTapWithContext:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)_registrationInvalidated:(id)arg1;
- (id)backgroundActivityIdentifiers;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setRegisteredBackgroundActivityIdentifiers:(id)arg1 reply:(id /* block */)arg2;
- (void)setRegisteredStyleOverrides:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (unsigned long long)styleOverrides;

@end

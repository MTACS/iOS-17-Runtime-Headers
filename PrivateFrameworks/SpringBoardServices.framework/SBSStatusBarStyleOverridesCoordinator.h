
@interface SBSStatusBarStyleOverridesCoordinator : SBSBackgroundActivityCoordinator

@property (nonatomic) <SBSStatusBarStyleOverridesCoordinatorDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long styleOverrides;

- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setRegisteredStyleOverrides:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (unsigned long long)styleOverrides;

@end

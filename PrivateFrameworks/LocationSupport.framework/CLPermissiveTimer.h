
@interface CLPermissiveTimer : CLTimer

- (void)dbgAssertInside;
- (void)invalidate;
- (void)shouldFire;

@end

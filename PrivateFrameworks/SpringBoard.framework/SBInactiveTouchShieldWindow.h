
@interface SBInactiveTouchShieldWindow : _UIRootWindow

+ (bool)_isSecure;

- (bool)_appearsInLoupe;
- (bool)_canBecomeKeyWindow;
- (bool)_shouldPrepareScreenForWindow;
- (bool)_usesWindowServerHitTesting;
- (id)initWithDisplay:(id)arg1;

@end

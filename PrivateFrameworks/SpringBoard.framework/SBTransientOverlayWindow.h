
@interface SBTransientOverlayWindow : SBSecureWindow

+ (bool)sb_autorotates;

- (bool)_canBecomeKeyWindow;
- (id)hostedSceneIdentityTokens;

@end

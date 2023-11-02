
@interface _UIInteractiveHighlightEffectWindow : UIWindow

+ (bool)_isSystemWindow;

- (bool)_canAffectStatusBarAppearance;
- (bool)_isHostingPortalViews;
- (id)_roleHint;
- (bool)isInternalWindow;

@end


@protocol _UIBarButtonItemViewOwner <NSObject>

@required

- (void)_itemCustomViewDidChange:(UIBarButtonItem *)arg1 fromView:(UIView *)arg2;
- (void)_itemDidChangeEnabledState:(UIBarButtonItem *)arg1;
- (void)_itemDidChangeHiddenState:(UIBarButtonItem *)arg1;
- (void)_itemDidChangeSelectionState:(UIBarButtonItem *)arg1;
- (void)_itemDidChangeWidth:(UIBarButtonItem *)arg1;
- (void)_itemStandardViewNeedsUpdate:(UIBarButtonItem *)arg1;

@optional

- (bool)_item:(UIBarButtonItem *)arg1 addSymbolEffect:(NSSymbolEffect *)arg2 options:(NSSymbolEffectOptions *)arg3 animated:(bool)arg4;
- (void)_item:(UIBarButtonItem *)arg1 applyContentTransition:(NSSymbolContentTransition *)arg2 options:(NSSymbolEffectOptions *)arg3;
- (bool)_item:(UIBarButtonItem *)arg1 removeAllSymbolEffectsWithOptions:(NSSymbolEffectOptions *)arg2 animated:(bool)arg3;
- (bool)_item:(UIBarButtonItem *)arg1 removeSymbolEffectOfType:(NSSymbolEffect *)arg2 options:(NSSymbolEffectOptions *)arg3 animated:(bool)arg4;
- (bool)_itemDidUpdateMenu:(UIBarButtonItem *)arg1 fromMenu:(UIMenu *)arg2;
- (bool)_itemHostedInNSToolbar:(UIBarButtonItem *)arg1;
- (void)_itemNeedsNSToolbarUpdate:(UIBarButtonItem *)arg1;

@end

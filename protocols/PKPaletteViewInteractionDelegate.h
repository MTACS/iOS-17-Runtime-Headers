
@protocol PKPaletteViewInteractionDelegate <UIKeyboardSceneDelegateVisibilityObserver>

@required

- (void)paletteViewInteractionDidActivate:(PKPaletteViewInteraction *)arg1;
- (void)paletteViewInteractionWillEnterForeground:(PKPaletteViewInteraction *)arg1;

@end

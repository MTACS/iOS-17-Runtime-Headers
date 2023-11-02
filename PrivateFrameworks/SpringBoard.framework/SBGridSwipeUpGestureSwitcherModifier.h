
@interface SBGridSwipeUpGestureSwitcherModifier : SBGestureSwitcherModifier {
    bool  _delayCompletionUntilTransitionBegins;
    SBDismissSiriSwitcherModifier * _dismissSiriModifier;
    bool  _isApplyingContentViewScaleToSwitcherViewBounds;
    struct CGPoint { 
        double x; 
        double y; 
    }  _translation;
}

@property (nonatomic, readonly) bool delayCompletionUntilTransitionBegins;

- (void).cxx_destruct;
- (void)_applyPrototypeSettings;
- (void)_performBlockByApplyContentViewScaleToSwitcherViewBounds:(id /* block */)arg1;
- (double)contentViewScale;
- (bool)delayCompletionUntilTransitionBegins;
- (void)didMoveToParentModifier:(id)arg1;
- (long long)finalResponseForGestureEvent:(id)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (long long)homeScreenBackdropBlurType;
- (id)initWithGestureID:(id)arg1;
- (id)initWithGestureID:(id)arg1 delayCompletionUntilTransitionBegins:(bool)arg2;
- (bool)isHomeScreenContentRequired;
- (bool)isSwitcherWindowUserInteractionEnabled;
- (bool)isSwitcherWindowVisible;
- (bool)isWallpaperRequiredForSwitcher;
- (struct CGPoint { double x1; double x2; })scrollViewContentOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })switcherViewBounds;
- (id)visibleAppLayouts;
- (long long)wallpaperStyle;

@end

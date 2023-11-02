
@interface AXSB_SBAssistantControllerSafeCategory : __AXSB_SBAssistantControllerSafeCategory_super

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (void)_axCancelDismissSiriForAssistiveTouch;
- (void)_axDismissSiriForAssistiveTouch;
- (void)_axScheduleDismissSiriForAssistiveTouch;
- (void)_axSetSiriDismissalIsForAssistiveTouch:(bool)arg1;
- (void)_axSetSiriDismissalOptions:(id)arg1;
- (bool)_axSiriDismissalIsForAssistiveTouch;
- (id)_axSiriDismissalOptions;
- (void)_dismissAssistantViewIfNecessaryWithAnimation:(long long)arg1 factory:(id)arg2 dismissalOptions:(id)arg3 windowScene:(id)arg4 completion:(id /* block */)arg5;

@end


@protocol UIScribbleInteractionDelegatePrivate <UIScribbleInteractionDelegate>

@optional

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_scribbleInteraction:(UIScribbleInteraction *)arg1 hitToleranceInsetsWithDefaultInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (bool)_scribbleInteractionShouldDisableInputAssistant:(UIScribbleInteraction *)arg1;

@end

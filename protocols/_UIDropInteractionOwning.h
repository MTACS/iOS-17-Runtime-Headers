
@protocol _UIDropInteractionOwning <_UIGestureOwning, UIPasteConfigurationSupporting>

@required

- (UIDropInteraction *)_dynamicDropInteraction;
- (void)_setDynamicDropInteraction:(UIDropInteraction *)arg1;

@end

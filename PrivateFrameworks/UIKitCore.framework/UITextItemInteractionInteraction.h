
@interface UITextItemInteractionInteraction : UITextInteraction

+ (bool)mightResponder:(id)arg1 haveInteractableTextItemAtPoint:(struct CGPoint { double x1; double x2; })arg2 precision:(unsigned long long)arg3;
+ (bool)mightResponderHaveTextItemInteractions:(id)arg1;

- (bool)_allowItemInteractions;

@end

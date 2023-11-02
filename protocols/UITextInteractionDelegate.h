
@protocol UITextInteractionDelegate <NSObject>

@optional

- (void)interactionDidEnd:(UITextInteraction *)arg1;
- (bool)interactionShouldBegin:(UITextInteraction *)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)interactionWillBegin:(UITextInteraction *)arg1;

@end

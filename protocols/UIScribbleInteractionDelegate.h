
@protocol UIScribbleInteractionDelegate <NSObject>

@optional

- (bool)scribbleInteraction:(UIScribbleInteraction *)arg1 shouldBeginAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)scribbleInteractionDidFinishWriting:(UIScribbleInteraction *)arg1;
- (bool)scribbleInteractionShouldDelayFocus:(UIScribbleInteraction *)arg1;
- (void)scribbleInteractionWillBeginWriting:(UIScribbleInteraction *)arg1;

@end

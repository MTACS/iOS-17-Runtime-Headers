
@protocol _UIPassthroughScrollInteractionDelegate <NSObject>

@required

- (bool)passthroughScrollInteraction:(_UIPassthroughScrollInteraction *)arg1 shouldInteractAtLocation:(struct CGPoint { double x1; double x2; })arg2 withEvent:(UIEvent *)arg3;
- (bool)passthroughScrollInteractionDidRecognize:(_UIPassthroughScrollInteraction *)arg1;

@end

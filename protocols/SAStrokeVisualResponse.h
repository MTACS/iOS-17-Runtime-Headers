
@protocol SAStrokeVisualResponse <NSObject>

@required

- (void)endAnimation;
- (<SAStrokeAnimatingDelegate> *)interactionDelegate;
- (void)setInteractionDelegate:(id <SAStrokeAnimatingDelegate>)arg1;
- (void)startAnimationRepeating:(bool)arg1;
- (void)updateWithData:(SAStrokeData *)arg1;

@end

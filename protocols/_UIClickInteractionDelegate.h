
@protocol _UIClickInteractionDelegate <NSObject>

@required

- (void)clickInteractionDidClickUp:(_UIClickInteraction *)arg1;

@optional

- (void)clickInteractionDidClickDown:(_UIClickInteraction *)arg1;
- (void)clickInteractionDidEnd:(_UIClickInteraction *)arg1;
- (bool)clickInteractionShouldBegin:(_UIClickInteraction *)arg1;
- (<UIInteractionEffect> *)highlightEffectForClickInteraction:(_UIClickInteraction *)arg1;

@end

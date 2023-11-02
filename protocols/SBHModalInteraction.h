
@protocol SBHModalInteraction <NSObject>

@required

- (void)beginInteractionAnimated:(bool)arg1;
- (void)endInteractionAnimated:(bool)arg1;
- (<SBHModalInteractionDelegate> *)modalInteractionDelegate;
- (void)setModalInteractionDelegate:(id <SBHModalInteractionDelegate>)arg1;

@end

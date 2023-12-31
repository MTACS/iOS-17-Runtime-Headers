
@protocol HUQuickControlViewInteractionDelegate <NSObject>

@required

- (void)controlView:(id <HUQuickControlInteractiveView>)arg1 interactionStateDidChange:(bool)arg2 forFirstTouch:(bool)arg3;
- (void)controlView:(id <HUQuickControlInteractiveView>)arg1 valueDidChange:(id)arg2;

@end

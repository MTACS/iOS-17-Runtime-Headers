
@protocol SBPIPSceneContentContainerAdapterDelegate <NSObject>

@required

- (void)contentContainerAdapter:(SBPIPSceneContentContainerAdapter *)arg1 handleDestructionRequestForSceneHandle:(SBDeviceApplicationSceneHandle *)arg2;
- (void)contentContainerAdapter:(SBPIPSceneContentContainerAdapter *)arg1 willBeginInteractionWithGestureRecognizer:(UIGestureRecognizer *)arg2;
- (void)contentContainerAdapter:(SBPIPSceneContentContainerAdapter *)arg1 willUpdateStashState:(bool)arg2;
- (void)contentContainerAdapterDidEndInteraction:(SBPIPSceneContentContainerAdapter *)arg1 targetWindowScene:(SBWindowScene *)arg2;
- (void)contentContainerAdapterPanGestureDidEnd:(SBPIPSceneContentContainerAdapter *)arg1;
- (bool)contentContainerAdapterShouldUpdateUIForStashing:(SBPIPSceneContentContainerAdapter *)arg1;
- (bool)initialStashStateForContentContainerAdapter:(SBPIPSceneContentContainerAdapter *)arg1;

@end


@protocol _UIViewInProcessAnimationManagerDriver <NSObject>

@required

- (void)finishAdvancingAnimationManager;
- (void)startAdvancingAnimationManager:(id <_UIViewInProcessDrivableAnimationManager>)arg1;

@end

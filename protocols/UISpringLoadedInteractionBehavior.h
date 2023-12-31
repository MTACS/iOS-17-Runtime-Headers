
@protocol UISpringLoadedInteractionBehavior <NSObject>

@required

- (bool)shouldAllowInteraction:(UISpringLoadedInteraction *)arg1 withContext:(id <UISpringLoadedInteractionContext>)arg2;

@optional

- (void)interactionDidFinish:(UISpringLoadedInteraction *)arg1;

@end

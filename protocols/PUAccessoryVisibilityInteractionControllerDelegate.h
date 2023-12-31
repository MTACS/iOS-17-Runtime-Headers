
@protocol PUAccessoryVisibilityInteractionControllerDelegate <NSObject>

@required

- (UIView *)accessoryVisibilityInteractionControllerViewHostingGestureRecognizers:(PUAccessoryVisibilityInteractionController *)arg1;

@optional

- (bool)accessoryVisibilityInteractionController:(PUAccessoryVisibilityInteractionController *)arg1 canBeginAtLocationFromProvider:(id <PUDisplayLocationProvider>)arg2;
- (bool)accessoryVisibilityInteractionController:(PUAccessoryVisibilityInteractionController *)arg1 isLocationFromProviderInAccessoryContent:(id <PUDisplayLocationProvider>)arg2;
- (void)accessoryVisibilityInteractionController:(PUAccessoryVisibilityInteractionController *)arg1 setAccessoryVisible:(bool)arg2 changeReason:(long long)arg3;
- (void)accessoryVisibilityInteractionControllerDidEnd:(PUAccessoryVisibilityInteractionController *)arg1;

@end

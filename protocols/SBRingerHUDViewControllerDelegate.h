
@protocol SBRingerHUDViewControllerDelegate <NSObject>

@required

- (void)ringerHUDViewControllerWantsToBeDismissed:(SBRingerHUDViewController *)arg1;
- (void)ringerHUDViewControllerWantsToBePresented:(SBRingerHUDViewController *)arg1;

@end

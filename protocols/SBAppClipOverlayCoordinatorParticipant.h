
@protocol SBAppClipOverlayCoordinatorParticipant <NSObject>

@required

- (void)appClipOverlayCoordinator:(SBAppClipOverlayCoordinator *)arg1 requestsSurrenderOfViewController:(CPSClipOverlayViewController *)arg2;
- (NSString *)participantName;

@end


@interface DDTrackShipmentAction : DDAction

- (bool)canBePerformedByOpeningURL;
- (id)iconName;
- (id)localizedName;
- (id)notificationIconBundleIdentifier;
- (id)notificationTitle;
- (id)notificationURL;
- (void)performFromView:(id)arg1;
- (id)quickActionTitle;

@end

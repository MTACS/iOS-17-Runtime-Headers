
@protocol GKPlayerAvatarViewDelegate <NSObject>

@optional

- (void)avatarContentIsReady;
- (void)didSelectPlayerAvatarView:(GKDashboardPlayerPhotoView *)arg1;
- (void)didSetPlayerAvatarImage:(GKDashboardPlayerPhotoView *)arg1;

@end

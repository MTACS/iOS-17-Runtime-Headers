
@protocol CNKParticipantScreenShareInfoViewProtocol <NSObject>

@required

- (UIImage *)avatarImage;
- (void)configureWith:(NSString *)arg1 isFullScreenMode:(bool)arg2;
- (double)customCornerRadius;
- (void)layoutSubviews;
- (double)preferredHeight;
- (void)setAvatarImage:(UIImage *)arg1;
- (void)setCustomCornerRadius:(double)arg1;

@end

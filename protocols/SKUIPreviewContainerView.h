
@protocol SKUIPreviewContainerView <NSObject>

@required

- (void)hidePreviewProgressAnimated:(bool)arg1;
- (void)showPreviewProgressWithStatus:(SUPlayerStatus *)arg1 animated:(bool)arg2;
- (void)togglePreviewPlaybackAnimated:(bool)arg1;

@end
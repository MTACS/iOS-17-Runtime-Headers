
@protocol VKNavContextObserver <NSObject>

@required

- (void)navContextCameraHeadingOverrideDidChange:(VKNavContext *)arg1;
- (void)navContextStateDidChange:(VKNavContext *)arg1;

@end

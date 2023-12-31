
@protocol VideosExtrasContextDelegate <VideosExtrasPlaybackDelegate>

@required

- (void)extrasContext:(VideosExtrasContext *)arg1 hadFatalError:(NSError *)arg2;

@optional

- (void)extrasContext:(VideosExtrasContext *)arg1 extrasVisibilityNeedsUpdate:(bool)arg2;
- (void)extrasContextDidLoadMainMenuItems:(VideosExtrasContext *)arg1;

@end


@protocol VideosExtrasPlaybackDelegate <NSObject>

@required

- (void)extrasRequestReloadWithContext:(MPPlaybackContext *)arg1;
- (void)extrasRequestsMediaPlayback:(NSArray *)arg1 isBackground:(bool)arg2;
- (void)extrasRequestsPlaybackStop;

@optional

- (void)extrasBackButtonPressed;
- (void)extrasDoneButtonPressed;
- (void)extrasMenuItemSelected:(IKMenuItemElement *)arg1 atIndex:(unsigned long long)arg2;

@end

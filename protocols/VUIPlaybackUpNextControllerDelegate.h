
@protocol VUIPlaybackUpNextControllerDelegate <NSObject>

@optional

- (void)backgroundPlaybackWillBegin;
- (void)mediaInfoDidChangeTo:(VUIMediaInfo *)arg1 canPlay:(bool)arg2 wasAutoPlayed:(bool)arg3;
- (void)playbackUpNextControllerDidUpdate;
- (void)playbackUpNextControllerReadyToBeDisplayed;
- (void)userDidInteract:(NSString *)arg1;
- (void)userDidSelect:(bool)arg1;

@end

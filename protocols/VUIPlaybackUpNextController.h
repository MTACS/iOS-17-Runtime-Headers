
@protocol VUIPlaybackUpNextController <NSObject>

@required

- (double)playbackUpNextViewHeight;
- (void)recordUpNextImpressions;
- (void)setPlaybackUpNextContextData:(NSDictionary *)arg1;
- (void)setPlaybackUpNextDelegate:(id <VUIPlaybackUpNextControllerDelegate>)arg1;
- (void)startAutoPlayAnimation;

@end

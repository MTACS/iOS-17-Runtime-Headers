
@protocol AVScrubbingGesturePlatformAdapterDelegate <NSObject>

@required

- (bool)scrubbingGesturePlatformAdapterIsActivelyScrubbing:(AVScrubbingGesturePlatformAdapter *)arg1;

@optional

- (AVScrubbingGesturePlatformConfiguration *)configurationForScrubbingGesturePlatformAdapter:(AVScrubbingGesturePlatformAdapter *)arg1;
- (void)scrubbingGesturePlatformAdapterDidBeginScrubbing:(AVScrubbingGesturePlatformAdapter *)arg1;
- (void)scrubbingGesturePlatformAdapterDidContinueScrubbing:(AVScrubbingGesturePlatformAdapter *)arg1;
- (void)scrubbingGesturePlatformAdapterDidEndScrubbing:(AVScrubbingGesturePlatformAdapter *)arg1;

@end

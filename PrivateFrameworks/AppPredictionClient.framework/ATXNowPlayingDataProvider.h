
@interface ATXNowPlayingDataProvider : NSObject {
    ATXCoreDuetContextHelper * _coreDuetContextHelper;
    ATXNowPlayingEvent * _lastNowPlayingEvent;
}

- (void).cxx_destruct;
- (id)currentNowPlayingEvent;
- (id)init;
- (bool)isTVExperienceAppNowPlaying;

@end


@interface ATXNowPlayingEvent : NSObject {
    NSString * _bundleId;
    long long  _nowPlayingState;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) long long nowPlayingState;

- (void).cxx_destruct;
- (id)bundleId;
- (id)initWithContextInfo:(id)arg1;
- (bool)isTVExperienceAppNowPlaying;
- (long long)nowPlayingState;

@end

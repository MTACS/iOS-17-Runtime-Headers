
@interface MusicKit_SoftLinking_MPPlaybackUserDefaults : NSObject {
    MPPlaybackUserDefaults * _underlyingPlaybackUserDefaults;
}

@property (nonatomic, readonly) bool isPrivateListeningEnabled;
@property (nonatomic, readonly) long long preferredMusicLowBandwidthResolution;
@property (nonatomic, readonly) long long preferredVideoLowBandwidthResolution;

+ (id)preferredResolutionsDidChangeNotification;
+ (id)standardUserDefaults;

- (void).cxx_destruct;
- (void)_handlePreferredResolutionsDidChangeNotification:(id)arg1;
- (id)_initWithUnderlyingPlaybackUserDefaults:(id)arg1;
- (void)dealloc;
- (bool)isPrivateListeningEnabled;
- (long long)preferredMusicLowBandwidthResolution;
- (long long)preferredVideoLowBandwidthResolution;

@end

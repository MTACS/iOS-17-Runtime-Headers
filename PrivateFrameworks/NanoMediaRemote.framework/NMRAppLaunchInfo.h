
@interface NMRAppLaunchInfo : NSObject {
    NSURL * _URL;
    NSString * _bundleID;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSString *bundleID;

- (void).cxx_destruct;
- (id)URL;
- (bool)_shouldLaunchPlaybackAppForRoute:(id)arg1;
- (id)bundleID;
- (id)initWithPlayerResponse:(id)arg1;

@end

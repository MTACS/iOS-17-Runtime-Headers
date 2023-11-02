
@interface ATXAppOrClipLaunch : NSObject {
    NSString * _bundleId;
    bool  _isClip;
    double  _latitude;
    int  _launchReason;
    double  _longitude;
    NSString * _urlHash;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) bool isClip;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) int launchReason;
@property (nonatomic, readonly) double longitude;
@property (nonatomic, readonly) NSString *urlHash;

- (void).cxx_destruct;
- (id)bundleId;
- (id)initAppClipLaunchWithBundleId:(id)arg1 urlHash:(id)arg2 launchReason:(int)arg3;
- (id)initAppClipLaunchWithBundleId:(id)arg1 urlHash:(id)arg2 launchReason:(int)arg3 latitude:(double)arg4 longitude:(double)arg5;
- (id)initAppLaunchWithBundleId:(id)arg1;
- (id)initAppLaunchWithBundleId:(id)arg1 launchReason:(int)arg2 latitude:(double)arg3 longitude:(double)arg4;
- (bool)isClip;
- (double)latitude;
- (int)launchReason;
- (double)longitude;
- (id)urlHash;

@end

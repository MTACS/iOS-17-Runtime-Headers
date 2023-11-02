
@interface CSAudioPlayingApp : NSObject {
    NSString * _appName;
    NSString * _bundleId;
    NSString * _version;
}

@property (nonatomic, readonly) NSString *appName;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) NSString *version;

- (void).cxx_destruct;
- (id)appName;
- (id)bundleId;
- (id)initWithPid:(int)arg1;
- (id)version;

@end


@interface _DKScreenSharingMonitor : _DKMonitor {
    long long  _currentMirroringDeviceCount;
    AVOutputContext * _outputContext;
    BMScreenSharingStream * _screenSharingStream;
}

@property (nonatomic) long long currentMirroringDeviceCount;
@property (nonatomic, retain) AVOutputContext *outputContext;
@property (nonatomic, retain) BMScreenSharingStream *screenSharingStream;

+ (id)entitlements;
+ (id)eventStream;

- (void).cxx_destruct;
- (long long)currentMirroringDeviceCount;
- (void)deactivate;
- (id)init;
- (void)mirroringDidChange:(id)arg1;
- (id)outputContext;
- (void)registerForScreenMirroringNotifications;
- (id)screenSharingStream;
- (void)setCurrentMirroringDeviceCount:(long long)arg1;
- (void)setOutputContext:(id)arg1;
- (void)setScreenSharingStream:(id)arg1;
- (void)start;
- (void)stop;

@end

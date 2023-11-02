
@interface IAPAudioCallbackInfo : NSObject {
    int (* _deviceStateChangedCallback;
    void * _deviceStateChangedContext;
    CPDistributedNotificationCenter * _dnCenter;
    struct __CFRunLoop { } * _dnCenterRunLoop;
    CPDistributedNotificationCenter * _dnCenteriAP2;
    NSLock * _lock;
    int (* _pauseOnHeadphoneDisconnectChangedCallback;
    void * _pauseOnHeadphoneDisconnectChangedContext;
    int (* _volumeChangedCallback;
    void * _volumeChangedContext;
    int (* _volumeControlSupportChangedCallback;
    void * _volumeControlSupportChangedContext;
}

+ (id)sharedInstance;

- (void)_deviceStateChanged:(id)arg1;
- (void)_handleiAPDaemonDied:(id)arg1;
- (void)_pauseOnHeadphoneDisconnectChanged:(id)arg1;
- (void)_volumeChanged:(id)arg1;
- (void)_volumeControlSupportChanged:(id)arg1;
- (void)clearDeviceStateChangedCallback;
- (void)clearPauseOnHeadphoneDisconnectChangedCallback;
- (void)clearVolumeChangedCallback;
- (void)clearVolumeControlSupportChangedCallback;
- (void)dealloc;
- (id)init;
- (void)setupDeviceStateChangedCallback:(int (*)arg1 withContext:(void*)arg2 andRunLoop:(struct __CFRunLoop { }*)arg3;
- (void)setupPauseOnHeadphoneDisconnectChangedCallback:(int (*)arg1 withContext:(void*)arg2 andRunLoop:(struct __CFRunLoop { }*)arg3;
- (void)setupVolumeChangedCallback:(int (*)arg1 withContext:(void*)arg2 andRunLoop:(struct __CFRunLoop { }*)arg3;
- (void)setupVolumeControlSupportChangedCallback:(int (*)arg1 withContext:(void*)arg2 andRunLoop:(struct __CFRunLoop { }*)arg3;
- (void)startNotificationCenterOnRunLoop:(struct __CFRunLoop { }*)arg1;

@end

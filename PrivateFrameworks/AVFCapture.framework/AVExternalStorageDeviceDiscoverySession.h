
@interface AVExternalStorageDeviceDiscoverySession : NSObject {
    struct OpaqueFigExternalStorageDeviceManager { } * _externalStorageDeviceManager;
    NSMutableArray * _externalStorageDevices;
    struct OpaqueFigSimpleMutex { } * _lock;
    NSMutableArray * _uuidOfExternalStorageDevice;
    AVWeakReference * _weakReference;
}

@property (readonly) NSArray *externalStorageDevices;

+ (void)initialize;
+ (bool)isSupported;
+ (id)sharedSession;

- (int)_checkAuthorizationStatus;
- (void)_reconnectToServer;
- (void)_requestAuthorization:(id /* block */)arg1;
- (int)_setupExternalStorageDeviceDiscoverySession;
- (void)_tearDownExternalStorageDeviceDiscoverySessionToReconnectToServer:(bool)arg1;
- (void)dealloc;
- (id)externalStorageDevices;
- (id)init;

@end

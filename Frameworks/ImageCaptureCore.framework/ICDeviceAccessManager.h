
@interface ICDeviceAccessManager : NSObject {
    NSObject<OS_dispatch_queue> * _deviceAccessQueue;
    struct sqlite3 { } * _externalMediaAccessDB;
}

@property NSObject<OS_dispatch_queue> *deviceAccessQueue;

+ (id)sharedAccessManager;

- (void)addBundleIdentifier:(id)arg1;
- (id)allBundleIdentifiers;
- (unsigned long long)bundleIdentifier:(id)arg1 stateForAccessType:(id)arg2;
- (id)bundleIdentifiersAccessingExternalCameras;
- (id)bundleIdentifiersAccessingExternalCamerasWithStatus;
- (id)bundleIdentifiersWithAccessType:(id)arg1;
- (bool)captureUserIntentForBundleIdentifier:(id)arg1 withNotification:(id)arg2;
- (void)dealloc;
- (id)deviceAccessQueue;
- (void)displayAlertForApplication:(id)arg1 withNotification:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)init;
- (bool)internalBundleIdentifierHasAccess:(id)arg1;
- (void)revokeBundleIdentifier:(id)arg1;
- (void)setDeviceAccessQueue:(id)arg1;
- (void)updateApplicationWithBundleIdentifier:(id)arg1 withStatus:(bool)arg2;
- (void)updateBundleIdentifier:(id)arg1 accessType:(id)arg2 withState:(unsigned long long)arg3;
- (bool)validateBundleIdentifierInstalled:(id)arg1;

@end

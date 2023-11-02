
@interface ICSecurityInfo : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    int  _firstUnlockNotificationToken;
    bool  _hasLoadedContentProtectionEnabled;
    bool  _hasLoadedDeviceClassCUnlocked;
    bool  _isContentProtectionEnabled;
    bool  _isDeviceClassCUnlocked;
    NSMutableArray * _pendingFirstUnlockBlocks;
}

@property (getter=isContentProtectionEnabled, nonatomic, readonly) bool contentProtectionEnabled;
@property (getter=isDeviceClassCUnlocked, nonatomic, readonly) bool deviceClassCUnlocked;
@property (getter=isDeviceUnlocked, nonatomic, readonly) bool deviceUnlocked;

+ (id)sharedSecurityInfo;

- (void).cxx_destruct;
- (void)_getContentProtectionEnabled:(bool*)arg1 isDeviceClassCUnlocked:(bool*)arg2;
- (void)_loadContentProtectionEnabled:(bool)arg1 isDeviceClassCUnlocked:(bool)arg2;
- (void)_processFirstUnlockNotification;
- (void)dealloc;
- (id)init;
- (bool)isContentProtectionEnabled;
- (bool)isDeviceClassCUnlocked;
- (bool)isDeviceUnlocked;
- (void)performBlockAfterFirstUnlock:(id /* block */)arg1;

@end

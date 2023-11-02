
@interface SRUIFCachedPreferences : NSObject {
    bool  _announceNotificationsInCarPlayTemporarilyDisabled;
    UAFAssetUtilities * _assetUtilities;
    bool  _isHoldToTalkForTextInputEnabled;
    bool  _isSiriMiniEnabled;
    bool  _isSiriSafeForLockScreen;
    bool  _isStreamingDictationEnabled;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    NSUserDefaults * _textInputDefaults;
}

@property (nonatomic, readonly) bool announceNotificationsInCarPlayTemporarilyDisabled;
@property (nonatomic, readonly) bool isHoldToTalkForTextInputEnabled;
@property (nonatomic, readonly) bool isSiriMiniEnabled;
@property (nonatomic, readonly) bool isSiriSafeForLockScreen;
@property (nonatomic, readonly) bool isStreamingDictationEnabled;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_notifyObserversOfSettingsChangeWithBlock:(id /* block */)arg1;
- (void)_setAnnounceNotificationsInCarPlayTemporarilyDisabled:(bool)arg1;
- (void)addObserver:(id)arg1;
- (bool)announceNotificationsInCarPlayTemporarilyDisabled;
- (void)dealloc;
- (id)init;
- (bool)isHoldToTalkForTextInputEnabled;
- (bool)isSiriMiniEnabled;
- (bool)isSiriSafeForLockScreen;
- (bool)isStreamingDictationEnabled;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeObserver:(id)arg1;
- (bool)understandingOnDeviceAssetsAvailable;
- (void)updatePreferences;

@end

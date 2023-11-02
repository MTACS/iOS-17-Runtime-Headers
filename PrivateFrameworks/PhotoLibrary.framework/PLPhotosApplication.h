
@interface PLPhotosApplication : UIApplication <UIApplicationDelegate> {
    NSString * _currentTestName;
    NSDictionary * _currentTestOptions;
    bool  _isOnWifi;
    bool  _isReachable;
    NSSet * _notificationSuppressionContexts;
    int  _observeForRechabilityChanges;
    int  _photoStreamActivityToken;
    bool  _receivingRemoteControlEvents;
    int  _sharedPhotoStreamActivityToken;
    int  _sharedPhotoStreamInvitationFailureToken;
}

@property (nonatomic, retain) NSString *currentTestName;
@property (nonatomic, retain) NSDictionary *currentTestOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isOnWifi;
@property (nonatomic, readonly) bool isReachable;
@property (nonatomic, copy) NSSet *notificationSuppressionContexts;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIWindow *window;

+ (void)initialize;

- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_networkReachabilityDidChange:(id)arg1;
- (void)_registerForPhotoStreamActivityNotifications;
- (void)_startObservingReachabilityChanges;
- (void)_stopObservingReachabilityChanges;
- (void)_unregisterForPhotoStreamActivityNotifications;
- (void)_updateSuspensionSettings;
- (void)applicationDidFinishLaunching:(id)arg1;
- (id)currentTestName;
- (id)currentTestOptions;
- (void)dealloc;
- (void)disableNetworkObservation;
- (void)enableNetworkObservation;
- (void)handleImportCompleteAlertResponse:(struct __CFUserNotification { }*)arg1 flags:(unsigned long long)arg2;
- (bool)isOnWifi;
- (bool)isReachable;
- (id)notificationSuppressionContexts;
- (void)photosPreferencesChanged;
- (void)prepareForApplicationDidBecomeActive;
- (void)prepareForApplicationDidEnterBackground;
- (void)prepareForApplicationWillEnterForeground;
- (void)setCurrentTestName:(id)arg1;
- (void)setCurrentTestOptions:(id)arg1;
- (void)setNotificationSuppressionContexts:(id)arg1;
- (void)setReceivingRemoteControlEvents:(bool)arg1;
- (bool)useCompatibleSuspensionAnimation;

@end

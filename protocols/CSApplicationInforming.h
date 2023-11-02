
@protocol CSApplicationInforming <NSObject>

@required

- (void)addApplicationInformationObserver:(id <CSApplicationInformationObserving>)arg1;
- (bool)isBundleIdentifierBlockedForScreenTimeExpiration:(NSString *)arg1;
- (bool)isBundleIdentifierClock:(NSString *)arg1;
- (bool)isBundleIdentifierUserVisible:(NSString *)arg1;
- (bool)isBundleIdentifierWallet:(NSString *)arg1;
- (void)removeApplicationInformationObserver:(id <CSApplicationInformationObserving>)arg1;
- (bool)shouldScreenTimeSuppressNotificationsForBundleIdentifier:(NSString *)arg1;

@end

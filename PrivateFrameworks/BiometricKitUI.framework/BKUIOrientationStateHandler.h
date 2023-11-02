
@interface BKUIOrientationStateHandler : NSObject {
    long long  _lastKownOrientation;
    int  _orientationLockToken;
    int  _orientationNotificationToken;
    int  _rawOrientationToken;
    int  _rotationLockNotificationToken;
}

@property (nonatomic) long long lastKownOrientation;
@property (nonatomic) int orientationLockToken;
@property (nonatomic) int orientationNotificationToken;
@property (nonatomic) int rawOrientationToken;
@property (nonatomic) int rotationLockNotificationToken;

+ (unsigned long long)bkui_getState:(int)arg1;

- (void)_invalidateTokenIfNeeded:(int)arg1;
- (void)dealloc;
- (id)init;
- (long long)lastKownOrientation;
- (int)orientationLockToken;
- (int)orientationNotificationToken;
- (long long)rawDeviceOrientationIgnoringOrientationLocks;
- (int)rawOrientationToken;
- (void)registerRotationLockObserver:(id /* block */)arg1;
- (void)registerRotationObserver:(id /* block */)arg1;
- (int)rotationLockNotificationToken;
- (bool)rotationLockStatusIsLocked;
- (void)setLastKownOrientation:(long long)arg1;
- (void)setOrientationLockToken:(int)arg1;
- (void)setOrientationNotificationToken:(int)arg1;
- (void)setRawOrientationToken:(int)arg1;
- (void)setRotationLockNotificationToken:(int)arg1;

@end

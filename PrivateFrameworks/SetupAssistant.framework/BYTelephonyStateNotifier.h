
@interface BYTelephonyStateNotifier : NSObject {
    int  _simUnlockNotificationToken;
}

@property (nonatomic) int simUnlockNotificationToken;

+ (unsigned long long)retrieveSIMUnlockStateFromToken:(int)arg1;

- (void)_beginObservingWithNotificationQueue:(id)arg1 notificationBlock:(id /* block */)arg2;
- (void)_endObservingState;
- (unsigned long long)currentSIMUnlockState;
- (void)dealloc;
- (id)initForNotifying;
- (id)initWithNotificationQueue:(id)arg1 notificationBlock:(id /* block */)arg2;
- (void)notifySIMUnlockStateChangedTo:(unsigned long long)arg1;
- (void)setSimUnlockNotificationToken:(int)arg1;
- (int)simUnlockNotificationToken;

@end

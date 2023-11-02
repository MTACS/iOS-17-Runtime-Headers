
@interface ATXLockscreenBlacklist : NSObject {
    int  _libnotifyToken;
    _PASLock * _lock;
    id  _notificationCenterToken;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)blacklist;
- (void)dealloc;
- (id)init;
- (bool)isPredictionGloballyDisabled;

@end

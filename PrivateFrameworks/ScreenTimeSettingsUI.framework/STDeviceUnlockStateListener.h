
@interface STDeviceUnlockStateListener : NSObject {
    id /* block */  _lockStateChangeHandler;
    int  _notifyToken;
}

@property (nonatomic, readonly) bool deviceIsLocked;
@property (nonatomic, copy) id /* block */ lockStateChangeHandler;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)deviceIsLocked;
- (id)init;
- (id /* block */)lockStateChangeHandler;
- (void)setLockStateChangeHandler:(id /* block */)arg1;

@end

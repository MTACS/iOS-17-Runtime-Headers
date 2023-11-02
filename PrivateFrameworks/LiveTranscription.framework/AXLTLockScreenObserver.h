
@interface AXLTLockScreenObserver : NSObject {
    <AXLTLockScreenObserverDelegate> * _delegate;
    bool  _isScreenLocked;
    int  _notifyLockStateToken;
}

@property (nonatomic) <AXLTLockScreenObserverDelegate> *delegate;

- (void).cxx_destruct;
- (void)_registerScreenNotification;
- (void)_updateScreenLock:(int)arg1;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;

@end

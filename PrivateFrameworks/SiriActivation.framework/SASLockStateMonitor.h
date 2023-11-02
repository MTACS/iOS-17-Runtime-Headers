
@interface SASLockStateMonitor : NSObject {
    NSNumber * _assistantIsEnabled;
    <SASLockStateMonitorDelegate> * _delegate;
    unsigned long long  _lockState;
    bool  _unlockedByTouchID;
}

@property (nonatomic, retain) NSNumber *assistantIsEnabled;
@property (nonatomic) <SASLockStateMonitorDelegate> *delegate;
@property (nonatomic) unsigned long long lockState;
@property (nonatomic) bool unlockedByTouchID;

- (void).cxx_destruct;
- (unsigned long long)_currentLockState;
- (void)_lockStateDidChange:(id)arg1;
- (void)_updateLockState;
- (id)assistantIsEnabled;
- (void)dealloc;
- (id)delegate;
- (bool)hasUnlockedSinceBoot;
- (id)init;
- (bool)isBlocked;
- (bool)isScreenOn;
- (unsigned long long)lockState;
- (void)setAssistantIsEnabled:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLockState:(unsigned long long)arg1;
- (void)setUnlockedByTouchID:(bool)arg1;
- (bool)unlockedByTouchID;

@end


@interface WebLowPowerModeObserver : NSObject {
    bool  _isLowPowerModeEnabled;
    void * _notifier;
}

@property (nonatomic, readonly) bool isLowPowerModeEnabled;
@property (nonatomic) void*notifier;

- (void)_didReceiveLowPowerModeChange;
- (void)dealloc;
- (id)initWithNotifier:(void*)arg1;
- (bool)isLowPowerModeEnabled;
- (void*)notifier;
- (void)setNotifier:(void*)arg1;

@end

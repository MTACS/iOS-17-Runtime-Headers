
@interface SOSProcessObserver : NSObject {
    BKSApplicationStateMonitor * _applicationMonitor;
    bool  _cachedApplicationRunning;
    <SOSProcessObserverDelegate> * _delegate;
}

@property (nonatomic, readonly) BKSApplicationStateMonitor *applicationMonitor;
@property (nonatomic) bool cachedApplicationRunning;
@property (nonatomic) <SOSProcessObserverDelegate> *delegate;

+ (bool)isApplicationStateRunning:(unsigned int)arg1;

- (void).cxx_destruct;
- (id)applicationMonitor;
- (void)applicationMonitorStateDidChangeForBundleIdentifier:(id)arg1;
- (bool)cachedApplicationRunning;
- (void)dealloc;
- (id)delegate;
- (id)initWithBundleIdentifier:(id)arg1;
- (void)setCachedApplicationRunning:(bool)arg1;
- (void)setDelegate:(id)arg1;

@end

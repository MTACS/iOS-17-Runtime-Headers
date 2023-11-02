
@interface CHDeviceObserver : CHDelegateManager {
    bool  _bootLockEnabled;
    <CHDeviceDataSource> * _dataSource;
    CHNotifyObserver * _firstUnlockNotifyObserver;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (getter=isBootLockEnabled, nonatomic) bool bootLockEnabled;
@property (nonatomic, readonly) <CHDeviceDataSource> *dataSource;
@property (nonatomic, retain) CHNotifyObserver *firstUnlockNotifyObserver;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)dataSource;
- (id)firstUnlockNotifyObserver;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (id)initWithQueue:(id)arg1 dataSource:(id)arg2;
- (bool)isBootLockEnabled;
- (void)performDelegateSelector:(SEL)arg1 withDelegate:(id)arg2;
- (id)queue;
- (void)setBootLockEnabled:(bool)arg1;
- (void)setFirstUnlockNotifyObserver:(id)arg1;

@end


@interface VKNotificationObserver : NSObject {
    NSObject<OS_dispatch_source> * _memoryNotificationEventSource;
    SEL  _selector;
    <VKNotificationObserverDelegate> * _target;
}

- (void).cxx_destruct;
- (void)_receivedFlushTileCachesNotification;
- (void)_receivedLocalChangedNotification;
- (void)_receivedMemoryNotification;
- (void)_receivedPowerStateDidChangeNotification;
- (void)_receivedThermalStateDidChangeNotification;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 taskContext:(const void*)arg2;

@end

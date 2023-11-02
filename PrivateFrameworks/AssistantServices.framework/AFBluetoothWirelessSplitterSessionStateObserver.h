
@interface AFBluetoothWirelessSplitterSessionStateObserver : NSObject <AFInvalidating, AFNotifyObserverDelegate> {
    <AFBluetoothWirelessSplitterSessionStateObserverDelegate> * _delegate;
    AFNotifyObserver * _notifyObserver;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidate;
- (void)_setState:(long long)arg1;
- (void)dealloc;
- (void)getStateWithCompletion:(id /* block */)arg1;
- (id)initWithQueue:(id)arg1 delegate:(id)arg2;
- (void)invalidate;
- (void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)notifyObserver:(id)arg1 didReceiveNotificationWithToken:(int)arg2;
- (long long)state;

@end


@interface NPKWifiObserver : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    <NPKWiFiObserverDelegate> * _delegate;
    _Atomic bool  _wiFiEnabled;
}

@property (nonatomic) <NPKWiFiObserverDelegate> *delegate;

- (void).cxx_destruct;
- (void)_setupInterface;
- (void)_updateWiFiStateAndNotifiyObserver:(bool)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithCallbackQueue:(id)arg1;
- (bool)isWifiEnabled;
- (void)setDelegate:(id)arg1;

@end

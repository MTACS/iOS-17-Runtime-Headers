
@interface SBSetupWiFiScanner : NSObject {
    id /* block */  _completionHandler;
    NSThread * _scanningThread;
    long long  _state;
    struct __WiFiDeviceClient { } * _wifiDevice;
    struct __WiFiManagerClient { } * _wifiManager;
}

@property (getter=_completionHandler, setter=_setCompletionHandler:, copy) id /* block */ completionHandler;
@property (getter=_scanningThread, setter=_setScanningThread:, retain) NSThread *scanningThread;
@property (getter=_state, setter=_setState:, nonatomic) long long state;

- (void).cxx_destruct;
- (id /* block */)_completionHandler;
- (id)_scanningThread;
- (void)_setCompletionHandler:(id /* block */)arg1;
- (void)_setScanningThread:(id)arg1;
- (void)_setState:(long long)arg1;
- (long long)_state;
- (void)_thread_callCompletionHandlerWithGuessedCountries:(id)arg1;
- (void)_thread_cancelScanning;
- (void)_thread_closeWifiConnection;
- (void)_thread_wifiScanComplete:(struct __CFArray { }*)arg1 error:(bool)arg2;
- (void)_wifiScanningThread;
- (void)beginScanningWithCompletionHandler:(id /* block */)arg1;
- (void)cancel;
- (void)dealloc;

@end


@interface CSAudioServerCrashMonitor : CSEventMonitor {
    unsigned long long  _serverState;
}

@property (nonatomic) unsigned long long serverState;

+ (id)sharedInstance;

- (void)_didReceiveMediaserverNotification:(unsigned long long)arg1;
- (void)_mediaserverdDidRestart;
- (void)_notifyObserver:(id)arg1 withMediaserverState:(unsigned long long)arg2;
- (void)_startMonitoringWithQueue:(id)arg1;
- (id)init;
- (unsigned long long)serverState;
- (void)setServerState:(unsigned long long)arg1;

@end

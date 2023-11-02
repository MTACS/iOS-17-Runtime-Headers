
@protocol CSAudioServerCrashMonitorDelegate <NSObject>

@optional

- (void)CSAudioServerCrashMonitorDidReceiveServerCrash:(CSAudioServerCrashMonitor *)arg1;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(CSAudioServerCrashMonitor *)arg1;

@end

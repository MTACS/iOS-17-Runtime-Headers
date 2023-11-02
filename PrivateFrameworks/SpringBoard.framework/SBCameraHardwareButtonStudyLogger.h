
@interface SBCameraHardwareButtonStudyLogger : NSObject {
    SLGNotificationActivatedLogger * _logger;
    bool  _monitoringProcesses;
}

- (void).cxx_destruct;
- (void)_handleApplicationProcessStateDidChangeNotification:(id)arg1;
- (void)_startProcessMonitor;
- (void)_stopProcessMonitor;
- (void)dealloc;
- (id)init;
- (void)logButtonEvent:(struct __IOHIDEvent { }*)arg1;
- (void)logPocketState:(long long)arg1;

@end

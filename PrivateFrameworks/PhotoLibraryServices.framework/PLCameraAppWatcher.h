
@interface PLCameraAppWatcher : NSObject <PLForegroundMonitorDelegate> {
    PLForegroundMonitor * _foregroundMonitor;
    bool  _isCameraRunning;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PLForegroundMonitor *foregroundMonitor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCameraRunning;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)foregroundMonitor;
- (void)foregroundMonitor:(id)arg1 changedStateToForeground:(bool)arg2 forBundleIdentifier:(id)arg3;
- (id)init;
- (bool)isCameraRunning;

@end

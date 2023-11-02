
@interface MKApplicationStateMonitor : NSObject {
    bool  _active;
    bool  _forceRunningBoardServicesMonitoring;
    bool  _inBackground;
    bool  _isVisible;
    unsigned long long  _observerCount;
    RBSProcessMonitor * _processMonitor;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic) bool forceRunningBoardServicesMonitoring;
@property (getter=isInBackground, nonatomic, readonly) bool inBackground;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_applicationStateIsForegroundForTaskState:(unsigned char)arg1;
- (void)_becomeActive;
- (void)_enterBackground;
- (void)_exitBackground;
- (void)_handleApplicationStateChangeForMonitor:(id)arg1 handle:(id)arg2 update:(id)arg3 interestedPid:(int)arg4;
- (void)_performSynchronouslyOnMainQueue:(id /* block */)arg1;
- (void)_resignActive;
- (void)_setupProcessMonitorWithIdentifier:(id)arg1 interestedPid:(int)arg2;
- (id)_stringForTaskState:(unsigned char)arg1;
- (void)dealloc;
- (bool)forceRunningBoardServicesMonitoring;
- (id)init;
- (bool)isActive;
- (bool)isInBackground;
- (void)setForceRunningBoardServicesMonitoring:(bool)arg1;
- (void)startObserving;
- (void)stopObserving;

@end

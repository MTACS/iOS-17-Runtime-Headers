
@interface MPCReportingPlaybackObserver : NSObject <ICEnvironmentMonitorObserver> {
    bool  _offline;
    NSOperationQueue * _recordEventOperationQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedReportingPlaybackObserver;

- (void).cxx_destruct;
- (id)_init;
- (id)_newReportingPlaybackActivityEventForPlayActivityEvent:(id)arg1 eventSource:(id)arg2;
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;
- (id)newPlayActivityEvent;
- (void)recordPlayActivityEvents:(id)arg1 forEventSource:(id)arg2;

@end

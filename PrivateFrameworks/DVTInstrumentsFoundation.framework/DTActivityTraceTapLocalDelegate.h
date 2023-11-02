
@interface DTActivityTraceTapLocalDelegate : NSObject <DTOSLogLoaderDelegate, DTTapLocalDelegate> {
    DTActivityTraceTapConfig * _config;
    XRMobileAgentDock * _dock;
    int  _harLoggingNotificationToken;
    NSObject<OS_dispatch_source> * _harLoggingTimer;
    DTOSLogLoader * _loaderStop;
    <DVTDeviceGlobalStatusIndicator> * _recordingStatusIndicator;
    DTActivityTraceTapLocalShuttle * _shuttle;
    DTTapLocal * _tap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleHARExternalNotificationChange;
- (void)_handleStopOfHARRecordingCausedByUser;
- (void)_setupHARDisabledByExternalClientNotifications;
- (void)_tearDownHARDisabledNotifications;
- (bool)canFetchWhileArchiving;
- (void)dealloc;
- (void)fetchDataForReason:(unsigned long long)arg1 block:(id /* block */)arg2;
- (id)initWithConfig:(id)arg1;
- (void)initializeHARTimer;
- (void)logLoaderNeedsFetchNow:(id)arg1;
- (id)noticeForRecordingMode:(unsigned long long)arg1 isAllProcesses:(bool)arg2 lossCount:(unsigned long long)arg3;
- (void)pause;
- (void)setTap:(id)arg1;
- (void)start;
- (void)stop;
- (void)tearDownHARTimer;
- (void)unpause;
- (void)updateHARLogPrefsWithIsEnabled:(bool)arg1;
- (id)validateConfig;

@end

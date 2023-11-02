
@interface CAMExternalStorageMonitor : NSObject {
    NSObject<OS_dispatch_queue> * __authorizationQueue;
    AVExternalStorageDeviceDiscoverySession * __externalStorageDiscoverySession;
    bool  __hasPendingChangesSinceLastDelegateCall;
    bool  __isObservingKVO;
    id  __monitoringContext;
    NSArray * _connectedStorageDevices;
    <CAMExternalStorageMonitorDelegate> * _delegate;
    bool  _hasExternalStorageNotRecommendedForCapture;
    unsigned long long  _monitoringState;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_authorizationQueue;
@property (nonatomic, retain) AVExternalStorageDeviceDiscoverySession *_externalStorageDiscoverySession;
@property (nonatomic) bool _hasPendingChangesSinceLastDelegateCall;
@property (nonatomic) bool _isObservingKVO;
@property (nonatomic, retain) id _monitoringContext;
@property (nonatomic, readonly) NSArray *connectedStorageDevices;
@property (nonatomic) <CAMExternalStorageMonitorDelegate> *delegate;
@property (nonatomic, readonly) bool hasExternalStorageNotRecommendedForCapture;
@property (nonatomic) unsigned long long monitoringState;

+ (id)_stringFromMonitoringState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_authorizationQueue;
- (void)_beginMonitoring;
- (void)_endMonitoring;
- (id)_externalStorageDiscoverySession;
- (bool)_hasPendingChangesSinceLastDelegateCall;
- (bool)_isObservingKVO;
- (void)_logMonitoringChangeFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (id)_monitoringContext;
- (void)_resumeMonitoring;
- (id)connectedStorageDevices;
- (id)delegate;
- (bool)hasExternalStorageNotRecommendedForCapture;
- (id)init;
- (unsigned long long)monitoringState;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setDelegate:(id)arg1;
- (void)setMonitoringState:(unsigned long long)arg1;
- (void)set_externalStorageDiscoverySession:(id)arg1;
- (void)set_hasPendingChangesSinceLastDelegateCall:(bool)arg1;
- (void)set_isObservingKVO:(bool)arg1;
- (void)set_monitoringContext:(id)arg1;

@end


@interface _GEONetworkDefaultsLocalProxy : NSObject <GEOPListStateCapturing, _GEONetworkDefaultsServerProxy> {
    bool  _activelyUpdating;
    <_GEONetworkDefaultsServerProxyDelegate> * _delegate;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _isWaiting;
    geo_isolater * _isolation;
    double  _lastAttempt;
    int  _missingContainerRetryCount;
    unsigned long long  _stateCaptureHandle;
    NSMutableArray * _updateCompletionHandlers;
    id  _useProdURLsListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_GEONetworkDefaultsServerProxyDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_callCompletionHandlersWithError:(id)arg1;
- (void)_processNetworkDefaultsResponse:(id)arg1 data:(id)arg2 error:(id)arg3 request:(id)arg4;
- (void)_updateNetworkDefaults;
- (bool)_updateWithNewConfig:(id)arg1 request:(id)arg2 response:(id)arg3 error:(id*)arg4;
- (id)_urlRequestForNetworkDefaults;
- (id)captureStatePlistWithHints:(struct os_state_hints_s { unsigned int x1; char *x2; unsigned int x3; unsigned int x4; }*)arg1;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)updateNetworkDefaults:(id /* block */)arg1;
- (void)updateNetworkDefaultsWithReason:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;

@end

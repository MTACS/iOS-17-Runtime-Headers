
@interface HMDSoftwareUpdateEventProvider : HMFObject <HMDSUControllerManagerDelegate, HMFLogging, HMFTimerDelegate> {
    HMDSoftwareUpdateEventProviderContext * _context;
    HMSoftwareUpdateProgressEvent * _debouncedProgressEvent;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMFTimer * _progressDebounceTimer;
    NSMutableArray * _scanFutures;
    id /* block */  _scanOptionsFactory;
}

@property (readonly) HMDSoftwareUpdateEventProviderContext *context;
@property (retain) HMSoftwareUpdateProgressEvent *debouncedProgressEvent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) HMFTimer *progressDebounceTimer;
@property (retain) NSMutableArray *scanFutures;
@property (copy) id /* block */ scanOptionsFactory;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)context;
- (id)debouncedProgressEvent;
- (id)descriptorFromControllerStatus:(id)arg1 controllerDescriptor:(id)arg2 errorCode:(id)arg3;
- (void)forwardDebouncedProgressEvent;
- (void)forwardDescriptorEventWithErrorCode:(id)arg1;
- (void)forwardProgressEventWithProgress:(id)arg1;
- (id)initWithContext:(id)arg1 scanOptionsFactory:(id /* block */)arg2 timerFactory:(id /* block */)arg3;
- (void)manager:(id)arg1 didChangeProgressOnDownload:(id)arg2;
- (void)manager:(id)arg1 didFailDownload:(id)arg2 withError:(id)arg3;
- (void)manager:(id)arg1 didFailInstallation:(id)arg2 withError:(id)arg3;
- (void)manager:(id)arg1 didFinishDownload:(id)arg2;
- (void)manager:(id)arg1 didFinishDownload:(id)arg2 willProceedWithInstallation:(bool)arg3 waitingForAdmissionControl:(bool)arg4;
- (void)manager:(id)arg1 didFinishDownload:(id)arg2 willProceedWithInstallation:(bool)arg3 waitingForAdmissionControl:(bool)arg4 denialReasons:(id)arg5;
- (void)manager:(id)arg1 didFinishInstallation:(id)arg2;
- (void)manager:(id)arg1 scanRequestDidLocateUpdate:(id)arg2 error:(id)arg3;
- (void)manager:(id)arg1 scanRequestPostponed:(id)arg2 error:(id)arg3;
- (id)progressDebounceTimer;
- (void)respondToScanFuturesWithError:(id)arg1;
- (id)scanFutures;
- (id /* block */)scanOptionsFactory;
- (id)scanWithOptions:(unsigned long long)arg1;
- (void)setDebouncedProgressEvent:(id)arg1;
- (void)setProgressDebounceTimer:(id)arg1;
- (void)setScanFutures:(id)arg1;
- (void)setScanOptionsFactory:(id /* block */)arg1;
- (void)timerDidFire:(id)arg1;

@end

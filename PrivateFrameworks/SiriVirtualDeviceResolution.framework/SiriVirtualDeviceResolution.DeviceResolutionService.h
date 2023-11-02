
@interface SiriVirtualDeviceResolution.DeviceResolutionService : NSObject <HMHomeManagerDelegatePrivate> {
    void _xpcConnection;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  endpointUUID;
    void homeManager;
    void homeManagerReadyGroup;
    void initialLoadDone;
    void queue;
    void waitingOnHomeManagerDataSync;
}

- (void).cxx_destruct;
- (void)homeManagerDidUpdateDataSyncInProgress:(id)arg1;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (id)init;

@end

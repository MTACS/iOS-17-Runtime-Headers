
@interface DSCohortManager : NSObject {
    DSConsensusDataManager * _dataManager;
    NSMutableDictionary * _devices;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    DSXPCServer * _xpcDaemonServer;
}

@property (nonatomic, retain) NSMutableDictionary *devices;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) DSXPCServer *xpcDaemonServer;

- (void).cxx_destruct;
- (void)_deviceFound:(id)arg1;
- (void)_deviceLost:(id)arg1;
- (void)deviceFound:(id)arg1;
- (void)deviceLost:(id)arg1;
- (id)devices;
- (id)dispatchQueue;
- (void)printConsensusData;
- (void)printConsensusDataFromWindowStart:(double)arg1 ToWindowEnd:(double)arg2;
- (void)setDevices:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setXpcDaemonServer:(id)arg1;
- (id)xpcDaemonServer;

@end

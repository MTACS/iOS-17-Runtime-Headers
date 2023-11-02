
@interface PRProximityEstimator : NSObject {
    <PRProximityEstimatorDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_os_log> * _logger;
    NSMutableDictionary * devicesMonitered;
    bool  usingST;
}

@property (readonly) <PRProximityEstimatorDelegate> *delegate;

- (void).cxx_destruct;
- (bool)addRssiSample:(double)arg1 channel:(unsigned int)arg2 forPeer:(id)arg3 withError:(id*)arg4;
- (id)delegate;
- (id)init;
- (id)initSingleThresholdEstmatorWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)invokeDelegateBlock:(id /* block */)arg1;
- (bool)startEstimatingProximityFor:(id)arg1 peerDeviceModel:(id)arg2 withError:(id*)arg3;
- (bool)stopEstimatingProximityFor:(id)arg1 withError:(id*)arg2;

@end

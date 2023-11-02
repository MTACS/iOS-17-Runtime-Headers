
@interface PRBTLocalizer : NSObject <PRBTRangingSessionDelegate> {
    PRBTCoreAnalytics * _analytics;
    NSTimer * _btTrendTimer;
    int  _clientState;
    <PRBTLocalizerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    bool  _didFetchTxPower;
    NSObject<OS_dispatch_queue> * _estimatorQueue;
    bool  _isUT;
    double  _lastMeasurementTime;
    PRBTProximityMeasurement * _latestProximityMeasurement;
    unsigned long long  _localizerState;
    NSObject<OS_os_log> * _logger;
    NSTimer * _measurementTimer;
    NSUUID * _productUUID;
    NSObject<OS_dispatch_queue> * _proximityQueue;
    PRRemoteDevice * _remoteDevice;
    struct unique_ptr<BTFinding::PRRSSIFilter, std::default_delete<BTFinding::PRRSSIFilter>> { 
        struct __compressed_pair<BTFinding::PRRSSIFilter *, std::default_delete<BTFinding::PRRSSIFilter>> { 
            struct PRRSSIFilter {} *__value_; 
        } __ptr_; 
    }  _rssiFilter;
    PRBTRangingSession * _session;
    bool  _shouldLogAnalytics;
    NSNumber * _txPower;
    NSTimer * _utRetryTimer;
}

@property (nonatomic, retain) PRBTCoreAnalytics *analytics;
@property (nonatomic, retain) NSTimer *btTrendTimer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PRBTLocalizerDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *estimatorQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PRBTProximityMeasurement *latestProximityMeasurement;
@property (nonatomic, retain) NSTimer *measurementTimer;
@property (nonatomic, retain) NSUUID *productUUID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *proximityQueue;
@property (nonatomic, retain) PRRemoteDevice *remoteDevice;
@property (nonatomic, retain) PRBTRangingSession *session;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *txPower;
@property (nonatomic, retain) NSTimer *utRetryTimer;

+ (bool)isInternalBuild;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)analytics;
- (id)btTrendTimer;
- (void)checkForMeasurementTimeout;
- (bool)configure;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (void)didConnectDevice:(id)arg1 error:(id)arg2;
- (void)didFailWithError:(id)arg1;
- (void)didFetchTxPower:(id)arg1 fromDevice:(id)arg2 withError:(id)arg3;
- (void)didReceiveNewBTRSSI:(id)arg1;
- (void)didStartRangingOnDevice:(id)arg1 withError:(id)arg2;
- (void)didStopOwnerRangingOnDevice:(id)arg1 withError:(id)arg2;
- (id)estimatorQueue;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 id:(id)arg3 isUT:(bool)arg4 productUUID:(id)arg5;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 id:(id)arg3 isUT:(bool)arg4 productUUID:(id)arg5 withAnalytics:(bool)arg6;
- (id)latestProximityMeasurement;
- (void)logEstimatorOutput:(struct RSSIFilterResult { double x1; double x2; int x3; double x4; })arg1;
- (id)measurementTimer;
- (void)notifyDelegateOfFilterOutput:(struct RSSIFilterResult { double x1; double x2; int x3; double x4; })arg1;
- (void)notifyDelegateOfRawMeasurement:(id)arg1;
- (void)processRssiMeasurement:(id)arg1;
- (id)productUUID;
- (id)proximityQueue;
- (id)remoteDevice;
- (void)resetBtTrend;
- (void)sendBTLocalizerChangedState:(unsigned long long)arg1;
- (id)session;
- (void)setAnalytics:(id)arg1;
- (void)setBtTrendTimer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setEstimatorQueue:(id)arg1;
- (void)setLatestProximityMeasurement:(id)arg1;
- (void)setMeasurementTimer:(id)arg1;
- (void)setProductUUID:(id)arg1;
- (void)setProximityQueue:(id)arg1;
- (void)setRemoteDevice:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setTxPower:(id)arg1;
- (void)setUtRetryTimer:(id)arg1;
- (bool)start:(id*)arg1;
- (bool)stop:(id*)arg1;
- (id)txPower;
- (void)updateDelegateWithSelector:(SEL)arg1 object:(id)arg2;
- (id)utRetryTimer;

@end

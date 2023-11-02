
@interface AWUnitTestPearlDevice : NSObject <AWUnitTestSampler> {
    AVFoundationUnitTestSession * _AVFoundationSession;
    NSObject<OS_dispatch_queue> * _awQueue;
    NSMutableArray * _carplayCallbacks;
    <BKDevicePearlDelegate> * _delegate;
    NSMutableArray * _displayCallbacks;
    bool  _facePresent;
    AWUnitTestFaceDetectOperation * _lastOperation;
    bool  _pearlError;
    NSObject<OS_dispatch_queue> * _queue;
    struct { 
        unsigned long long sampleCount; 
        unsigned long long pollCount; 
        unsigned long long singleShotCount; 
    }  _sampleStats;
    struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } * _sampleStatsPtr;
    NSMutableArray * _smarCoverCallbacks;
}

@property (nonatomic) <BKDevicePearlDelegate> *delegate;
@property bool facePresent;
@property bool pearlError;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; }*sampleStatsPtr;

+ (id)sharedAVFoundationSession;
+ (id)sharedDevice;

- (void).cxx_destruct;
- (id)AVFoundationSession;
- (id)createPresenceDetectOperationWithError:(id*)arg1;
- (id)delegate;
- (void)deliverPearlDeviceEvent:(long long)arg1;
- (void)deliverPearlDeviceState:(long long)arg1;
- (bool)facePresent;
- (void)getStatsWithBlock:(id /* block */)arg1;
- (id)init;
- (bool)pearlError;
- (id)queue;
- (void)resetStats;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; }*)sampleStatsPtr;
- (void)setCarPlayConnected:(bool)arg1;
- (void)setCarPlayConnected:(bool)arg1 reply:(id /* block */)arg2;
- (void)setCarplayStateChangedCallback:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayCallback:(id /* block */)arg1;
- (void)setDisplayState:(bool)arg1;
- (void)setDisplayState:(bool)arg1 reply:(id /* block */)arg2;
- (void)setFacePresent:(bool)arg1;
- (void)setPearlError:(bool)arg1;
- (void)setPearlErrorState:(bool)arg1;
- (void)setPearlErrorState:(bool)arg1 reply:(id /* block */)arg2;
- (void)setQueue:(id)arg1;
- (void)setSampleState:(bool)arg1;
- (void)setSampleState:(bool)arg1 deliverEvent:(bool)arg2;
- (void)setSampleState:(bool)arg1 deliverEvent:(bool)arg2 reply:(id /* block */)arg3;
- (void)setSampleState:(bool)arg1 reply:(id /* block */)arg2;
- (void)setSampleStatsPtr:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; }*)arg1;
- (void)setSmartCoverCallback:(id /* block */)arg1;
- (void)setSmartCoverClosed:(bool)arg1;
- (void)setSmartCoverClosed:(bool)arg1 reply:(id /* block */)arg2;

@end

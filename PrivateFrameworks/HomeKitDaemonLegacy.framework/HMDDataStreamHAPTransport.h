
@interface HMDDataStreamHAPTransport : NSObject <HMDDataStreamTransport, HMFLogging> {
    HMDHAPAccessory * _accessory;
    HMDDataStreamFrameReader * _byteReader;
    HMDCharacteristic * _interruptCharacteristic;
    bool  _isWriteInProgress;
    bool  _lastAccessoryRequestToSendFlag;
    NSString * _logIdentifier;
    unsigned long long  _maxControllerTransportMTU;
    NSString * _notificationClientIdentifier;
    NSMutableArray * _pendingWrites;
    NSNumber * _sessionIdentifier;
    HMDCharacteristic * _transportCharacteristic;
    NSObject<OS_dispatch_queue> * _workQueue;
    <HMDDataStreamTransportDelegate> * delegate;
}

@property (readonly) HMDHAPAccessory *accessory;
@property (readonly) HMDDataStreamFrameReader *byteReader;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMDDataStreamTransportDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) HMDCharacteristic *interruptCharacteristic;
@property bool isWriteInProgress;
@property bool lastAccessoryRequestToSendFlag;
@property (readonly) NSString *logIdentifier;
@property (readonly) unsigned long long maxControllerTransportMTU;
@property (readonly) NSString *notificationClientIdentifier;
@property (readonly) NSMutableArray *pendingWrites;
@property (readonly) NSNumber *sessionIdentifier;
@property (readonly) Class superclass;
@property (retain) HMDCharacteristic *transportCharacteristic;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_buildWriteRequestWithError:(id*)arg1 shouldForceClose:(bool)arg2;
- (void)_cancelAllPendingWritesWithError:(id)arg1;
- (void)_deregisterForMessages;
- (void)_doNextWriteOperation;
- (id)_getPendingWritesUpToLength:(unsigned long long)arg1;
- (void)_handleCharacteristicsValueUpdated:(id)arg1;
- (void)_handleCompletionWithResponseTuples:(id)arg1;
- (void)_handleInterruptCharacteristicValue:(id)arg1;
- (void)_handleReceivedData:(id)arg1;
- (bool)_isRunning;
- (void)_notifyDelegateDidClose;
- (void)_notifyDelegateDidFailWithError:(id)arg1;
- (void)_notifyDelegateDidOpen;
- (void)_notifyDelegateDidReceiveFrame:(id)arg1;
- (void)_notifyWriteOperation:(id)arg1 didCompleteWithError:(id)arg2;
- (void)_registerForMessages;
- (void)_removeAndMarkCompleteAllCompletedWrites;
- (void)_stopTransportForWriteFailureError:(id)arg1;
- (void)_stopWithError:(id)arg1;
- (void)_teardownSessionWithError:(id)arg1;
- (void)_writeCharacteristicRequests:(id)arg1 completion:(id /* block */)arg2;
- (id)accessory;
- (id)byteReader;
- (void)close;
- (void)connect;
- (void)dealloc;
- (id)delegate;
- (id)initWithAccessory:(id)arg1 sessionIdentifier:(long long)arg2 maxControllerTransportMTU:(unsigned long long)arg3 workQueue:(id)arg4 logIdentifier:(id)arg5;
- (id)interruptCharacteristic;
- (bool)isWriteInProgress;
- (bool)lastAccessoryRequestToSendFlag;
- (id)logIdentifier;
- (unsigned long long)maxControllerTransportMTU;
- (id)notificationClientIdentifier;
- (id)pendingWrites;
- (void)sendRawFrame:(id)arg1 completion:(id /* block */)arg2;
- (id)sessionIdentifier;
- (void)setDelegate:(id)arg1;
- (void)setInterruptCharacteristic:(id)arg1;
- (void)setIsWriteInProgress:(bool)arg1;
- (void)setLastAccessoryRequestToSendFlag:(bool)arg1;
- (void)setTrafficClass:(unsigned long long)arg1;
- (void)setTransportCharacteristic:(id)arg1;
- (id)transportCharacteristic;
- (id)workQueue;

@end

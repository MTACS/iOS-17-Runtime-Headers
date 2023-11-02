
@interface HMDPrimaryResidentDiscoveryOperation : HMFOperation <HMDPrimaryResidentDiscoveryOperation, HMFLogging, HMFTimerDelegate> {
    NSArray * _candidateDestinations;
    NSEnumerator * _candidateDestinationsEnumerator;
    HMFFuture * _completionFuture;
    HMDResidentDevice * _currentPrimaryResident;
    NSUUID * _currentPrimaryResidentGenerationID;
    HMDHome * _home;
    NSString * _logIdentifier;
    HMDMessageDispatcher * _messageDispatcher;
    id /* block */  _responseHandler;
    HMFTimer * _sendToNextDestinationTimer;
}

@property (getter=isCancelled, readonly) bool cancelled;
@property (readonly) NSArray *candidateDestinations;
@property (retain) NSEnumerator *candidateDestinationsEnumerator;
@property (readonly) HMFFuture *completionFuture;
@property (readonly) HMDResidentDevice *currentPrimaryResident;
@property (readonly) NSUUID *currentPrimaryResidentGenerationID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property HMDHome *home;
@property (readonly) NSString *logIdentifier;
@property (readonly) HMDMessageDispatcher *messageDispatcher;
@property (readonly) id /* block */ responseHandler;
@property (retain) HMFTimer *sendToNextDestinationTimer;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)cancel;
- (void)cancelWithError:(id)arg1;
- (id)candidateDestinations;
- (id)candidateDestinationsEnumerator;
- (id)completionFuture;
- (id)currentPrimaryResident;
- (id)currentPrimaryResidentGenerationID;
- (void)finish;
- (id)home;
- (id)initWithHome:(id)arg1 messageDispatcher:(id)arg2;
- (id)logIdentifier;
- (void)main;
- (id)messageDispatcher;
- (id /* block */)responseHandler;
- (void)run;
- (id)sendToNextDestinationTimer;
- (void)setCandidateDestinationsEnumerator:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setSendToNextDestinationTimer:(id)arg1;
- (void)timerDidFire:(id)arg1;

@end

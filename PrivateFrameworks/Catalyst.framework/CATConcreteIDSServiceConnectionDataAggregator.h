
@interface CATConcreteIDSServiceConnectionDataAggregator : NSObject <CATIDSServiceConnectionDataAggregationDelegate, CATIDSServiceConnectionDataAggregator> {
    <CATIDSServiceConnectionDataAggregatorDelegate> * _delegate;
    NSMutableDictionary * mAggregationsByDataNumber;
    unsigned long long  mGreatestExpectedSequenceNumber;
    <CATTimer> * mMissingContentTimer;
    double  mMissingItemInterval;
    unsigned long long  mNextDeploymentNumber;
    unsigned long long  mNextExpectedSequenceNumber;
    NSMutableIndexSet * mPendingSequenceNumbers;
    bool  mSupportsSequenceCorrection;
    <CATTimerSource> * mTimerSource;
    NSObject<OS_dispatch_queue> * mWorkQueue;
}

@property (nonatomic) <CATIDSServiceConnectionDataAggregatorDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long receivedSequenceNumber;

+ (id)missingContentTimerIdentifier;

- (void).cxx_destruct;
- (void)dataAggregationCompleted:(id)arg1;
- (id)delegate;
- (id)description;
- (id)initWithWorkQueue:(id)arg1 timerSource:(id)arg2 missingItemInterval:(double)arg3 supportsSequenceCorrection:(bool)arg4;
- (void)missingContentTimerDidFire:(id)arg1 fireCount:(unsigned long long)arg2;
- (id)missingSequenceNumbers;
- (void)processNewDataWindowWithContent:(id)arg1;
- (void)receiveDataContent:(id)arg1;
- (void)receiveExpectedSequenceNumber:(unsigned long long)arg1;
- (unsigned long long)receivedSequenceNumber;
- (void)setDelegate:(id)arg1;
- (void)updateExistingDataWindowWithContent:(id)arg1;
- (void)updateMissingContentTrackingForDataContent:(id)arg1;

@end

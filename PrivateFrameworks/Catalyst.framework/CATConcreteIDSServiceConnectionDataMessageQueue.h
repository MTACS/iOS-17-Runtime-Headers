
@interface CATConcreteIDSServiceConnectionDataMessageQueue : NSObject <CATIDSServiceConnectionDataMessageQueue> {
    <CATIDSServiceConnectionDataMessageQueueDelegate> * _delegate;
    <CATIDSServiceConnectionDataChunker> * mDataChunker;
    double  mFlushPromptInterval;
    <CATTimer> * mFlushTimer;
    unsigned long long  mHeadSequenceNumber;
    NSMutableDictionary * mSendContentsBySequenceNumber;
    bool  mSupportsRetransmit;
    unsigned long long  mTailSequenceNumber;
    <CATTimerSource> * mTimerSource;
    NSObject<OS_dispatch_queue> * mWorkQueue;
}

@property (nonatomic) <CATIDSServiceConnectionDataMessageQueueDelegate> *delegate;

+ (id)flushTimerIdentifier;

- (void).cxx_destruct;
- (id)delegate;
- (void)flushTimerDidFire:(id)arg1 fireCount:(unsigned long long)arg2;
- (id)initWithWorkQueue:(id)arg1 timerSource:(id)arg2 dataChunker:(id)arg3 flushPromptInterval:(double)arg4 supportsRetransmit:(bool)arg5;
- (void)receiveData:(id)arg1 completion:(id /* block */)arg2;
- (void)receiveRemoteSequenceNumber:(unsigned long long)arg1;
- (void)retransmitContent:(id)arg1;
- (void)retransmitSequenceNumbers:(id)arg1;
- (void)scheduleFlushTimer;
- (void)setDelegate:(id)arg1;

@end

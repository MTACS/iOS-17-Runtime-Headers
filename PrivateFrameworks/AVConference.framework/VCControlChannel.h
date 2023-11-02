
@interface VCControlChannel : VCObject {
    NSObject<OS_dispatch_queue> * _asyncProcessingQueue;
    int  _bytesReceived;
    int  _bytesReceivedToReport;
    int  _bytesSent;
    int  _bytesSentToReport;
    id  _dataReceivedDelegate;
    int  _lastProcessedBytesReceived;
    int  _lastProcessedBytesSent;
    double  _lastUpdateTimestamp;
    int  _maxReceivedRate;
    int  _maxSentRate;
    id  _messageReceivedDelegate;
    int  _minReceivedRate;
    int  _minSentRate;
    NSMutableArray * _optionalTopics;
    unsigned int  _reliableMessageResendInterval;
}

@property (nonatomic) id dataReceivedDelegate;
@property (nonatomic) id messageReceivedDelegate;
@property (nonatomic, readonly) unsigned int reliableMessageResendInterval;

- (void)addOptionalTopic:(id)arg1;
- (id)dataReceivedDelegate;
- (void)dealloc;
- (void)flushActiveMessages;
- (id)init;
- (id)messageReceivedDelegate;
- (unsigned int)reliableMessageResendInterval;
- (void)sendReliableMessage:(id)arg1 withTopic:(id)arg2;
- (void)sendReliableMessage:(id)arg1 withTopic:(id)arg2 participantID:(unsigned long long)arg3;
- (bool)sendReliableMessage:(id)arg1 withTopic:(id)arg2 participantID:(unsigned long long)arg3 timeout:(unsigned int)arg4 completion:(id /* block */)arg5;
- (bool)sendReliableMessage:(id)arg1 withTopic:(id)arg2 participantID:(unsigned long long)arg3 timeout:(unsigned int)arg4 withOptions:(id)arg5 completion:(id /* block */)arg6;
- (bool)sendReliableMessageAndWait:(id)arg1 withTopic:(id)arg2;
- (bool)sendReliableMessageAndWait:(id)arg1 withTopic:(id)arg2 participantID:(unsigned long long)arg3;
- (void)sendUnreliableMessage:(id)arg1 withTopic:(id)arg2 participantID:(unsigned long long)arg3;
- (void)setDataReceivedDelegate:(id)arg1;
- (void)setEncryptionWithEncryptionMaterial:(struct { struct tagSRTPExchangeInfo { BOOL x_1_1_1[65]; BOOL x_1_1_2[29]; void *x_1_1_3; } x1; unsigned int x2; struct tagSRTPExchangeInfo { BOOL x_3_1_1[65]; BOOL x_3_1_2[29]; void *x_3_1_3; } x3; unsigned int x4; int x5; int x6; }*)arg1;
- (void)setMessageReceivedDelegate:(id)arg1;
- (void)throwNotSupportedExceptionForMethod:(id)arg1;

@end

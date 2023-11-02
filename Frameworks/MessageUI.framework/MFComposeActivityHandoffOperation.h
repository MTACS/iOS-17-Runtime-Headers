
@interface MFComposeActivityHandoffOperation : NSOperation <NSStreamDelegate> {
    <MFComposeActivityHandoffOperationDelegate> * _delegate;
    bool  _doneWithInputStream;
    bool  _doneWithOutputStream;
    unsigned long long  _draftBytesReceived;
    NSData * _draftData;
    unsigned long long  _draftDataByteIndex;
    unsigned long long  _draftExpectedSize;
    bool  _executing;
    bool  _finished;
    NSInputStream * _inputStream;
    NSOutputStream * _outputStream;
    NSObject<OS_dispatch_queue> * _streamHandlerQueue;
    long long  _transmissionType;
}

@property (nonatomic, readonly) unsigned long long bytesExpected;
@property (nonatomic, readonly) unsigned long long bytesReceived;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MFComposeActivityHandoffOperationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSData *draftData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) long long transmissionType;

+ (id)receivingOperationWithInputStream:(id)arg1 outputStream:(id)arg2;
+ (id)sendingOperationWithDraftData:(id)arg1 inputStream:(id)arg2 outputStream:(id)arg3;

- (void).cxx_destruct;
- (void)_checkInHandoffStream:(id)arg1;
- (void)_commonHandoffStreamInitializationWithStream:(id)arg1;
- (void)_complete;
- (void)_didFinishTransferringHandoffPayload;
- (void)_failedToTransferHandoffPayload;
- (void)_finishReceivingHandoffDataAndCloseStream;
- (void)_handleErrorCode:(unsigned long long)arg1 logString:(id)arg2;
- (void)_receivingDataStream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)_receivingMessageStream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)_sendingDataStream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)_sendingMessageStream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)_setExecuting:(bool)arg1;
- (void)_setFinished:(bool)arg1;
- (void)_startHandoffStreams;
- (unsigned long long)bytesExpected;
- (unsigned long long)bytesReceived;
- (void)dealloc;
- (id)delegate;
- (id)draftData;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (void)setDelegate:(id)arg1;
- (void)setDraftData:(id)arg1;
- (void)setTransmissionType:(long long)arg1;
- (void)start;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (long long)transmissionType;

@end

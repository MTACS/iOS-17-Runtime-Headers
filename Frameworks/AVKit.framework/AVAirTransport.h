
@interface AVAirTransport : NSObject {
    <AVAirTransportDelegate> * _delegate;
    NSData * _leftoverInputData;
    NSMutableArray * _outputQueue;
    NSMutableArray * _receiveResponseBlocks;
    NSMutableArray * _requestCompletions;
    <AVAirTransportTransformationProtocol> * _streamDataTransformer;
}

@property (nonatomic, readonly) bool canWrite;
@property (nonatomic) <AVAirTransportDelegate> *delegate;
@property (nonatomic, readonly) bool isReadyToSend;
@property (nonatomic, readonly) NSMutableArray *receiveResponseBlocks;
@property (nonatomic, retain) <AVAirTransportTransformationProtocol> *streamDataTransformer;

+ (void)__performBlock:(id /* block */)arg1;
+ (bool)_isRunningOnAirChannelQueue;
+ (id)airTransportQueue;
+ (id)channelWithInput:(id)arg1 output:(id)arg2;
+ (id)eventRunLoop;
+ (id)eventThread;
+ (void)performAsync:(id /* block */)arg1;
+ (void)performSync:(id /* block */)arg1;
+ (void)startEventThreadIfNecessary;

- (void).cxx_destruct;
- (id)_initPrivate;
- (long long)_writeData:(id)arg1;
- (bool)canWrite;
- (void)close;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)invalidate;
- (bool)isReadyToSend;
- (void)open;
- (void)performOnAirChannelQueueSync:(id /* block */)arg1;
- (id)receiveResponseBlocks;
- (id)requestCompletions;
- (void)sendObject:(id)arg1 receiveResponse:(id /* block */)arg2;
- (void)sendResponse:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setStreamDataTransformer:(id)arg1;
- (id)streamDataTransformer;
- (void)terminatePendingRequests;
- (void)writeData:(id)arg1;
- (void)writeMore;

@end

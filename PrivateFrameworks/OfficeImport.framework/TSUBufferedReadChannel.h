
@interface TSUBufferedReadChannel : NSObject <TSUReadChannel> {
    NSObject<OS_dispatch_data> * _currentStreamOutputData;
    bool  _isStreamOutputDone;
    NSObject<OS_dispatch_semaphore> * _readSemaphore;
    long long  _sourceOffset;
    unsigned long long  _sourceReadBufferSize;
    <TSUReadChannel> * _sourceReadChannel;
    NSError * _sourceReadChannelError;
    NSObject<OS_dispatch_queue> * _sourceReadQueue;
    unsigned long long  _streamOutputLength;
    long long  _streamOutputOffset;
    <TSUStreamReadChannel> * _streamReadChannel;
    id /* block */  _streamReadChannelBlock;
    NSObject<OS_dispatch_queue> * _streamReadChannelOutputQueue;
    id /* block */  _streamReadChannelSourceHandler;
    NSObject<OS_dispatch_queue> * _streamReadChannelSourceQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_closeStreamReadChannel;
- (id)_currentDataIntersectionWithOffset:(long long)arg1 length:(unsigned long long)arg2 isReadDone:(bool*)arg3;
- (void)_readFromOffset:(long long)arg1 length:(unsigned long long)arg2 queue:(id)arg3 handler:(id /* block */)arg4;
- (void)_resetStreamReadChannel;
- (void)addBarrier:(id /* block */)arg1;
- (void)close;
- (void)dealloc;
- (id)initWithReadChannel:(id)arg1 sourceReadBufferSize:(unsigned long long)arg2 streamReadChannelBlock:(id /* block */)arg3;
- (id)initWithReadChannel:(id)arg1 streamReadChannelBlock:(id /* block */)arg2;
- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 queue:(id)arg3 handler:(id /* block */)arg4;
- (void)setLowWater:(unsigned long long)arg1;
- (void)setStreamReadChannelSourceQueue:(id)arg1 handler:(id /* block */)arg2;

@end

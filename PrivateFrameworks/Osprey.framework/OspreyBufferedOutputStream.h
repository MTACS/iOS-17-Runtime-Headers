
@interface OspreyBufferedOutputStream : NSOutputStream <NSStreamDelegate> {
    bool  _closed;
    NSMutableData * _outputBuffer;
    NSOutputStream * _outputStream;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_closeUnderlying;
- (bool)_flushBuffer;
- (void)close;
- (void)dealloc;
- (bool)hasBufferedData;
- (bool)hasSpaceAvailable;
- (id)initWithBufferSize:(unsigned long long)arg1 underlyingOutputStream:(id)arg2 queue:(id)arg3;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (id)streamError;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;

@end

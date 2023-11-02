
@interface GTBaseSocketTransport_capture : GTBaseStreamTransport_capture {
    NSObject<OS_dispatch_source> * _readSource;
    bool  _scheduledReadOnWritableSocket;
    GTSharedMemoryTransport_capture * _smTransport;
    NSObject<OS_dispatch_source> * _writeSource;
    bool  _writeSourceIsSuspended;
}

@property (nonatomic, readonly) GTSharedMemoryTransport_capture *smTransport;

- (void)_destroySharedMemoryTransport;
- (void)_invalidate;
- (unsigned int)_nextMessageSerial;
- (long long)_read:(void*)arg1 size:(unsigned long long)arg2;
- (void)_readAndAccumulateLoop;
- (void)_waitEAGAIN;
- (long long)_write:(const void*)arg1 size:(unsigned long long)arg2;
- (void)closeSocketDescriptor;
- (bool)connected;
- (id)createNewSharedMemoryTransport;
- (id)createNewSharedMemoryTransportWithURL:(id)arg1;
- (void)destroySharedMemoryTransport;
- (id)init;
- (bool)relayMessageOverSharedMemoryTransport:(id)arg1 error:(id*)arg2;
- (void)runWithSocket:(int)arg1;
- (void)scheduleReadOnWritableSocket;
- (void)setPrioritizeOutgoingMessages:(bool)arg1;
- (id)smTransport;

@end

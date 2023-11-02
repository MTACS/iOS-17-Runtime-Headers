
@interface DYBaseSocketTransport : DYBaseStreamTransport {
    NSObject<OS_dispatch_source> * _readSource;
    bool  _scheduledReadOnWritableSocket;
    DYSharedMemoryTransport * _smTransportCapture;
    DYSharedMemoryTransport * _smTransportDiagnostics;
    NSObject<OS_dispatch_source> * _writeSource;
    bool  _writeSourceIsSuspended;
}

@property (nonatomic, readonly) DYSharedMemoryTransport *smTransportCapture;
@property (nonatomic, readonly) DYSharedMemoryTransport *smTransportDiagnostics;

- (void)_destroySharedMemoryTransport;
- (void)_invalidate;
- (unsigned int)_nextMessageSerial;
- (long long)_read:(void*)arg1 size:(unsigned long long)arg2;
- (void)_readAndAccumulateLoop;
- (void)_waitEAGAIN;
- (long long)_write:(const void*)arg1 size:(unsigned long long)arg2;
- (void)closeSocketDescriptor;
- (bool)connected;
- (struct DYBaseSocketTransportSharedMemoryURLs { id x1; id x2; })createNewSharedMemoryTransportWithURLs:(struct DYBaseSocketTransportSharedMemoryURLs { id x1; id x2; })arg1 uniqueIdentifier:(id)arg2 loadCapture:(bool)arg3 loadDiagnostics:(bool)arg4;
- (struct DYBaseSocketTransportSharedMemoryURLs { id x1; id x2; })createNewSharedMemoryTransportWithUniqueIdentifier:(id)arg1 loadCapture:(bool)arg2 loadDiagnostics:(bool)arg3;
- (void)destroySharedMemoryTransport;
- (id)init;
- (bool)relayMessageOverSecondarySharedMemoryTransport:(id)arg1 error:(id*)arg2;
- (bool)relayMessageOverSharedMemoryTransport:(id)arg1 error:(id*)arg2;
- (void)runWithSocket:(int)arg1;
- (void)scheduleReadOnWritableSocket;
- (void)setPrioritizeOutgoingMessages:(bool)arg1;
- (id)smTransportCapture;
- (id)smTransportDiagnostics;

@end

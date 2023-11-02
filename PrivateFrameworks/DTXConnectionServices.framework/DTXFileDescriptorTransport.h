
@interface DTXFileDescriptorTransport : DTXTransport {
    id /* block */  _disconnectBlock;
    int  _inFD;
    NSObject<OS_dispatch_queue> * _inputQueue;
    id /* block */  _inputReaderBlock;
    NSObject<OS_dispatch_source> * _inputSource;
    int  _outFD;
    NSObject<OS_dispatch_queue> * _outputQueue;
    int  _outputWaitKQ;
}

- (void).cxx_destruct;
- (int)_createWriteKQueue:(int)arg1;
- (void)_setupReadSource:(int)arg1;
- (void)dealloc;
- (void)disconnect;
- (id)init;
- (id)initWithIncomingFileDescriptor:(int)arg1 outgoingFileDescriptor:(int)arg2 disconnectBlock:(id /* block */)arg3;
- (id)initWithIncomingFilePath:(id)arg1 outgoingFilePath:(id)arg2 error:(id*)arg3;
- (id)initWithXPCRepresentation:(id)arg1;
- (id)serializedXPCRepresentation;
- (void)setupWithIncomingDescriptor:(int)arg1 outgoingDescriptor:(int)arg2 disconnectBlock:(id /* block */)arg3;
- (unsigned int)supportedDirections;
- (unsigned long long)transmit:(const void*)arg1 ofLength:(unsigned long long)arg2;

@end

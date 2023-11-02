
@interface DYBaseStreamTransport : DYTransport {
    NSData * _buffers;
    unsigned long long  _bytesToRead;
    struct iovec { 
        void *iov_base; 
        unsigned long long iov_len; 
    }  _iov;
    <DYVMBuffer> * _messageBuffer;
    void * _messageBufferWritePtr;
    NSObject<OS_dispatch_queue> * _relayQueue;
    struct dy_transport_message_unpack_s { struct dy_transport_message_header { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; } x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned long long x5; bool x6; } * _relayTmu;
    NSObject<OS_dispatch_semaphore> * _sendSema;
    struct dy_transport_message_unpack_s { struct dy_transport_message_header { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; } x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned long long x5; bool x6; } * _tmu;
}

- (void)_allocateMessageBuffer;
- (void)_clearBuffers;
- (void)_invalidate;
- (bool)_packMessage:(id)arg1 error:(id*)arg2;
- (long long)_performRead:(void*)arg1 size:(unsigned long long)arg2;
- (long long)_read:(void*)arg1 size:(unsigned long long)arg2;
- (long long)_readAndAccumulate;
- (long long)_relayBuffer:(const void*)arg1 size:(unsigned long long)arg2;
- (long long)_relayBufferInner:(const void*)arg1 size:(unsigned long long)arg2;
- (void)_scheduleInvalidation:(id)arg1;
- (long long)_sendMessage:(id)arg1 error:(id*)arg2;
- (long long)_syncTmuToHeader:(struct dy_transport_message_unpack_s { struct dy_transport_message_header { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; } x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned long long x5; bool x6; }*)arg1 ioBlock:(id /* block */)arg2;
- (void)_unpackAndDispatchMessage;
- (void)_waitEAGAIN;
- (long long)_write:(const void*)arg1 size:(unsigned long long)arg2;
- (long long)_writeBuffers:(id*)arg1;
- (void)dealloc;
- (id)init;

@end


@interface DTXMachTransport : DTXTransport {
    unsigned int  _bufferedLength;
    NSObject<OS_dispatch_source> * _deadPortSource;
    id /* block */  _disconnectBlock;
    NSObject<OS_dispatch_queue> * _inputQueue;
    id /* block */  _inputReaderBlock;
    NSObject<OS_dispatch_source> * _listenSource;
    NSObject<OS_dispatch_queue> * _outputQueue;
    unsigned int  _receivePort;
    struct DTXMachMessage { struct { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; int x_1_2_6; } x_1_1_1; unsigned int x_1_1_2; } x1; BOOL x2[32672]; BOOL x3[68]; } * _sendBuffer;
    unsigned int  _sendPort;
}

+ (id)_legacyFileDescriptorHandshakeWithReceivePort:(unsigned int)arg1;
+ (id)_legacyFileDescriptorHandshakeWithSendPort:(unsigned int)arg1;
+ (id)fileDescriptorHandshakeWithReceivePort:(unsigned int)arg1;
+ (id)fileDescriptorHandshakeWithSendPort:(unsigned int)arg1;
+ (id)schemes;

- (void).cxx_destruct;
- (bool)_setupWithSendPort:(unsigned int)arg1 receivePort:(unsigned int)arg2 disconnectBlock:(id /* block */)arg3;
- (void)dealloc;
- (void)disconnect;
- (id)init;
- (id)initWithReceiveRight:(unsigned int)arg1 sendRight:(unsigned int)arg2 disconnectBlock:(id /* block */)arg3;
- (id)initWithRemoteAddress:(id)arg1;
- (id)initWithXPCRepresentation:(id)arg1;
- (id)localAddresses;
- (id)serializedXPCRepresentation;
- (unsigned long long)transmit:(const void*)arg1 ofLength:(unsigned long long)arg2;

@end

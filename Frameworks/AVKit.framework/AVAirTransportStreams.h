
@interface AVAirTransportStreams : AVAirTransport <NSStreamDelegate> {
    NSInputStream * _inputStream;
    NSOutputStream * _outputStream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSInputStream *inputStream;
@property (nonatomic, readonly) NSOutputStream *outputStream;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_inputStreamDidClose;
- (void)_inputStreamHasBytesAvailable;
- (void)_outputStreamCanWrite;
- (void)_outputStreamDidOpen;
- (id)_readAvailableData;
- (id)_readDataNonBlockingUpToMaxLength:(unsigned long long)arg1;
- (long long)_writeData:(id)arg1;
- (bool)canWrite;
- (id)description;
- (id)initWithInput:(id)arg1 output:(id)arg2;
- (id)inputStream;
- (void)invalidate;
- (bool)isReadyToSend;
- (void)open;
- (id)outputStream;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;

@end

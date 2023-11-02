
@interface MRStreamTransportConnection : MRExternalDeviceTransportConnection <NSStreamDelegate> {
    NSInputStream * _inputStream;
    NSOutputStream * _outputStream;
    NSRunLoop * _runLoop;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_closeAllStreams;
- (void)_closeStream:(id)arg1;
- (void)_openStream:(id)arg1;
- (void)_setQOSPropertiesOnStream:(id)arg1;
- (void)_stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)close;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2;
- (bool)isValid;
- (id)runLoop;
- (unsigned long long)sendTransportData:(id)arg1 options:(id)arg2;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;

@end


@interface GTSharedMemoryTransport_capture : GTBaseStreamTransport_capture {
    NSMutableArray * _bufferedMessages;
    int (* _consumeBytesIMP;
    SEL  _consumeBytesSEL;
    unsigned int  _currentPacketBytesLeft;
    bool  _deferred;
    void * _incomingBuffer;
    void * _incomingShmem;
    void * _masterSMRegion;
    int  _mode;
    void * _outgoingBuffer;
    void * _outgoingShmem;
    BOOL  _receiveName;
    GTBaseStreamTransport_capture * _relayTransport;
    BOOL  _sendName;
    unsigned long long  _sm_region_size_large;
    unsigned long long  _sm_region_size_small;
}

@property (nonatomic, readonly) bool deferred;
@property (nonatomic, retain) NSURL *url;

- (void)_accumulateMessageBytes;
- (unsigned long long)_calculateVMRegionMapSize:(unsigned long long)arg1;
- (bool)_clientConnect:(id*)arg1;
- (unsigned long long)_computeBytesAvailableToRead;
- (unsigned long long)_computeBytesAvailableToWrite;
- (void)_copyFromSM:(void*)arg1 size:(unsigned long long)arg2;
- (void)_copyToSM:(const void*)arg1 size:(long long)arg2;
- (bool)_createAndRunSources:(id*)arg1;
- (void)_dequeueIncomingMessages;
- (void)_dequeuePacket;
- (id)_getSharedMemoryNameWithSuffix:(id)arg1;
- (bool)_initializeSMRegion:(struct sm_region_header {}**)arg1 size:(unsigned long long)arg2 name:(const char *)arg3 error:(id*)arg4;
- (void)_invalidate;
- (void*)_mapSharedMemoryFile:(int)arg1 size:(unsigned long long)arg2 error:(id*)arg3;
- (unsigned int)_nextMessageSerial;
- (bool)_openSMRegion:(struct sm_region_header {}**)arg1 size:(unsigned long long)arg2 name:(const char *)arg3 error:(id*)arg4;
- (long long)_read:(void*)arg1 size:(unsigned long long)arg2;
- (void)_relayPacket;
- (bool)_serverConnect:(id*)arg1;
- (void)_setupIOBuffers;
- (void)_tearDownSharedMemory;
- (void)_updateReaderOffset:(unsigned long long)arg1;
- (void)_waitEAGAIN;
- (long long)_write:(const void*)arg1 size:(unsigned long long)arg2;
- (id)connect;
- (bool)connected;
- (void)dealloc;
- (bool)deferred;
- (id)init;
- (id)initWithMode:(int)arg1;
- (id)initWithMode:(int)arg1 initialMessageSerial:(unsigned int)arg2;
- (bool)send:(id)arg1 inReplyTo:(id)arg2 error:(id*)arg3 replyQueue:(id)arg4 timeout:(unsigned long long)arg5 handler:(id /* block */)arg6;
- (void)setRelayTransport:(id)arg1;
- (void)setUrl:(id)arg1;

@end

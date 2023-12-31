
@interface TSPCryptoTranscodeReadChannel : NSObject <TSUStreamReadChannel> {
    SFUCryptoKey * _encryptionKey;
    <TSUStreamReadChannel> * _readChannel;
    NSObject<OS_dispatch_queue> * _readQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)close;
- (id)initWithReadChannel:(id)arg1 decryptionKey:(id)arg2 encryptionKey:(id)arg3;
- (void)readWithQueue:(id)arg1 handler:(id /* block */)arg2;

@end

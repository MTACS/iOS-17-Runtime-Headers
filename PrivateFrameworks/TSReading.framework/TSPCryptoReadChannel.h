
@interface TSPCryptoReadChannel : NSObject <TSUStreamReadChannel> {
    char * _buffer;
    struct _CCCryptor { } * _cryptor;
    SFUCryptoKey * _decryptionKey;
    NSObject<OS_dispatch_data> * _holdData;
    unsigned long long  _initialBytesIgnored;
    char * _iv;
    unsigned long long  _ivRead;
    <TSUStreamReadChannel> * _readChannel;
    NSObject<OS_dispatch_queue> * _readChannelQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)close;
- (void)dealloc;
- (id)initWithReadChannel:(id)arg1 decryptionKey:(id)arg2;
- (void)readWithQueue:(id)arg1 handler:(id /* block */)arg2;

@end

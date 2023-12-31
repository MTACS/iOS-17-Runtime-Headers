
@interface TSPCryptoComponentWriteChannel : NSObject <TSPComponentWriteChannel> {
    char * _buffer;
    struct { 
        unsigned int ctx[96]; 
    }  _ccHmacContext;
    struct _CCCryptor { } * _cryptor;
    <TSPComponentWriteChannel> * _writeChannel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_writeData:(id)arg1 updateHmac:(bool)arg2;
- (void)close;
- (void)dealloc;
- (id)initWithWriteChannel:(id)arg1 encryptionKey:(id)arg2;
- (void)writeData:(id)arg1;

@end

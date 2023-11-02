
@interface DECryptor : NSObject <DEWriter> {
    struct _CCCryptor { } * _cryptor;
    unsigned int  _operation;
    NSObject<DEWriter> * _writer;
}

@property (nonatomic) struct _CCCryptor { }*cryptor;
@property (nonatomic) unsigned int operation;
@property (nonatomic, retain) NSObject<DEWriter> *writer;

- (void).cxx_destruct;
- (void)close;
- (struct _CCCryptor { }*)cryptor;
- (void)dealloc;
- (id)init;
- (id)initWithWriter:(id)arg1 operation:(unsigned int)arg2 key:(id)arg3 iv:(id)arg4;
- (unsigned int)operation;
- (void)setCryptor:(struct _CCCryptor { }*)arg1;
- (void)setOperation:(unsigned int)arg1;
- (void)setWriter:(id)arg1;
- (void)writeData:(id)arg1;
- (id)writer;

@end

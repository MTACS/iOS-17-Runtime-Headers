
@interface wspConnectOut : NSObject {
    unsigned int  _serverVersion;
    wspHeader * _whdr;
}

@property unsigned int serverVersion;
@property (retain) wspHeader *whdr;

- (void).cxx_destruct;
- (int)decodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesDecoded:(unsigned int*)arg3;
- (id)init;
- (unsigned int)serverVersion;
- (void)setServerVersion:(unsigned int)arg1;
- (void)setWhdr:(id)arg1;
- (id)whdr;

@end


@interface wspQueryStatusOut : NSObject {
    unsigned int  _qStatus;
    wspHeader * _whdr;
}

@property unsigned int qStatus;
@property (retain) wspHeader *whdr;

- (void).cxx_destruct;
- (int)decodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesDecoded:(unsigned int*)arg3;
- (id)init;
- (unsigned int)qStatus;
- (void)setQStatus:(unsigned int)arg1;
- (void)setWhdr:(id)arg1;
- (id)whdr;

@end

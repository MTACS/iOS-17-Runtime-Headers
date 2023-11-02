
@interface wspQueryOut : NSObject {
    unsigned int  _cursor;
    unsigned int  _trueSequential;
    wspHeader * _whdr;
    unsigned int  _workID;
}

@property unsigned int cursor;
@property unsigned int trueSequential;
@property (retain) wspHeader *whdr;
@property unsigned int workID;

- (void).cxx_destruct;
- (unsigned int)cursor;
- (int)decodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesDecoded:(unsigned int*)arg3;
- (id)init;
- (void)setCursor:(unsigned int)arg1;
- (void)setTrueSequential:(unsigned int)arg1;
- (void)setWhdr:(id)arg1;
- (void)setWorkID:(unsigned int)arg1;
- (unsigned int)trueSequential;
- (id)whdr;
- (unsigned int)workID;

@end

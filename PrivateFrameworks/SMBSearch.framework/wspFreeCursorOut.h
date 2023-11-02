
@interface wspFreeCursorOut : NSObject {
    unsigned int  _cursorsRemaining;
    wspHeader * _whdr;
}

@property unsigned int cursorsRemaining;
@property (retain) wspHeader *whdr;

- (void).cxx_destruct;
- (unsigned int)cursorsRemaining;
- (int)decodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesDecoded:(unsigned int*)arg3;
- (id)init;
- (void)setCursorsRemaining:(unsigned int)arg1;
- (void)setWhdr:(id)arg1;
- (id)whdr;

@end

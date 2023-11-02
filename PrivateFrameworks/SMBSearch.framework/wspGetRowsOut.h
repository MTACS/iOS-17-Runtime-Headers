
@interface wspGetRowsOut : NSObject {
    searchResults * _results;
    unsigned int  _rowsReturned;
    wspContext * _wctx;
    wspHeader * _whdr;
}

@property (retain) searchResults *results;
@property unsigned int rowsReturned;
@property (retain) wspContext *wctx;
@property (retain) wspHeader *whdr;

- (void).cxx_destruct;
- (int)decodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int*)arg3;
- (id)initWithCtx:(id)arg1;
- (id)results;
- (unsigned int)rowsReturned;
- (void)setResults:(id)arg1;
- (void)setRowsReturned:(unsigned int)arg1;
- (void)setWctx:(id)arg1;
- (void)setWhdr:(id)arg1;
- (id)wctx;
- (id)whdr;

@end

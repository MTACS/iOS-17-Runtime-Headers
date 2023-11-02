
@interface CBWriteRequest : NSObject {
    id /* block */  _completion;
    NSArray * _dataArray;
    bool  _endOfData;
    NSError * _error;
    int  _ion;
    struct iovec { void *x1; unsigned long long x2; } * _iop;
    struct iovec { 
        void *iov_base; 
        unsigned long long iov_len; 
    }  _iov;
    unsigned long long  _offset;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) NSArray *dataArray;
@property (nonatomic) bool endOfData;
@property (nonatomic, readonly) NSError *error;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)dataArray;
- (bool)endOfData;
- (id)error;
- (void)setCompletion:(id /* block */)arg1;
- (void)setDataArray:(id)arg1;
- (void)setEndOfData:(bool)arg1;

@end


@interface _CUTUnsafePromise : CUTUnsafePromise {
    bool  _done;
    CUTResult * _result;
    NSMutableArray * _resultBlocks;
}

@property (nonatomic) bool done;
@property (nonatomic, retain) CUTResult *result;
@property (nonatomic, retain) NSMutableArray *resultBlocks;

- (void).cxx_destruct;
- (void)_fulfillWithResult:(id)arg1;
- (bool)done;
- (id)init;
- (id)initWithResult:(id)arg1;
- (void)registerResultBlock:(id /* block */)arg1;
- (id)result;
- (id)resultBlocks;
- (void)setDone:(bool)arg1;
- (void)setResult:(id)arg1;
- (void)setResultBlocks:(id)arg1;

@end

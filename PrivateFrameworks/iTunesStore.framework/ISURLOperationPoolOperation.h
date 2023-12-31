
@interface ISURLOperationPoolOperation : ISOperation {
    long long  _cancelCount;
    bool  _forwardImmediately;
    NSMutableArray * _operations;
}

@property (nonatomic, readonly) ISURLOperation *mainOperation;

- (void)_forwardResponseFromOperation:(id)arg1 toOperation:(id)arg2;
- (void)addOperation:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (bool)containsOperation:(id)arg1;
- (void)dealloc;
- (id)mainOperation;
- (void)run;

@end


@interface _UIAfterCACommitBlock : NSObject {
    id /* block */  _block;
    _UIAfterCACommitBlock * _next;
    _Atomic bool  _transactionCleared;
}

+ (id)blockWithBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (bool)run;

@end

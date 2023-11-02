
@interface _UIAfterCACommitQueue : NSObject {
    _UIAfterCACommitBlock * _first;
    _UIAfterCACommitBlock * _last;
}

- (void).cxx_destruct;
- (void)enqueuePostCommitBlock:(id /* block */)arg1;
- (void)enqueuePostSynchronizeBlock:(id /* block */)arg1;
- (bool)flush;
- (id)init;

@end

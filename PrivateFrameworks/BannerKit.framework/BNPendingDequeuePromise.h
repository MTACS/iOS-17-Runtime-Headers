
@interface BNPendingDequeuePromise : NSObject {
    id /* block */  _dequeueBlock;
    BNPostingContext * _postingContext;
}

@property (nonatomic, readonly) BNPostingContext *postingContext;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (void)dequeue;
- (id)initWithPostingContext:(id)arg1 dequeueBlock:(id /* block */)arg2;
- (bool)isValid;
- (id)postingContext;

@end

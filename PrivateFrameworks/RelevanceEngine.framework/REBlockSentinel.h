
@interface REBlockSentinel : NSObject {
    bool  _completed;
    id /* block */  _failureBlock;
}

@property (getter=isCompleted) bool completed;
@property (nonatomic, readonly) id /* block */ failureBlock;

- (void).cxx_destruct;
- (void)complete;
- (void)dealloc;
- (id /* block */)failureBlock;
- (id)init;
- (id)initWithFailureBlock:(id /* block */)arg1;
- (bool)isCompleted;
- (void)setCompleted:(bool)arg1;

@end

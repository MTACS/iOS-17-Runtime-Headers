
@interface DKRequestContext : NSObject {
    id /* block */  _completion;
    bool  _completionHandlerExecuted;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic) bool completionHandlerExecuted;

- (void).cxx_destruct;
- (id /* block */)completion;
- (bool)completionHandlerExecuted;
- (void)setCompletion:(id /* block */)arg1;
- (void)setCompletionHandlerExecuted:(bool)arg1;

@end

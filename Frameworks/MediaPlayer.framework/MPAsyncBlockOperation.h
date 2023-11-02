
@interface MPAsyncBlockOperation : MPAsyncOperation {
    id /* block */  _startHandler;
}

@property (nonatomic, readonly, copy) id /* block */ startHandler;

- (void).cxx_destruct;
- (void)execute;
- (id)initWithStartHandler:(id /* block */)arg1;
- (id /* block */)startHandler;

@end


@interface TPSAsyncBlockOperation : TPSAsyncOperation {
    void asyncBlock;
}

@property (nonatomic, copy) id /* block */ asyncBlock;

- (void).cxx_destruct;
- (id /* block */)asyncBlock;
- (id)init;
- (id)initWithAsyncBlock:(id /* block */)arg1;
- (void)main;
- (void)setAsyncBlock:(id /* block */)arg1;

@end

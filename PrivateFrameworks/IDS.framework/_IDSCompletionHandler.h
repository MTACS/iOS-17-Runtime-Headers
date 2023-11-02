
@interface _IDSCompletionHandler : IDSDelegateInfo {
    id /* block */  _handler;
}

@property (nonatomic, copy) id /* block */ handler;

- (void).cxx_destruct;
- (void)dealloc;
- (id /* block */)handler;
- (id)initWithHandler:(id /* block */)arg1 queue:(id)arg2;
- (void)setHandler:(id /* block */)arg1;

@end

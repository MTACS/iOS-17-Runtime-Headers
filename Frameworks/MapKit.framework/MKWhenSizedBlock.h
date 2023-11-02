
@interface MKWhenSizedBlock : NSObject {
    id /* block */  _block;
    id /* block */  _completion;
    bool  _shouldRun;
    long long  _type;
}

@property (nonatomic, copy) id /* block */ block;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic) bool shouldRun;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id /* block */)block;
- (id /* block */)completion;
- (id)initWithType:(long long)arg1 block:(id /* block */)arg2;
- (id)initWithType:(long long)arg1 block:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)perform;
- (void)setBlock:(id /* block */)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setShouldRun:(bool)arg1;
- (void)setType:(long long)arg1;
- (bool)shouldRun;
- (long long)type;

@end

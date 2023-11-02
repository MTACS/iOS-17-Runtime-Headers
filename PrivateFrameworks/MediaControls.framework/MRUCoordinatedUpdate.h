
@interface MRUCoordinatedUpdate : NSObject {
    id /* block */  _completion;
    id /* block */  _update;
}

@property (nonatomic, readonly, copy) id /* block */ completion;
@property (nonatomic, readonly, copy) id /* block */ update;

- (void).cxx_destruct;
- (void)complete;
- (id /* block */)completion;
- (id)initWithUpdate:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)process;
- (id /* block */)update;

@end

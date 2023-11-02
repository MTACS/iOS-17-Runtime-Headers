
@interface SFFluidCollectionViewReuseRegistration : NSObject {
    NSMutableSet * _queue;
    id /* block */  _viewCreationBlock;
}

@property (nonatomic, readonly) NSMutableSet *queue;
@property (nonatomic, readonly, copy) id /* block */ viewCreationBlock;

- (void).cxx_destruct;
- (id)initWithViewCreationBlock:(id /* block */)arg1;
- (id)queue;
- (id /* block */)viewCreationBlock;

@end

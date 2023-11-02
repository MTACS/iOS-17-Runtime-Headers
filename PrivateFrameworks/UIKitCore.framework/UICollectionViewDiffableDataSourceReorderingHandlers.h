
@interface UICollectionViewDiffableDataSourceReorderingHandlers : NSObject <NSCopying> {
    id /* block */  _canReorderItemHandler;
    id /* block */  _didReorderHandler;
    id /* block */  _willReorderHandler;
}

@property (nonatomic, copy) id /* block */ canReorderItemHandler;
@property (nonatomic, copy) id /* block */ didReorderHandler;
@property (nonatomic, copy) id /* block */ willReorderHandler;

- (void).cxx_destruct;
- (id /* block */)canReorderItemHandler;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)didReorderHandler;
- (id)initWithCanReorderItemHandler:(id /* block */)arg1 willReorderItemHandler:(id /* block */)arg2 didReorderItemHandler:(id /* block */)arg3;
- (void)setCanReorderItemHandler:(id /* block */)arg1;
- (void)setDidReorderHandler:(id /* block */)arg1;
- (void)setWillReorderHandler:(id /* block */)arg1;
- (id /* block */)willReorderHandler;

@end

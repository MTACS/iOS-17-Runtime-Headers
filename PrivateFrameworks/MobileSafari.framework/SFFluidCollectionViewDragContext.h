
@interface SFFluidCollectionViewDragContext : NSObject {
    id  _dragDelegateContext;
    SFFluidCollectionView * _fluidCollectionView;
}

@property (nonatomic, retain) id dragDelegateContext;
@property (nonatomic, readonly) SFFluidCollectionView *fluidCollectionView;

- (void).cxx_destruct;
- (id)dragDelegateContext;
- (id)fluidCollectionView;
- (id)getValueWithDelegateObjectsOnSession:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)initWithFluidCollectionView:(id)arg1;
- (void)performWithDelegateObjectsOnSession:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)setDragDelegateContext:(id)arg1;

@end

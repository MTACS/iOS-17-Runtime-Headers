
@interface _UIDiffableDataSourceSectionControllerInternal : _UIDiffableDataSourceSectionController

@property (nonatomic, readonly) NSSet *associatedSectionIdentifiers;
@property (nonatomic, readonly) NSArray *itemRenderers;

- (void)applySnapshot:(id)arg1 toSection:(id)arg2 animatingDifferences:(bool)arg3 completion:(id /* block */)arg4;
- (void)applySnapshot:(id)arg1 toSection:(id)arg2 customAnimationsProvider:(id /* block */)arg3;
- (void)applySnapshot:(id)arg1 toSection:(id)arg2 viewPropertyAnimator:(id)arg3 customAnimationsProvider:(id /* block */)arg4;
- (id)collectionViewDiffableDataSourceSectionController;
- (id)initWithItemRenderers:(id)arg1;
- (id)initWithItemRenderers:(id)arg1 associatedSectionIdentifiers:(id)arg2;

@end

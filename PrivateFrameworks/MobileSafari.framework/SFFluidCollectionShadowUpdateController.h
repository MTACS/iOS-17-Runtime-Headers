
@interface SFFluidCollectionShadowUpdateController : NSObject <SFFluidCollectionDataContainer> {
    <SFFluidCollectionShadowUpdateContainer> * _container;
    bool  _needsInitialCounts;
    NSMutableArray * _numberOfItems;
    unsigned long long  _numberOfSections;
    SFFluidCollectionViewUpdate * _shadowUpdate;
    NSMutableDictionary * _tokenToItemMapping;
    NSMutableSet * _updatesPendingRemoval;
}

@property (nonatomic) <SFFluidCollectionShadowUpdateContainer> *container;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long numberOfSections;
@property (nonatomic, readonly) SFFluidCollectionViewUpdate *shadowUpdate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateCounts;
- (id)addShadowUpdateItems:(id)arg1;
- (id)applyUpdate:(id)arg1;
- (id)container;
- (id)dataSourceIndexPathForIndexPath:(id)arg1;
- (id)indexPathForDataSourceIndexPath:(id)arg1;
- (id)init;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (void)performBatchUpdatesWithBlock:(id /* block */)arg1;
- (void)reload;
- (void)removeShadowUpdateItemsForToken:(id)arg1;
- (void)setContainer:(id)arg1;
- (id)shadowUpdate;

@end

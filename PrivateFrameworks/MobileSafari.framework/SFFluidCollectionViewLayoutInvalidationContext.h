
@interface SFFluidCollectionViewLayoutInvalidationContext : NSObject {
    NSArray * _cachedInvalidatedIndexPaths;
    NSDictionary * _cachedInvalidatedSupplementaryIndexPaths;
    bool  _invalidateDataSourceCounts;
    bool  _invalidateEverything;
    NSMutableSet * _invalidatedElementIdentifiers;
}

@property (nonatomic) bool invalidateDataSourceCounts;
@property (nonatomic) bool invalidateEverything;
@property (nonatomic, readonly) NSArray *invalidatedElementIdentifiers;
@property (nonatomic, readonly) NSArray *invalidatedItemIndexPaths;
@property (nonatomic, readonly) NSDictionary *invalidatedSupplementaryIndexPaths;

- (void).cxx_destruct;
- (id)init;
- (bool)invalidateDataSourceCounts;
- (bool)invalidateEverything;
- (void)invalidateItemsAtIndexPaths:(id)arg1;
- (void)invalidateSupplementaryElementsOfKind:(id)arg1 atIndexPaths:(id)arg2;
- (id)invalidatedElementIdentifiers;
- (id)invalidatedItemIndexPaths;
- (id)invalidatedSupplementaryIndexPaths;
- (void)setInvalidateDataSourceCounts:(bool)arg1;
- (void)setInvalidateEverything:(bool)arg1;

@end

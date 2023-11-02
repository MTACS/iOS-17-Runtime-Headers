
@interface _UICollectionViewCompositionLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {
    NSMapTable * _invalidationContextTable;
}

@property (getter=_invalidationContextTable, setter=_setInvalidationContextTable:, nonatomic, retain) NSMapTable *invalidationContextTable;

- (void).cxx_destruct;
- (id)_invalidationContextTable;
- (void)_setInvalidationContextTable:(id)arg1;

@end

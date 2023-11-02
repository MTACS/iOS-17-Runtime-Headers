
@protocol PXSmartAlbumQuery <NSObject>

@required

- (PXSmartAlbumCondition *)addNewConditionAfterCondition:(PXSmartAlbumCondition *)arg1;
- (bool)canPersistChanges;
- (NSArray *)conditions;
- (PXLabeledValue *)conjunctionValue;
- (NSArray *)conjunctionValues;
- (<PXSmartAlbumQueryDelegate> *)delegate;
- (void)persistChangesWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)removeCondition:(PXSmartAlbumCondition *)arg1;
- (PXSmartAlbumCondition *)replaceCondition:(PXSmartAlbumCondition *)arg1 withConditionOfType:(long long)arg2;
- (void)setConditions:(NSArray *)arg1;
- (void)setConjunctionValue:(PXLabeledValue *)arg1;
- (void)setDelegate:(id <PXSmartAlbumQueryDelegate>)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)statusString;
- (NSString *)title;

@end

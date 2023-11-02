
@interface PXSectionedDataSourceChangeDetails : NSObject <PXSectionedLayoutDataSourceChangeDetails> {
    long long  _fromDataSourceIdentifier;
    NSNumber * _hasAnyChangesCache;
    NSNumber * _hasAnyInsertionsRemovalsOrMovesCache;
    NSDictionary * _itemChangeDetailsBySection;
    NSDictionary * _itemsWithSubitemChangesBySection;
    PXArrayChangeDetails * _sectionChanges;
    NSIndexSet * _sectionsWithItemChanges;
    NSDictionary * _subitemChangeDetailsByItemBySection;
    long long  _toDataSourceIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long fromDataSourceIdentifier;
@property (nonatomic, readonly) bool hasAnyChanges;
@property (nonatomic, readonly) bool hasAnyInsertionsRemovalsOrMoves;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXArrayChangeDetails *sectionChanges;
@property (nonatomic, readonly) NSIndexSet *sectionsWithItemChanges;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long toDataSourceIdentifier;

+ (bool)changeDetailsAreOnlyInsertionsOrOnlyRemovalsAtEnd:(id)arg1 fromDataSource:(id)arg2 toDataSource:(id)arg3;
+ (id)changeDetailsWithNoChangesFromDataSourceIdentifier:(long long)arg1 toDataSourceIdentifier:(long long)arg2;
+ (id)changeDetailsWithoutIncrementalChangesFromDataSourceIdentifier:(long long)arg1 toDataSourceIdentifier:(long long)arg2;
+ (bool)changesHaveAnyInsertionsRemovalsOrMoves:(id)arg1;
+ (void)debug_assertValidChangeDetails:(id)arg1 fromDataSource:(id)arg2 toDataSource:(id)arg3;
+ (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })indexPathAfterApplyingChanges:(id)arg1 toIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2 hasIncrementalChanges:(out bool*)arg3 objectChanged:(out bool*)arg4;
+ (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })indexPathAfterApplyingChanges:(id)arg1 toIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2 hasIncrementalChanges:(out bool*)arg3 objectChanged:(out bool*)arg4 changedProperties:(id)arg5;
+ (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })indexPathAfterRevertingChanges:(id)arg1 fromIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2 hasIncrementalChanges:(out bool*)arg3 objectChanged:(out bool*)arg4;
+ (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })indexPathAfterRevertingChanges:(id)arg1 fromIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2 hasIncrementalChanges:(out bool*)arg3 objectChanged:(out bool*)arg4 changedProperties:(id)arg5;
+ (id)indexPathSetAfterApplyingChanges:(id)arg1 toIndexPathSet:(id)arg2 hasIncrementalChanges:(out bool*)arg3;
+ (id)indexPathSetAfterRevertingChanges:(id)arg1 fromIndexPathSet:(id)arg2 hasIncrementalChanges:(out bool*)arg3;

- (void).cxx_destruct;
- (id)changedItemsInSection:(long long)arg1;
- (id)deletedItemsInSection:(long long)arg1;
- (id)description;
- (long long)fromDataSourceIdentifier;
- (bool)hasAnyChanges;
- (bool)hasAnyInsertionsRemovalsOrMoves;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })indexPathAfterApplyingChangesToIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1 hasIncrementalChanges:(out bool*)arg2 objectChanged:(out bool*)arg3;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })indexPathAfterApplyingChangesToIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1 hasIncrementalChanges:(out bool*)arg2 objectChanged:(out bool*)arg3 changedProperties:(id)arg4;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })indexPathAfterRevertingChangesFromIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1 hasIncrementalChanges:(out bool*)arg2 objectChanged:(out bool*)arg3;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })indexPathAfterRevertingChangesFromIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1 hasIncrementalChanges:(out bool*)arg2 objectChanged:(out bool*)arg3 changedProperties:(id)arg4;
- (id)indexPathSetAfterApplyingChangesToIndexPathSet:(id)arg1 hasIncrementalChanges:(out bool*)arg2;
- (id)indexPathSetAfterRevertingChangesFromIndexPathSet:(id)arg1 hasIncrementalChanges:(out bool*)arg2;
- (id)init;
- (id)initWithFromDataSourceIdentifier:(long long)arg1 toDataSourceIdentifier:(long long)arg2 sectionChanges:(id)arg3 itemChangeDetailsBySection:(id)arg4 subitemChangeDetailsByItemBySection:(id)arg5;
- (id)initWithSectionedDataSourceChangeDetails:(id)arg1 withFromDataSourceIdentifier:(long long)arg2 toDataSourceIdentifier:(long long)arg3;
- (id)insertedItemsInSection:(long long)arg1;
- (id)itemChangesInSection:(long long)arg1;
- (id)itemsWithSubitemChangesInSection:(long long)arg1;
- (id)sectionChanges;
- (id)sectionsWithItemChanges;
- (id)subitemChangesInItem:(long long)arg1 section:(long long)arg2;
- (long long)toDataSourceIdentifier;

@end

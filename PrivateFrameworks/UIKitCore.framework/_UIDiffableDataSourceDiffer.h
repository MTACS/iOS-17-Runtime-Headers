
@interface _UIDiffableDataSourceDiffer : NSObject <_UIDiffableDataSourceDiffer> {
    NSHashTable * _affectedSectionIdentifiers;
    <_UIDiffableDataSourceState> * _afterDataSourceState;
    <_UIDiffableDataSourceState> * _beforeDataSourceState;
    NSIndexSet * _deletedSections;
    NSIndexSet * _insertedSections;
    _UIIdentifierDiffer * _itemIdentifierDiffer;
    _UIIdentifierDiffer * _sectionIdentifierDiffer;
    NSArray * _updates;
}

@property (nonatomic, retain) NSHashTable *affectedSectionIdentifiers;
@property (nonatomic, retain) <_UIDiffableDataSourceState> *afterDataSourceState;
@property (nonatomic, retain) <_UIDiffableDataSourceState> *beforeDataSourceState;
@property (nonatomic, retain) NSIndexSet *deletedSections;
@property (nonatomic, readonly) bool hasDifferences;
@property (nonatomic, retain) NSIndexSet *insertedSections;
@property (nonatomic, retain) _UIIdentifierDiffer *itemIdentifierDiffer;
@property (nonatomic, retain) _UIIdentifierDiffer *sectionIdentifierDiffer;
@property (nonatomic, readonly) bool snapshotsAreRelated;
@property (nonatomic, retain) NSArray *updates;

+ (id)differWithBeforeDataSourceState:(id)arg1 afterDataSourceState:(id)arg2;
+ (id)differWithBeforeDataSourceState:(id)arg1 afterDataSourceState:(id)arg2 itemIdentifierDiffer:(id)arg3;

- (void).cxx_destruct;
- (id)_computeSectionBoundaryMovesForItemDiffer:(id)arg1;
- (void)_computeUpdates;
- (id)_computeUpdatesForIdentifierBasedDiff;
- (id)_itemUpdatesForDiffResults:(id)arg1 sectionBoundaryMoves:(id)arg2 deletedSections:(id)arg3 insertedSections:(id)arg4;
- (id)_sectionUpdatesForDiffResults:(id)arg1 deletedSections:(id)arg2 insertedSections:(id)arg3;
- (bool)_verifyForUpdates:(id)arg1;
- (id)affectedSectionIdentifiers;
- (id)afterDataSourceState;
- (id)beforeDataSourceState;
- (id)deletedSections;
- (id)description;
- (bool)hasDifferences;
- (id)initWithBeforeDataSource:(id)arg1 afterDataSource:(id)arg2 itemIdentifierDiffer:(id)arg3;
- (id)insertedSections;
- (id)itemIdentifierDiffer;
- (id)sectionIdentifierDiffer;
- (void)setAffectedSectionIdentifiers:(id)arg1;
- (void)setAfterDataSourceState:(id)arg1;
- (void)setBeforeDataSourceState:(id)arg1;
- (void)setDeletedSections:(id)arg1;
- (void)setInsertedSections:(id)arg1;
- (void)setItemIdentifierDiffer:(id)arg1;
- (void)setSectionIdentifierDiffer:(id)arg1;
- (void)setUpdates:(id)arg1;
- (bool)snapshotsAreRelated;
- (id)updates;

@end

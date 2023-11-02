
@protocol _UIDiffableDataSourceDiffer

@required

- (NSHashTable *)affectedSectionIdentifiers;
- (<_UIDiffableDataSourceState> *)afterDataSourceState;
- (<_UIDiffableDataSourceState> *)beforeDataSourceState;
- (bool)hasDifferences;
- (_UIIdentifierDiffer *)itemIdentifierDiffer;
- (_UIIdentifierDiffer *)sectionIdentifierDiffer;
- (bool)snapshotsAreRelated;
- (NSArray *)updates;

@end

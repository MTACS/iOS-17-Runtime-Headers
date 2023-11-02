
@interface _UIDiffableDataSourceSectionTransaction : NSObject {
    NSOrderedCollectionDifference * _difference;
    NSDiffableDataSourceSectionSnapshot * _finalSnapshot;
    NSDiffableDataSourceSectionSnapshot * _initialSnapshot;
    id  _sectionIdentifier;
}

@property (nonatomic, readonly) NSOrderedCollectionDifference *difference;
@property (nonatomic, readonly) NSDiffableDataSourceSectionSnapshot *finalSnapshot;
@property (nonatomic, readonly) NSDiffableDataSourceSectionSnapshot *initialSnapshot;
@property (nonatomic, readonly) id sectionIdentifier;

- (void).cxx_destruct;
- (id)description;
- (id)difference;
- (id)finalSnapshot;
- (id)initWithSectionIdentifier:(id)arg1 initialSnapshot:(id)arg2 finalSnapshot:(id)arg3 difference:(id)arg4;
- (id)initialSnapshot;
- (bool)isEqual:(id)arg1;
- (id)sectionIdentifier;

@end

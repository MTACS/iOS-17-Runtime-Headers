
@interface PGLocationsFilterer : NSObject {
    NSArray * _filteredLocationNodes;
    unsigned long long  _filteringType;
    PGIncompleteLocationResolver * _incompleteLocationResolver;
    NSArray * _locationNodes;
    NSArray * _sortedMomentNodes;
}

@property (nonatomic, readonly) NSArray *filteredLocationNodes;
@property (nonatomic) unsigned long long filteringType;
@property (readonly) PGIncompleteLocationResolver *incompleteLocationResolver;
@property (readonly) NSArray *locationNodes;
@property (readonly) NSArray *sortedMomentNodes;

- (void).cxx_destruct;
- (id)_filteredSignificantLocationNodes;
- (id)filteredLocationNodes;
- (unsigned long long)filteringType;
- (id)incompleteLocationResolver;
- (id)initWithSortedMomentNodes:(id)arg1 locationNodes:(id)arg2 incompleteLocationResolver:(id)arg3;
- (id)locationNodes;
- (void)setFilteringType:(unsigned long long)arg1;
- (id)sortedMomentNodes;

@end

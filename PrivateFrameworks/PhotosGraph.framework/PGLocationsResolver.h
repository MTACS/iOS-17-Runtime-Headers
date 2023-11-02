
@interface PGLocationsResolver : NSObject {
    NSSet * _ignoredAddressNodes;
    NSSet * _ignoredLocationNodes;
    PGIncompleteLocationResolver * _incompleteLocationResolver;
    PGGraphLocationHelper * _locationHelper;
    float  _maximumMissingLocationsThreshold;
    NSArray * _resolvedLocationNodes;
    NSMapTable * _resolvedLocationNodesToAddressNodesMapTable;
    NSArray * _resolvedMomentNodes;
    bool  _shouldCreateLocationToAddressMapTable;
    NSArray * _sortedMoments;
}

@property (nonatomic, retain) NSSet *ignoredAddressNodes;
@property (nonatomic, retain) NSSet *ignoredLocationNodes;
@property (nonatomic, retain) PGIncompleteLocationResolver *incompleteLocationResolver;
@property (nonatomic) float maximumMissingLocationsThreshold;
@property (nonatomic, retain) NSArray *resolvedLocationNodes;
@property (nonatomic, readonly) NSMapTable *resolvedLocationNodesToAddressNodesMapTable;
@property (nonatomic, retain) NSArray *resolvedMomentNodes;
@property (nonatomic) bool shouldCreateLocationToAddressMapTable;
@property (nonatomic, retain) NSArray *sortedMoments;

- (void).cxx_destruct;
- (void)_resolve;
- (id)ignoredAddressNodes;
- (id)ignoredLocationNodes;
- (id)incompleteLocationResolver;
- (id)initWithMomentNodes:(id)arg1 incompleteLocationResolver:(id)arg2 locationHelper:(id)arg3;
- (id)initWithSortedMomentNodes:(id)arg1 incompleteLocationResolver:(id)arg2 locationHelper:(id)arg3;
- (float)maximumMissingLocationsThreshold;
- (id)resolvedLocationNodes;
- (id)resolvedLocationNodesToAddressNodesMapTable;
- (id)resolvedMomentNodes;
- (void)setCreateLocationToAddressMapTable:(bool)arg1;
- (void)setIgnoredAddressNodes:(id)arg1;
- (void)setIgnoredLocationNodes:(id)arg1;
- (void)setIncompleteLocationResolver:(id)arg1;
- (void)setMaximumMissingLocationsThreshold:(float)arg1;
- (void)setResolvedLocationNodes:(id)arg1;
- (void)setResolvedMomentNodes:(id)arg1;
- (void)setShouldCreateLocationToAddressMapTable:(bool)arg1;
- (void)setSortedMoments:(id)arg1;
- (bool)shouldCreateLocationToAddressMapTable;
- (id)sortedMoments;

@end

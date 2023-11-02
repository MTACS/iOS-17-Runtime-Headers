
@interface _UIFocusMapSearchInfo : NSObject {
    bool  _didFindFocusBlockingBoundary;
    _UIFocusGroupMap * _focusGroupMap;
    bool  _hasOnlyStaticContent;
    NSArray * _linearSortedFocusItems;
    NSMutableArray * _mutableDestinationRegions;
    NSMutableArray * _mutableSnapshots;
    _UIFocusSearchInfo * _searchInfo;
}

@property (nonatomic, readonly, copy) NSArray *destinationRegions;
@property (nonatomic) bool didFindFocusBlockingBoundary;
@property (nonatomic, retain) _UIFocusGroupMap *focusGroupMap;
@property (nonatomic, readonly) bool hasOnlyStaticContent;
@property (nonatomic, retain) NSArray *linearSortedFocusItems;
@property (nonatomic, retain) NSMutableArray *mutableDestinationRegions;
@property (nonatomic, retain) NSMutableArray *mutableSnapshots;
@property (nonatomic, retain) _UIFocusSearchInfo *searchInfo;
@property (nonatomic, readonly, copy) NSArray *snapshots;

- (void).cxx_destruct;
- (void)addDestinationRegion:(id)arg1;
- (void)addSnapshot:(id)arg1;
- (id)destinationRegions;
- (bool)didFindFocusBlockingBoundary;
- (id)focusGroupMap;
- (bool)hasOnlyStaticContent;
- (id)init;
- (id)linearSortedFocusItems;
- (id)mutableDestinationRegions;
- (id)mutableSnapshots;
- (id)searchInfo;
- (void)setDidFindFocusBlockingBoundary:(bool)arg1;
- (void)setFocusGroupMap:(id)arg1;
- (void)setLinearSortedFocusItems:(id)arg1;
- (void)setMutableDestinationRegions:(id)arg1;
- (void)setMutableSnapshots:(id)arg1;
- (void)setSearchInfo:(id)arg1;
- (id)snapshots;

@end

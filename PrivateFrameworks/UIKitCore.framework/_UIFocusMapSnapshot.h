
@interface _UIFocusMapSnapshot : NSObject <_UIFocusRegionSearchContext> {
    NSHashTable * _eligibleEnvironments;
    NSHashTable * _filteredOriginalRegions;
    struct { 
        unsigned int didCaptureSnapshot : 1; 
        unsigned int isSearchingRegionsOfInterestContainer : 1; 
        unsigned int clipToSnapshotRect : 1; 
        unsigned int ignoresRootContainerClippingRect : 1; 
    }  _flags;
    UIFocusSystem * _focusSystem;
    _UIFocusRegion * _focusedRegion;
    NSHashTable * _ineligibleEnvironments;
    _UIFocusMapRect * _mapArea;
    _UIFocusMovementInfo * _movementInfo;
    NSMutableArray * _mutableUnoccludedRegions;
    struct __CFDictionary { } * _regionFrameCache;
    struct __CFDictionary { } * _regionToFocusItemCache;
    struct __CFDictionary { } * _regionToOccludingRegionsMap;
    NSArray * _regions;
    <_UIFocusRegionContainer> * _regionsContainer;
    <_UIFocusRegionContainer> * _rootContainer;
    _UIFocusMapRect * _searchArea;
    _UIFocusSearchInfo * _searchInfo;
    NSMutableArray * _stateStack;
    struct __CFDictionary { } * _subregionToRegionMap;
    NSHashTable * _uncachableEnvironments;
    NSMutableSet * _visitedRegionContainers;
}

@property (nonatomic, readonly) <UICoordinateSpace> *coordinateSpace;
@property (readonly, copy) NSString *debugDescription;
@property (getter=_debugInfo, nonatomic, readonly) _UIFocusMapSnapshotDebugInfo *debugInfo;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIFocusSystem *focusSystem;
@property (nonatomic, readonly, copy) _UIFocusRegion *focusedRegion;
@property (nonatomic, readonly) bool hasOnlyStaticContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _UIFocusMapRect *mapArea;
@property (nonatomic, retain) _UIFocusMovementInfo *movementInfo;
@property (nonatomic, readonly, copy) NSArray *originalRegions;
@property (nonatomic, readonly, copy) NSArray *regions;
@property (nonatomic, readonly) <_UIFocusRegionContainer> *regionsContainer;
@property (nonatomic, readonly) <_UIFocusRegionContainer> *rootContainer;
@property (nonatomic, readonly) UIScreen *screen;
@property (getter=_searchArea, nonatomic, readonly) _UIFocusMapRect *searchArea;
@property (nonatomic, retain) _UIFocusSearchInfo *searchInfo;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cachedNextFocusedItemForRegion:(id)arg1 withFocusMovementRequest:(id)arg2 inMap:(id)arg3;
- (void)_capture;
- (id)_debugInfo;
- (id)_debugInfoWithFocusMapSearchInfo:(id)arg1;
- (id)_initWithSnapshotter:(id)arg1 mapArea:(id)arg2 searchArea:(id)arg3;
- (id)_searchArea;
- (void)_trackOccludingRegion:(id)arg1 forRegion:(id)arg2;
- (void)_trackSubregion:(id)arg1 forRegion:(id)arg2;
- (void)addRegion:(id)arg1;
- (void)addRegions:(id)arg1;
- (void)addRegionsInContainer:(id)arg1;
- (void)addRegionsInContainers:(id)arg1;
- (void)consumeRegionInformationForRegions:(id)arg1 fromSnapshot:(id)arg2;
- (id)coordinateSpace;
- (void)dealloc;
- (id)debugQuickLookObject;
- (id)focusSystem;
- (id)focusedRegion;
- (bool)hasOnlyStaticContent;
- (id)init;
- (id)mapArea;
- (void)markContainerAsProvidingDynamicContent;
- (id)movementInfo;
- (id)occludingRegionsForRegion:(id)arg1;
- (id)originalRegionForRegion:(id)arg1;
- (id)originalRegions;
- (id)regions;
- (id)regionsContainer;
- (id)regionsForOriginalRegion:(id)arg1;
- (id)rootContainer;
- (id)screen;
- (id)searchArea;
- (id)searchInfo;
- (void)setMovementInfo:(id)arg1;
- (void)setSearchInfo:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })snapshotFrameForRegion:(id)arg1;

@end

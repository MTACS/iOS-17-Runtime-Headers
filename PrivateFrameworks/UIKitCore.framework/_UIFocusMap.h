
@interface _UIFocusMap : NSObject {
    <UICoordinateSpace> * _coordinateSpace;
    _UIFocusMapSearchInfo * _defaultItemSearchInfo;
    _UIFocusGroupMap * _focusGroupMap;
    _UIFocusMapSearchInfo * _focusMovementSearchInfo;
    UIFocusSystem * _focusSystem;
    bool  _ignoresRootContainerClippingRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _minimumSearchArea;
    bool  _minimumSearchAreaIsEmpty;
    bool  _needsSearchInfo;
    <_UIFocusRegionContainer> * _rootContainer;
    _UIFocusSearchInfo * _searchInfo;
    bool  _trackingSearchInfo;
}

@property (nonatomic, readonly) <UICoordinateSpace> *coordinateSpace;
@property (getter=_defaultItemSearchContext, nonatomic, readonly) _UIFocusMapSearchInfo *defaultItemSearchInfo;
@property (nonatomic, readonly) _UIFocusGroupMap *focusGroupMap;
@property (getter=_focusMovementSearchContext, nonatomic, readonly) _UIFocusMapSearchInfo *focusMovementSearchInfo;
@property (nonatomic, readonly) UIFocusSystem *focusSystem;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } minimumSearchArea;
@property (nonatomic, readonly) <_UIFocusRegionContainer> *rootContainer;
@property (nonatomic, readonly) _UIFocusSearchInfo *searchInfo;

- (void).cxx_destruct;
- (id)_allDefaultFocusableRegionsInContainer:(id)arg1 intersectingRegion:(id)arg2;
- (id)_allFocusableItemsInEnvironment:(id)arg1;
- (void)_beginTrackingDefaultItemSearchInfoIfNecessary;
- (void)_beginTrackingFocusMovementSearchInfoIfNecessary;
- (void)_beginTrackingSearches;
- (id)_closestFocusableItemToPoint:(struct CGPoint { double x1; double x2; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 excludingItems:(id)arg3 distanceMeasuringUnitPoint:(struct CGPoint { double x1; double x2; })arg4;
- (id)_defaultItemSearchContext;
- (id)_defaultMapSnapshotter;
- (id)_findAllDefaultFocusableRegionsWithSnapshotter:(id)arg1;
- (id)_focusMovementSearchContext;
- (id)_inferredDefaultFocusItemInEnvironment:(id)arg1;
- (id)_linearlySortedFocusItemsForItems:(id)arg1 groupFilter:(long long)arg2 itemStandInMap:(id)arg3;
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1;
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 inRegions:(id)arg2 withSnapshot:(id)arg3;
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 startingFromRegion:(id)arg2;
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 startingFromRegion:(id)arg2 inRegions:(id)arg3 withSnapshot:(id)arg4;
- (id)_nextFocusedItemForLinearFocusMovementRequest:(id)arg1 startingFromRegion:(id)arg2 inRegions:(id)arg3 withSnapshot:(id)arg4;
- (id)_nextFocusedItemForNonLinearFocusMovementRequest:(id)arg1 startingFromRegion:(id)arg2 inRegions:(id)arg3 withSnapshot:(id)arg4;
- (id)_stopTrackingSearches;
- (void)_trackExternalSnapshot:(id)arg1;
- (id)coordinateSpace;
- (void)diagnoseFocusabilityForItem:(id)arg1 report:(id)arg2;
- (id)focusGroupMap;
- (id)focusSystem;
- (id)init;
- (id)initWithFocusSystem:(id)arg1 rootContainer:(id)arg2;
- (id)initWithFocusSystem:(id)arg1 rootContainer:(id)arg2 coordinateSpace:(id)arg3 searchInfo:(id)arg4 ignoresRootContainerClippingRect:(bool)arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })minimumSearchArea;
- (id)rootContainer;
- (id)searchInfo;
- (void)setMinimumSearchArea:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)verifyFocusabilityForItem:(id)arg1;

@end

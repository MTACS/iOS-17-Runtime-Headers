
@interface _UIFocusMapSnapshotter : NSObject {
    bool  _clipToSnapshotRect;
    _UIFocusRegionContentAttributes * _contentAttributes;
    <UICoordinateSpace> * _coordinateSpace;
    UIFocusSystem * _focusSystem;
    _UIFocusRegion * _focusedRegion;
    bool  _ignoresRootContainerClippingRect;
    _UIFocusMovementInfo * _movementInfo;
    <_UIFocusRegionContainer> * _regionsContainer;
    <_UIFocusRegionContainer> * _rootContainer;
    _UIFocusSearchInfo * _searchInfo;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _snapshotFrame;
    bool  _snapshotFrameIsEmpty;
}

@property (nonatomic) bool clipToSnapshotRect;
@property (nonatomic, readonly, copy) _UIFocusRegionContentAttributes *contentAttributes;
@property (nonatomic, readonly) <UICoordinateSpace> *coordinateSpace;
@property (nonatomic, readonly) UIFocusSystem *focusSystem;
@property (nonatomic, retain) _UIFocusRegion *focusedRegion;
@property (nonatomic) bool ignoresRootContainerClippingRect;
@property (nonatomic, retain) _UIFocusMovementInfo *movementInfo;
@property (nonatomic) <_UIFocusRegionContainer> *regionsContainer;
@property (nonatomic, readonly) <_UIFocusRegionContainer> *rootContainer;
@property (nonatomic, retain) _UIFocusSearchInfo *searchInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } snapshotFrame;

- (void).cxx_destruct;
- (id)_searchAreaForContainerSearchRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)captureSnapshot;
- (bool)clipToSnapshotRect;
- (id)contentAttributes;
- (id)coordinateSpace;
- (id)focusSystem;
- (id)focusedRegion;
- (bool)ignoresRootContainerClippingRect;
- (id)init;
- (id)initWithFocusSystem:(id)arg1 rootContainer:(id)arg2 coordinateSpace:(id)arg3 searchInfo:(id)arg4 ignoresRootContainerClippingRect:(bool)arg5;
- (id)movementInfo;
- (id)regionsContainer;
- (id)rootContainer;
- (id)searchInfo;
- (void)setClipToSnapshotRect:(bool)arg1;
- (void)setFocusedRegion:(id)arg1;
- (void)setIgnoresRootContainerClippingRect:(bool)arg1;
- (void)setMovementInfo:(id)arg1;
- (void)setRegionsContainer:(id)arg1;
- (void)setSearchInfo:(id)arg1;
- (void)setSnapshotFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })snapshotFrame;

@end

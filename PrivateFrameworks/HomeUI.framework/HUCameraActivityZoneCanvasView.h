
@interface HUCameraActivityZoneCanvasView : UIView {
    NSMutableArray * _activityZones;
    UIImageView * _canvasView;
    NSMutableArray * _currentActivityZone;
    long long  _currentTouchPointIndex;
    <HUCameraActivityZoneCanvasDelegate> * _delegate;
    bool  _displaysInclusionZones;
    bool  _editingActivityZone;
    HMPoint * _startingTouchPoint;
}

@property (nonatomic, readonly) NSMutableArray *activityZones;
@property (nonatomic, retain) UIImageView *canvasView;
@property (nonatomic, retain) NSMutableArray *currentActivityZone;
@property (nonatomic) long long currentTouchPointIndex;
@property (nonatomic) <HUCameraActivityZoneCanvasDelegate> *delegate;
@property (nonatomic) bool displaysInclusionZones;
@property (getter=isEditingActivityZone, nonatomic) bool editingActivityZone;
@property (nonatomic, readonly) bool isCreatingActivityZone;
@property (nonatomic, retain) HMPoint *startingTouchPoint;

- (void).cxx_destruct;
- (void)_addTouchpointAtPoint:(struct CGPoint { double x1; double x2; })arg1 inContext:(struct CGContext { }*)arg2 withRed:(double)arg3 green:(double)arg4 blue:(double)arg5;
- (void)_displayMenuForActivityZone:(id)arg1;
- (void)_drawPolygonWithMaskPath:(id)arg1;
- (void)_drawTouchPoints;
- (void)_editActivityZone:(id)arg1;
- (void)_finishEditingCurrentActivityZone;
- (void)_handleBeginForGesture:(id)arg1;
- (void)_handleChangeForGesture:(id)arg1;
- (void)_handleEndForGesture:(id)arg1;
- (id)_hmPointForTapPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })_hmPointToCGPoint:(id)arg1;
- (struct CGPoint { double x1; double x2; })_normalizedPointForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_prepCurrentActivityZoneForDeselection;
- (void)_resetCanvasAndCurrentZone;
- (id)activityZoneContainingPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)activityZones;
- (bool)canBecomeFirstResponder;
- (bool)canCreateActivityZone;
- (id)canvasView;
- (void)clearActivityZone;
- (void)createActivityZone;
- (id)currentActivityZone;
- (long long)currentTouchPointIndex;
- (bool)currentZonesIntersectPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)currentZonesIntersectSegmentFromPoint:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)delegate;
- (void)didPan:(id)arg1;
- (void)didTap:(id)arg1;
- (bool)displaysInclusionZones;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isCreatingActivityZone;
- (bool)isEditingActivityZone;
- (bool)isValidPointInView:(struct CGPoint { double x1; double x2; })arg1;
- (void)loadActivityZones:(id)arg1;
- (void)preventAttemptToMovePoint;
- (id)selectedActivityZoneAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCanvasView:(id)arg1;
- (void)setCurrentActivityZone:(id)arg1;
- (void)setCurrentTouchPointIndex:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplaysInclusionZones:(bool)arg1;
- (void)setEditingActivityZone:(bool)arg1;
- (void)setStartingTouchPoint:(id)arg1;
- (id)startingTouchPoint;
- (void)updateAfterVideoBoundsChange;

@end


@interface PKSelectionGlowRenderer : NSObject <PKSelectionRendering> {
    long long  _draggedKnobLocation;
    CALayer * _highlightLayer;
    bool  _isDraggingKnob;
    long long  _knobDragMode;
    UIBezierPath * _lassoPath;
    PKSelectionModificationKnob * _leftKnob;
    <PKSelectionRenderingDelegate> * _renderingDelegate;
    PKSelectionModificationKnob * _rightKnob;
    CALayer * _strokePathsTilesLayer;
    PKStrokeSelection * _strokeSelection;
    NSMutableDictionary * _tiles;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_accessibilityUserTestingChildren;
- (void)_didBeginDraggingSelection;
- (void)_didEndDraggingSelection;
- (void)_renderLiveSelectionPath:(struct CGPath { }*)arg1 forStrokes:(id)arg2 inDrawing:(id)arg3 liveScrollOffset:(struct CGPoint { double x1; double x2; })arg4;
- (void)_setupSelectionAdornment;
- (id)adornmentLayer;
- (struct CGPoint { double x1; double x2; })editMenuLocation;
- (id)initForLiveSelectionWithRenderingDelegate:(id)arg1;
- (id)initWithStrokeSelection:(id)arg1 renderingDelegate:(id)arg2;
- (id)lassoPath;

@end

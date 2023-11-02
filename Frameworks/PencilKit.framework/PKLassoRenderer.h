
@interface PKLassoRenderer : NSObject <PKSelectionRendering> {
    id /* block */  _calculateSelectionHullBlock;
    struct CGPoint { 
        double x; 
        double y; 
    }  _editMenuLocation;
    CAShapeLayer * _lassoLayer;
    UIBezierPath * _lassoPath;
    <PKSelectionRenderingDelegate> * _renderingDelegate;
    PKStrokeSelection * _strokeSelection;
    CAShapeLayer * _whiteLassoLayer;
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
- (void)_updateLassoForAccessibility:(id)arg1;
- (id)adornmentLayer;
- (void)dealloc;
- (struct CGPoint { double x1; double x2; })editMenuLocation;
- (id)initForLiveSelectionWithRenderingDelegate:(id)arg1;
- (id)initWithStrokeSelection:(id)arg1 renderingDelegate:(id)arg2;
- (id)lassoPath;

@end


@interface PKSpaceInsertionController : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _beginDragLocation;
    PKImageView * _bottomImageView;
    PKSpaceInsertionView * _bottomInsertionView;
    PKStrokeSelection * _bottomStrokeSelection;
    PKStrokeSelection * _cachedStrokeSelection;
    NSOrderedSet * _cachedStrokesAbove;
    NSOrderedSet * _cachedStrokesBelow;
    bool  _didMoveStrokes;
    UIPanGestureRecognizer * _dragBottomLollipopGR;
    UIPanGestureRecognizer * _dragTopLollipopGR;
    PKDrawing * _drawing;
    NSOrderedSet * _externalElements;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialViewLocation;
    bool  _insertSpaceAffordancePanDidEnd;
    bool  _isCurrentlyAddingSpace;
    PKStroke * _lassoStroke;
    PKSelectionController * _selectionController;
    long long  _selectionTypeBeforeInsertingSpace;
    bool  _shouldUseCachedStrokes;
    PKStrokeSelection * _strokeSelectionBeforeInsertingSpace;
    NSMutableOrderedSet * _strokesAbove;
    NSMutableOrderedSet * _strokesBelow;
    UIView * _tapToDismissView;
    bool  _topHandleRemovesWhitespace;
    PKImageView * _topImageView;
    PKSpaceInsertionView * _topInsertionView;
    PKStrokeSelection * _topStrokeSelection;
}

@property (nonatomic, readonly) bool didMoveStrokes;
@property (nonatomic, retain) PKDrawing *drawing;
@property (nonatomic, copy) NSOrderedSet *externalElements;
@property (nonatomic) bool isCurrentlyAddingSpace;
@property (nonatomic, retain) PKStroke *lassoStroke;
@property (nonatomic, readonly) PKSelectionController *selectionController;

- (void).cxx_destruct;
- (void)_addSpacingViewsWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_blitStrokesToViewForSpaceInsertionType:(unsigned long long)arg1 withCompletion:(id /* block */)arg2;
- (void)_didEndCreatingSpace;
- (void)_didGrabInsertSpaceAffordance:(id)arg1;
- (void)_dismissHandlesAndReselectExistingSelectionInDrawing:(id)arg1;
- (void)_dismissSpacingResizeHandles;
- (void)_dragLollipop:(id)arg1;
- (double)_initalBufferBetweenLollipops;
- (void)_layoutViewsIfNecessary;
- (void)_makeSpaceWithOffset:(double)arg1 spaceInsertionType:(unsigned long long)arg2;
- (void)_panGestureDidBegin:(id)arg1;
- (void)_panGestureDidCancelOrFail:(id)arg1;
- (void)_panGestureDidChange:(id)arg1;
- (void)_panGestureDidEnd:(id)arg1;
- (void)_sortStrokesAboveOrBelowWithStrokesAbove:(id)arg1 strokesBelow:(id)arg2;
- (void)_temporarilyShiftStrokesWithOffset:(double)arg1 spaceInsertionType:(unsigned long long)arg2;
- (id)_visibleStrokesOnPage:(id)arg1;
- (void)commitSpacingResize;
- (void)didBeginCreatingSpaceWithLassoStroke:(id)arg1 drawing:(id)arg2 addDefaultSpace:(bool)arg3 strokesAbove:(id)arg4 strokesBelow:(id)arg5 externalElements:(id)arg6;
- (bool)didMoveStrokes;
- (void)didScroll:(struct CGPoint { double x1; double x2; })arg1;
- (id)drawing;
- (id)externalElements;
- (void)fetchStrokesAmbiguouslyBelowAndAboveInsertSpaceHandleWithStrokes:(id)arg1 inDrawing:(id)arg2 completion:(id /* block */)arg3;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)initTopAndBottomSelectionIfNecessary;
- (id)initWithSelectionController:(id)arg1;
- (void)insertDefaultSpace:(double)arg1;
- (void)invalidateCachedStrokes;
- (bool)isCurrentlyAddingSpace;
- (id)lassoStroke;
- (double)offsetInStrokeSpaceFromViewOffset:(double)arg1 inDrawing:(id)arg2;
- (void)projectPath:(struct CGPath { }*)arg1 toEndOfFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)selectionController;
- (void)setDrawing:(id)arg1;
- (void)setExternalElements:(id)arg1;
- (void)setIsCurrentlyAddingSpace:(bool)arg1;
- (void)setLassoStroke:(id)arg1;
- (void)shiftStrokesWithOffset:(double)arg1;

@end

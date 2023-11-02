
@interface PKSelectionController : NSObject <PKSelectionObserving, PKSelectionRenderingDelegate, UIDropInteractionDelegate_Private> {
    long long  _currentIntersectionAlgorithm;
    UIPasteboard * _currentPasteboard;
    PKStrokeSelection * _currentStrokeSelection;
    id /* block */  _deferredChangingColorBlock;
    UIDropInteraction * _dropInteraction;
    struct CGPoint { 
        double x; 
        double y; 
    }  _dropPosition;
    bool  _insertSpaceEnabled;
    id /* block */  _intersectStrokesBetweenLollipopBlock;
    NSObject<OS_dispatch_queue> * _intersectionQueue;
    bool  _isChangingColor;
    bool  _isClearingSelection;
    bool  _isCurrentlyAddingSpace;
    <PKDrawingUUID> * _previousDrawingUUIDForSelection;
    PKSelectionGestureView * _selectionGestureView;
    NSObject<OS_dispatch_queue> * _selectionHullQueue;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _selectionTransform;
    PKSelectionView * _selectionView;
    int  _selectionViewCount;
    bool  _shouldClampInputPoints;
    PKSpaceInsertionController * _spaceInsertionController;
    PKTiledView * _tiledView;
    PKTranscriptionController * _transcriptionController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *selectionHullQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addItemsToPasteboard:(id)arg1;
- (long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (id)_firstStrokesInStrokes:(id)arg1;
- (id)_lastStrokesInStrokes:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attachmentBoundsForDrawing:(id)arg1;
- (long long)currentIntersectionAlgorithm;
- (void)dealloc;
- (void)didBeginModifyDrawing;
- (void)didBeginSpaceInsertionWithLassoStroke:(id)arg1 drawing:(id)arg2 addDefaultSpace:(bool)arg3 strokesAbove:(id)arg4 strokesBelow:(id)arg5 externalElements:(id)arg6;
- (void)didEndModifyDrawing;
- (void)didEndScroll;
- (void)didSelect:(id)arg1 lassoStroke:(id)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 drawing:(id)arg4;
- (void)didSelect:(id)arg1 lassoStroke:(id)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 drawing:(id)arg4 selectionType:(long long)arg5 completion:(id /* block */)arg6;
- (void)didSelectStrokesNotification:(id)arg1;
- (bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (bool)isRTL;
- (double)scaleForDrawing:(id)arg1;
- (struct CGColor { }*)selectionColor;
- (id)selectionHullQueue;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformFromStrokeSpaceToViewInDrawing:(id)arg1;

@end

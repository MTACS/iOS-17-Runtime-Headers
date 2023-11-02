
@interface SBWindowDragGestureWorkspaceTransaction : SBFluidSwitcherGestureWorkspaceTransaction {
    bool  _draggingFromContinuousExposeStrips;
    struct CGPoint { 
        double x; 
        double y; 
    }  _locationInSelectedDisplayItem;
    struct CGSize { 
        double width; 
        double height; 
    }  _sizeOfSelectedDisplayItem;
}

@property (getter=isDraggingFromContinuousExposeStrips, nonatomic, readonly) bool draggingFromContinuousExposeStrips;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } locationInSelectedDisplayItem;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } sizeOfSelectedDisplayItem;

- (void)_beginWithGesture:(id)arg1;
- (void)_finishWithGesture:(id)arg1;
- (long long)_gestureType;
- (void)interceptTransitionRequest:(id)arg1;
- (bool)isDraggingFromContinuousExposeStrips;
- (struct CGPoint { double x1; double x2; })locationInSelectedDisplayItem;
- (bool)shouldInterceptTransitionRequest:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeOfSelectedDisplayItem;

@end

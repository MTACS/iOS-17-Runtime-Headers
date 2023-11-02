
@interface SBWindowDragSwitcherModifierEvent : SBGestureSwitcherModifierEvent {
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

@property (getter=isDraggingFromContinuousExposeStrips, nonatomic) bool draggingFromContinuousExposeStrips;
@property (nonatomic) struct CGPoint { double x1; double x2; } locationInSelectedDisplayItem;
@property (nonatomic) struct CGSize { double x1; double x2; } sizeOfSelectedDisplayItem;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isDraggingFromContinuousExposeStrips;
- (bool)isWindowDragGestureEvent;
- (struct CGPoint { double x1; double x2; })locationInSelectedDisplayItem;
- (void)setDraggingFromContinuousExposeStrips:(bool)arg1;
- (void)setLocationInSelectedDisplayItem:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSizeOfSelectedDisplayItem:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeOfSelectedDisplayItem;

@end

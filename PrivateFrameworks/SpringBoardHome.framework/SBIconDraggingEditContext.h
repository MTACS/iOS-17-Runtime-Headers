
@interface SBIconDraggingEditContext : NSObject {
    id  _draggingUniqueIdentifier;
    struct CGPoint { 
        double x; 
        double y; 
    }  _enteredScreenLocation;
    bool  _enteredScreenLocationNeedsUpdate;
}

@property (nonatomic, retain) id draggingUniqueIdentifier;
@property (nonatomic) struct CGPoint { double x1; double x2; } enteredScreenLocation;
@property (nonatomic) bool enteredScreenLocationNeedsUpdate;

- (void).cxx_destruct;
- (id)draggingUniqueIdentifier;
- (struct CGPoint { double x1; double x2; })enteredScreenLocation;
- (bool)enteredScreenLocationNeedsUpdate;
- (void)setDraggingUniqueIdentifier:(id)arg1;
- (void)setEnteredScreenLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setEnteredScreenLocationNeedsUpdate:(bool)arg1;

@end

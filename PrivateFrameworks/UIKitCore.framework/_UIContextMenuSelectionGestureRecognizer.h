
@interface _UIContextMenuSelectionGestureRecognizer : UIGestureRecognizer {
    struct CGVector { 
        double dx; 
        double dy; 
    }  _allowableMovement;
    struct CGPoint { 
        double x; 
        double y; 
    }  _originalLocation;
}

@property (nonatomic) struct CGVector { double x1; double x2; } allowableMovement;
@property (nonatomic) struct CGPoint { double x1; double x2; } originalLocation;

+ (bool)_supportsTouchContinuation;

- (void)_cancelOrFail;
- (bool)_shouldReceiveTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGVector { double x1; double x2; })allowableMovement;
- (id)init;
- (struct CGPoint { double x1; double x2; })originalLocation;
- (void)setAllowableMovement:(struct CGVector { double x1; double x2; })arg1;
- (void)setOriginalLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

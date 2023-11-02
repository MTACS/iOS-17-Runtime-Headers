
@interface _UIFocusCastingController : NSObject {
    unsigned long long  _entryPointAxis;
    double  _entryPointMemorizationTimeout;
    UIView * _focusCastingIndicator;
    UIView * _focusEntryIndicator;
    UIView * _focusMovementIndicator;
    UIFocusSystem * _focusSystem;
    bool  _isRememberingEntryPoint;
    struct CGPoint { 
        double x; 
        double y; 
    }  _screenEntryPoint;
}

@property (nonatomic) unsigned long long entryPointAxis;
@property (nonatomic) double entryPointMemorizationTimeout;
@property (nonatomic, retain) UIView *focusCastingIndicator;
@property (nonatomic, retain) UIView *focusEntryIndicator;
@property (nonatomic, retain) UIView *focusMovementIndicator;
@property (nonatomic) UIFocusSystem *focusSystem;
@property (nonatomic) bool isRememberingEntryPoint;
@property (nonatomic) struct CGPoint { double x1; double x2; } screenEntryPoint;

- (void).cxx_destruct;
- (unsigned long long)_axisForHeading:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_castingFrameForFocusedNormalizedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 heading:(unsigned long long)arg2;
- (struct CGPoint { double x1; double x2; })_castingPointInNormalizedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forHeading:(unsigned long long)arg2;
- (void)_createFocusMovementIndicator;
- (void)_destroyFocusMovementIndicator;
- (struct CGPoint { double x1; double x2; })_entryPointInNormalizedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forHeading:(unsigned long long)arg2;
- (id)_focusEffectsControllerForFocusedItem;
- (struct CGPoint { double x1; double x2; })_movementPointInNormalizedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_normalizedCoordinateSpace;
- (void)_positionFocusMovementIndicators;
- (void)_startRememberingEntryPoint;
- (void)_stopRememberingEntryPoint;
- (void)_updateFocusItemFromNormalizedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toNormalizedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withHeading:(unsigned long long)arg3;
- (void)_updateFocusMovementIndicatorDisplay;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })castingFrameForFocusedItem:(id)arg1 heading:(unsigned long long)arg2 inCoordinateSpace:(id)arg3;
- (unsigned long long)entryPointAxis;
- (double)entryPointMemorizationTimeout;
- (id)focusCastingIndicator;
- (void)focusEffectsController:(id)arg1 updateMovementDirection:(struct CGVector { double x1; double x2; })arg2;
- (id)focusEntryIndicator;
- (id)focusMovementIndicator;
- (id)focusSystem;
- (void)forceUpdateFocusCastingFocusedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 coordinateSpace:(id)arg2 heading:(unsigned long long)arg3;
- (void)forgetEntryPoint;
- (id)init;
- (bool)isRememberingEntryPoint;
- (struct CGPoint { double x1; double x2; })screenEntryPoint;
- (void)setEntryPointAxis:(unsigned long long)arg1;
- (void)setEntryPointMemorizationTimeout:(double)arg1;
- (void)setFocusCastingIndicator:(id)arg1;
- (void)setFocusEntryIndicator:(id)arg1;
- (void)setFocusMovementIndicator:(id)arg1;
- (void)setFocusSystem:(id)arg1;
- (void)setIsRememberingEntryPoint:(bool)arg1;
- (void)setScreenEntryPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)teardown;
- (void)updateFocusCastingWithContext:(id)arg1;

@end

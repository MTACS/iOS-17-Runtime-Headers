
@interface RPTDragInteraction : NSObject <RPTInteraction, _RPTCoordinateSpaces> {
    bool  __locationsAreAlreadyScreenSpace;
    RPTCoordinateSpaceConverter * _conversion;
    struct CGPoint { 
        double x; 
        double y; 
    }  _destinationLocation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _sourceLocation;
}

@property (nonatomic) bool _locationsAreAlreadyScreenSpace;
@property (nonatomic, retain) RPTCoordinateSpaceConverter *conversion;
@property (nonatomic) struct CGPoint { double x1; double x2; } destinationLocation;
@property (nonatomic) struct CGPoint { double x1; double x2; } sourceLocation;

- (void).cxx_destruct;
- (id)_andThenDragBy:(struct CGVector { double x1; double x2; })arg1;
- (bool)_locationsAreAlreadyScreenSpace;
- (id)conversion;
- (struct CGPoint { double x1; double x2; })destinationLocation;
- (id)initByDraggingWindow:(id)arg1 byDelta:(struct CGVector { double x1; double x2; })arg2;
- (id)initFromSourceLocation:(struct CGPoint { double x1; double x2; })arg1 toDestinationLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)interactionByScalingBy:(double)arg1;
- (void)invokeWithComposer:(id)arg1 duration:(double)arg2;
- (id)reversedInteraction;
- (void)setConversion:(id)arg1;
- (void)setDestinationLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSourceLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)set_locationsAreAlreadyScreenSpace:(bool)arg1;
- (struct CGPoint { double x1; double x2; })sourceLocation;

@end

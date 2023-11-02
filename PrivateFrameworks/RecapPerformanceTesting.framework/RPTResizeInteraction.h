
@interface RPTResizeInteraction : NSObject <RPTInteraction, _RPTCoordinateSpaces> {
    RPTCoordinateSpaceConverter * _conversion;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _delta;
    struct CGPoint { 
        double x; 
        double y; 
    }  _dragPoint;
    struct CGSize { 
        double width; 
        double height; 
    }  _finalSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _initialSize;
    bool  _shouldLift;
    bool  _shouldPress;
}

@property (nonatomic, retain) RPTCoordinateSpaceConverter *conversion;
@property (nonatomic) struct CGVector { double x1; double x2; } delta;
@property (nonatomic) struct CGPoint { double x1; double x2; } dragPoint;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } finalSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } initialSize;
@property (nonatomic) bool shouldLift;
@property (nonatomic) bool shouldPress;

- (void).cxx_destruct;
- (id)conversion;
- (struct CGVector { double x1; double x2; })delta;
- (struct CGPoint { double x1; double x2; })dragPoint;
- (struct CGSize { double x1; double x2; })finalSize;
- (id)initWithDragPoint:(struct CGPoint { double x1; double x2; })arg1 delta:(struct CGVector { double x1; double x2; })arg2 sourceSize:(struct CGSize { double x1; double x2; })arg3;
- (id)initWithDragPoint:(struct CGPoint { double x1; double x2; })arg1 sourceSize:(struct CGSize { double x1; double x2; })arg2 destinationSize:(struct CGSize { double x1; double x2; })arg3;
- (id)initWithWindow:(id)arg1 destinationSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGSize { double x1; double x2; })initialSize;
- (id)interactionByScalingBy:(double)arg1;
- (void)invokeWithComposer:(id)arg1 duration:(double)arg2;
- (id)reversedInteraction;
- (void)setConversion:(id)arg1;
- (void)setDelta:(struct CGVector { double x1; double x2; })arg1;
- (void)setDragPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setShouldLift:(bool)arg1;
- (void)setShouldPress:(bool)arg1;
- (bool)shouldLift;
- (bool)shouldPress;

@end

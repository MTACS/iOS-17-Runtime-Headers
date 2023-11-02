
@protocol PKDrawingReplaySupport

@required

- (void)_replayDrawingBegan:(struct { union { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; bool x9; long long x10; double x11; bool x12; })arg1 coordinateSpace:(id <UICoordinateSpace>)arg2 activeInputProperties:(unsigned long long)arg3 inputType:(long long)arg4;
- (void)_replayDrawingCancelled;
- (void)_replayDrawingEnded;
- (void)_replayDrawingMoved:(struct { union { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; bool x9; long long x10; double x11; bool x12; })arg1 coordinateSpace:(id <UICoordinateSpace>)arg2;

@optional

- (void)_replayDrawingBegan:(struct { union { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; bool x9; long long x10; double x11; bool x12; })arg1;
- (void)_replayDrawingEndedEstimatesTimeout:(void *)arg1 withBackgroundQueueCompletion:(void *)arg2; // needs 2 arg types, found 8: double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKStroke *, NSArray *, void*
- (void)_replayDrawingEndedWithBackgroundQueueCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKStroke *, NSArray *, void*
- (void)_replayDrawingMoved:(struct { union { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; bool x9; long long x10; double x11; bool x12; })arg1;
- (void)_replayEstimatedPropertiesUpdated:(struct { union { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; bool x9; long long x10; double x11; bool x12; })arg1;

@end

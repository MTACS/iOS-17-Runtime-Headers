
@interface RoomPlan.RSCamera : _TtCs12_SwiftObject <RSCamera> {
    void imageResolution;
    void intrinsics;
    void pose;
    void trackingState;
    void transform;
}

@property (nonatomic) struct CGSize { double x1; double x2; } imageResolution;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } intrinsics;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } pose;
@property (nonatomic) long long trackingState;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } transform;

- (struct CGSize { double x1; double x2; })imageResolution;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })intrinsics;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })pose;
- (void)setImageResolution:(struct CGSize { double x1; double x2; })arg1;
- (void)setIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setPose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setTrackingState:(long long)arg1;
- (void)setTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (long long)trackingState;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })transform;

@end

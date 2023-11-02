
@interface PKDurationSnapshot : NSObject {
    void duration;
    void elapsedDuration;
    void rate;
    void snapshotTime;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double elapsedDuration;
@property (nonatomic, readonly) float rate;
@property (nonatomic, readonly) double snapshotTime;

- (double)duration;
- (double)elapsedDuration;
- (id)init;
- (id)initWithSnapshotTime:(double)arg1 rate:(float)arg2 elapsedDuration:(double)arg3 duration:(double)arg4;
- (float)rate;
- (double)snapshotTime;

@end


@interface CMOdometryManager : NSObject {
    id  _internal;
}

@property (nonatomic) double odometryUpdateInterval;

+ (bool)isAvailable;

- (void)dealloc;
- (void)deallocPrivate;
- (void)feedOdometryData:(const struct InertialOdometryData { double x1; struct { unsigned long long x_2_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_2_1_2; struct { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_2_1_3; unsigned long long x_2_1_4; unsigned long long x_2_1_5; unsigned long long x_2_1_6[3]; unsigned long long x_2_1_7; } x2; }*)arg1;
- (id)init;
- (id)initPrivate;
- (double)odometryUpdateInterval;
- (void)sendOdometryToClientPrivate;
- (void)setOdometryUpdateInterval:(double)arg1;
- (void)setOdometryUpdateIntervalPrivate:(double)arg1;
- (void)startOdometryUpdatesPrivateToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)startOdometryUpdatesToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)stopOdometryUpdates;
- (void)stopOdometryUpdatesPrivate;

@end


@interface CUKalmanFilter : NSObject {
    CUKalmanConfiguration * _config;
    double  _stateU;
    double  _stateX;
}

@property (nonatomic, readonly) double stateU;
@property (nonatomic, readonly) double stateX;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1;
- (double)stateU;
- (double)stateX;
- (double)updateWithValue:(double)arg1;
- (double)updateWithValue:(double)arg1 control:(double)arg2;

@end
